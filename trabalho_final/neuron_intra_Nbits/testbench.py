import random
from MAxPy import results
from sklearn.metrics import mean_absolute_error

# Ajuste para seu hardware
N_BITS = 8
N_INPUTS = 8

def clock_tick(lin, label=""):
    print(f"    >> Clock tick {label}")
    lin.set_clk(0); lin.eval()
    lin.set_clk(1); lin.eval()


def testbench_run(ckt=None, results_filename=None):

    lin = ckt.top()
    print(f">>> ATUALIZADO Testbench Shift-Register Init: {lin.name()}")

    rstfile = results.ResultsTable(results_filename, ["mae"])
    y_true = []
    y_pred = []

    # -----------------------
    # RESET
    # -----------------------
    print("\n=== RESET INICIAL ===")
    lin.set_rst(1)
    lin.set_en(0)
    lin.set_load_en(0)
    clock_tick(lin, "reset")
    lin.set_rst(0)
    print("Reset concluído.\n")

    # Valores permitidos
    #val_min = -(1 << (N_BITS-1))  # -8
    #val_max = (1 << (N_BITS-1)) - 1  # 7

    val_min = -7
    val_max = 7

    for k in range(20):  

        print("\n==============================")
        print(f"=== ITERAÇÃO {k} ===")
        print("==============================")

        # ============================
        # 1. Gera vetores aleatórios
        # ============================
        W_vec = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        print(f"Gerando vetores:")
        print(f"  W = {W_vec}")
        print(f"  X = {X_vec}\n")

        # ============================
        # 2. CARGA DO SHIFT REGISTER
        # ============================
        print("=== FASE DE CARGA (SHIFT) ===")
        lin.set_load_en(1)
        print("load_en = 1")

        for idx, (w, x) in enumerate(zip(reversed(W_vec), reversed(X_vec))):
            print(f"  Shift {idx}: Inserindo w={w}, x={x}")
            lin.set_w_in(w)
            lin.set_x_in(x)
            clock_tick(lin, f"shift {idx}")

        lin.set_load_en(0)
        print("load_en = 0 (fim da carga)\n")

        # ============================
        # 3. COMPUTAÇÃO
        # ============================
        print("=== FASE DE COMPUTAÇÃO ===")
        lin.set_en(1)
        print("en = 1 (ativado)\n")

        print(" Ciclo 1: multiplicação")
        clock_tick(lin, "mul")

        print(" Ciclo 2: acumulação")
        clock_tick(lin, "acc")

        print(" Ciclo 3: registrar saída final")
        clock_tick(lin, "out_reg")

        # ============================
        # 4. LEITURA
        # ============================
        print("\n=== LEITURA DO HARDWARE ===")
        out_hw = lin.get_out_safe()
        print(f"  out_safe = {out_hw}")

        # Referência em Python
        acc = sum([w * x for w, x in zip(W_vec, X_vec)])
        #limit_pos = (1 << (N_BITS - 1)) - 1  # ex: 7
        #ref = min(acc, limit_pos)

        limit_pos = (1 << (N_BITS-1)) - 1  # 127 para 8 bits
        limit_neg = -(1 << (N_BITS-1))     # -128 para 8 bits
        ref = max(min(acc, limit_pos), limit_neg)

        print(f"\n=== RESULTADOS ===")
        print(f"  Soma Python  = {acc}")
        print(f"  Saturado ref = {ref}")
        print(f"  HW output    = {out_hw}")

        y_true.append(ref)
        y_pred.append(out_hw)

    # ============================
    # 5. MÉTRICA FINAL
    # ============================
    print("\n==============================")
    print("=== RESULTADO FINAL ===")
    mae = mean_absolute_error(y_true, y_pred)
    rstfile.add(lin, {"mae": mae})

    print(f"MAE = {mae:.4f}")
    print("==============================\n")

    return mae < 0.5, lin.node_info
