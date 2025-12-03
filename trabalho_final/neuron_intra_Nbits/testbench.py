import random
from MAxPy import results
from sklearn.metrics import mean_absolute_error

# Ajuste para seu hardware
N_BITS = 8
N_INPUTS = 4

def clock_tick(lin, label=""):
    lin.set_clk(0); lin.eval()
    lin.set_clk(1); lin.eval()

def testbench_run(ckt=None, results_filename=None):

    lin = ckt.top()
    print(f">>> ATUALIZADO Testbench Shift-Register Init: {lin.name()}")

    rstfile = results.ResultsTable(results_filename, ["mae_0", "mae_1"])
    y_true_0 = []
    y_pred_0 = []
    y_true_1 = []
    y_pred_1 = []

    # -----------------------
    # RESET
    # -----------------------
    lin.set_rst(1)
    lin.set_en(0)
    lin.set_load_en(0)
    clock_tick(lin, "reset")
    lin.set_rst(0)

    # Valores permitidos
    val_min = -(1 << (N_BITS-1))
    val_max = (1 << (N_BITS-1)) - 1

    #val_min = -10
    #val_max = 10
    for k in range(20):  
        print("\n==============================")
        print(f"=== ITERAÇÃO {k} ===")
        print("==============================")

        # ============================
        # 1. Gera vetores aleatórios para cada neurônio
        # ============================
        #trocar aqui por import para valores de verdade
        W_vec_0 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec_0 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        W_vec_1 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec_1 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]

        print(f"Neurônio 0 - W = {W_vec_0}, X = {X_vec_0}")
        print(f"Neurônio 1 - W = {W_vec_1}, X = {X_vec_1}\n")

        # ============================
        # 2. CARGA DO SHIFT REGISTER
        # ============================
        lin.set_load_en(1)
        for idx in range(N_INPUTS):
            # neurônio 0
            lin.set_w_in_0(W_vec_0[N_INPUTS-1-idx])
            lin.set_x_in_0(X_vec_0[N_INPUTS-1-idx])
            # neurônio 1
            lin.set_w_in_1(W_vec_1[N_INPUTS-1-idx])
            lin.set_x_in_1(X_vec_1[N_INPUTS-1-idx])
            clock_tick(lin, f"shift {idx}")
        lin.set_load_en(0)

        # ============================
        # 3. COMPUTAÇÃO
        # ============================
        lin.set_en(1)
        clock_tick(lin, "mul")
        clock_tick(lin, "acc")
        clock_tick(lin, "out_reg")

        # ============================
        # 4. LEITURA
        # ============================
        out_hw_0 = lin.get_out_safe_0()
        out_hw_1 = lin.get_out_safe_1()

        # Referência em Python
        acc_0 = sum([w * x for w, x in zip(W_vec_0, X_vec_0)])
        acc_1 = sum([w * x for w, x in zip(W_vec_1, X_vec_1)])

        limit_pos = (1 << (N_BITS-1)) - 1
        limit_neg = -(1 << (N_BITS-1))
        ref_0 = max(min(acc_0, limit_pos), limit_neg)
        ref_1 = max(min(acc_1, limit_pos), limit_neg)

        print(f"Neuron 0: Soma Python = {acc_0}, Saturado = {ref_0}, HW = {out_hw_0}")
        print(f"Neuron 1: Soma Python = {acc_1}, Saturado = {ref_1}, HW = {out_hw_1}")

        y_true_0.append(ref_0)
        y_pred_0.append(out_hw_0)
        y_true_1.append(ref_1)
        y_pred_1.append(out_hw_1)

    # ============================
    # 5. MÉTRICA FINAL
    # ============================
    mae_0 = mean_absolute_error(y_true_0, y_pred_0)
    mae_1 = mean_absolute_error(y_true_1, y_pred_1)
    rstfile.add(lin, {"mae_0": mae_0, "mae_1": mae_1})

    print("\n==============================")
    print(f"MAE Neuron 0 = {mae_0:.4f}")
    print(f"MAE Neuron 1 = {mae_1:.4f}")
    print("==============================\n")

    # Retorna True se ambos neurônios estiverem dentro do limite
    return (mae_0 < 0.5 and mae_1 < 0.5), lin.node_info
