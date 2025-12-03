import random
from MAxPy import results
from sklearn.metrics import mean_absolute_error

# Ajuste para bater com seu hardware compilado (N=4 ou N=8)
N_BITS = 4
N_INPUTS = 8 

def testbench_run(ckt=None, results_filename=None):
    lin = ckt.top()
    print(f">>> Testbench Shift-Register Init: {lin.name()}")

    rstfile = results.ResultsTable(results_filename, ["mae"])
    y_true = []
    y_pred = []

    # Reset
    lin.set_rst(1); lin.set_en(0); lin.set_load_en(0)
    lin.set_clk(0); lin.eval(); lin.set_clk(1); lin.eval()
    lin.set_rst(0)

    #val_min = -(2**(N_BITS-1))
    val_min = 0
    #val_max = (2**(N_BITS-1)) - 1
    val_max = 7
    for k in range(20): # 20 Rodadas de teste
        
        # 1. Gera vetores de teste
        W_vec = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        
        # 2. CARGA (SHIFT REGISTER)
        # Invertemos a lista ([::-1]) para que o W_vec[0] seja o ÚLTIMO a entrar
        # e portanto fique na posição W[0] (LSB) do hardware.
        lin.set_load_en(1) 
        
        for w, x in zip(reversed(W_vec), reversed(X_vec)):
            lin.set_w_in(w) # Passa inteiro simples (safe)
            lin.set_x_in(x)
            # Clock para empurrar
            lin.set_clk(0); lin.eval(); lin.set_clk(1); lin.eval()
            
        lin.set_load_en(0) # Para de carregar

        # 3. COMPUTAÇÃO
        lin.set_en(1)
        # Clocks de latência do neurônio
        lin.set_clk(0); lin.eval(); lin.set_clk(1); lin.eval() # Prod
        lin.set_clk(0); lin.eval(); lin.set_clk(1); lin.eval() # Acc/Out
        
        # 4. LEITURA E VALIDAÇÃO
        out_hw = lin.get_out_safe() # Leitura segura 32 bits

        # Referência Python
        acc = sum([w * x for w, x in zip(W_vec, X_vec)])
        
        # Saturação (ReLU Saturada)
        limit_pos = (1 << (N_BITS - 1)) - 1
        ref = limit_pos if acc > limit_pos else acc
        
        y_true.append(ref)
        y_pred.append(out_hw)
        
        # Debug visual
        print(f"Iter {k}: W={W_vec} | X={X_vec}")
        print(f"        Ref={ref} | HW={out_hw}")

    mae = mean_absolute_error(y_true, y_pred)
    rstfile.add(lin, {"mae": mae})
    print(f"> Results: MAE={mae:.4f}")
    
    return mae < 0.5, lin.node_info