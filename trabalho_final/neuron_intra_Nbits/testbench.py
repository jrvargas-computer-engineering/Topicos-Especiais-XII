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

    rstfile = results.ResultsTable(results_filename, ["mae_0", "mae_1", "mae_2", "mae_3", "mae_4", "mae_5", "mae_6", "mae_7"])
    y_true_0 = []
    y_pred_0 = []
    y_true_1 = []
    y_pred_1 = []
    y_true_2 = []
    y_pred_2 = []
    y_true_3 = []
    y_pred_3 = []
    y_true_4 = []
    y_pred_4 = []
    y_true_5 = []
    y_pred_5 = []
    y_true_6 = []
    y_pred_6 = []
    y_true_7 = []
    y_pred_7 = []

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
        W_vec_2 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec_2 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        W_vec_3 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec_3 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        W_vec_4 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec_4 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        W_vec_5 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec_5 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        W_vec_6 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec_6 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        W_vec_7 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]
        X_vec_7 = [random.randint(val_min, val_max) for _ in range(N_INPUTS)]  
        print(f"Neurônio 0 - W = {W_vec_0}, X = {X_vec_0}\n")
        print(f"Neurônio 1 - W = {W_vec_1}, X = {X_vec_1}\n")
        print(f"Neurônio 2 - W = {W_vec_2}, X = {X_vec_2}\n")
        print(f"Neurônio 3 - W = {W_vec_3}, X = {X_vec_3}\n")
        print(f"Neurônio 4 - W = {W_vec_4}, X = {X_vec_4}\n")
        print(f"Neurônio 5 - W = {W_vec_5}, X = {X_vec_5}\n")
        print(f"Neurônio 6 - W = {W_vec_6}, X = {X_vec_6}\n")
        print(f"Neurônio 7 - W = {W_vec_7}, X = {X_vec_7}\n")

        # ============================
        # 2. CARGA DO SHIFT REGISTER
        # ============================
        lin.set_load_en(1)
        for idx in range(N_INPUTS):
            lin.set_w_in_0(W_vec_0[N_INPUTS-1-idx])
            lin.set_x_in_0(X_vec_0[N_INPUTS-1-idx])

            lin.set_w_in_1(W_vec_1[N_INPUTS-1-idx])
            lin.set_x_in_1(X_vec_1[N_INPUTS-1-idx])

            lin.set_w_in_2(W_vec_2[N_INPUTS-1-idx])
            lin.set_x_in_2(X_vec_2[N_INPUTS-1-idx])

            lin.set_w_in_3(W_vec_3[N_INPUTS-1-idx])
            lin.set_x_in_3(X_vec_3[N_INPUTS-1-idx])

            lin.set_w_in_4(W_vec_4[N_INPUTS-1-idx])
            lin.set_x_in_4(X_vec_4[N_INPUTS-1-idx])

            lin.set_w_in_5(W_vec_5[N_INPUTS-1-idx])
            lin.set_x_in_5(X_vec_5[N_INPUTS-1-idx])

            lin.set_w_in_6(W_vec_6[N_INPUTS-1-idx])
            lin.set_x_in_6(X_vec_6[N_INPUTS-1-idx])

            lin.set_w_in_7(W_vec_7[N_INPUTS-1-idx])
            lin.set_x_in_7(X_vec_7[N_INPUTS-1-idx])
    
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
        out_hw_2 = lin.get_out_safe_2()
        out_hw_3 = lin.get_out_safe_3()
        out_hw_4 = lin.get_out_safe_4()
        out_hw_5 = lin.get_out_safe_5()
        out_hw_6 = lin.get_out_safe_6()
        out_hw_7 = lin.get_out_safe_7()

        # Referência em Python
        acc_0 = sum([w * x for w, x in zip(W_vec_0, X_vec_0)])
        acc_1 = sum([w * x for w, x in zip(W_vec_1, X_vec_1)])
        acc_2 = sum([w * x for w, x in zip(W_vec_2, X_vec_2)])
        acc_3 = sum([w * x for w, x in zip(W_vec_3, X_vec_3)])
        acc_4 = sum([w * x for w, x in zip(W_vec_4, X_vec_4)])
        acc_5 = sum([w * x for w, x in zip(W_vec_5, X_vec_5)])
        acc_6 = sum([w * x for w, x in zip(W_vec_6, X_vec_6)])
        acc_7 = sum([w * x for w, x in zip(W_vec_7, X_vec_7)])

        limit_pos = (1 << (N_BITS-1)) - 1
        limit_neg = -(1 << (N_BITS-1))

        ref_0 = max(min(acc_0, limit_pos), limit_neg)
        ref_1 = max(min(acc_1, limit_pos), limit_neg)
        ref_2 = max(min(acc_2, limit_pos), limit_neg)
        ref_3 = max(min(acc_3, limit_pos), limit_neg)
        ref_4 = max(min(acc_4, limit_pos), limit_neg)
        ref_5 = max(min(acc_5, limit_pos), limit_neg)
        ref_6 = max(min(acc_6, limit_pos), limit_neg)
        ref_7 = max(min(acc_7, limit_pos), limit_neg)

        print(f"Neuron 0: Soma Python = {acc_0}, Saturado = {ref_0}, HW = {out_hw_0}")
        print(f"Neuron 1: Soma Python = {acc_1}, Saturado = {ref_1}, HW = {out_hw_1}")
        print(f"Neuron 2: Soma Python = {acc_2}, Saturado = {ref_2}, HW = {out_hw_2}")
        print(f"Neuron 3: Soma Python = {acc_3}, Saturado = {ref_3}, HW = {out_hw_3}")
        print(f"Neuron 4: Soma Python = {acc_4}, Saturado = {ref_4}, HW = {out_hw_4}")
        print(f"Neuron 5: Soma Python = {acc_5}, Saturado = {ref_5}, HW = {out_hw_5}")
        print(f"Neuron 6: Soma Python = {acc_6}, Saturado = {ref_6}, HW = {out_hw_6}")
        print(f"Neuron 7: Soma Python = {acc_7}, Saturado = {ref_7}, HW = {out_hw_7}")
  
        y_true_0.append(ref_0)
        y_true_1.append(ref_1)
        y_true_2.append(ref_2)
        y_true_3.append(ref_3)
        y_true_4.append(ref_4)
        y_true_5.append(ref_5)
        y_true_6.append(ref_6)
        y_true_7.append(ref_7)
        
        y_pred_0.append(out_hw_0)
        y_pred_1.append(out_hw_1)
        y_pred_2.append(out_hw_2)
        y_pred_3.append(out_hw_3)
        y_pred_4.append(out_hw_4)
        y_pred_5.append(out_hw_5)
        y_pred_6.append(out_hw_6)
        y_pred_7.append(out_hw_7)

    # ============================
    # 5. MÉTRICA FINAL
    # ============================
    mae_0 = mean_absolute_error(y_true_0, y_pred_0)
    mae_1 = mean_absolute_error(y_true_1, y_pred_1)
    mae_2 = mean_absolute_error(y_true_2, y_pred_2)
    mae_3 = mean_absolute_error(y_true_3, y_pred_3)
    mae_4 = mean_absolute_error(y_true_4, y_pred_4)
    mae_5 = mean_absolute_error(y_true_5, y_pred_5)
    mae_6 = mean_absolute_error(y_true_6, y_pred_6)
    mae_7 = mean_absolute_error(y_true_7, y_pred_7)
    rstfile.add(lin, {"mae_0": mae_0, "mae_1": mae_1, "mae_2": mae_2, "mae_3": mae_3, "mae_4": mae_4, "mae_5": mae_6, "mae_6": mae_7, "mae_7": mae_7})

    print("\n==============================")
    print(f"MAE Neuron 0 = {mae_0:.4f}")
    print(f"MAE Neuron 1 = {mae_1:.4f}")
    print(f"MAE Neuron 2 = {mae_2:.4f}")
    print(f"MAE Neuron 3 = {mae_3:.4f}")
    print(f"MAE Neuron 4 = {mae_4:.4f}")
    print(f"MAE Neuron 5 = {mae_5:.4f}")
    print(f"MAE Neuron 6 = {mae_6:.4f}")
    print(f"MAE Neuron 7 = {mae_7:.4f}")
    print("==============================\n")

    # Retorna True se ambos neurônios estiverem dentro do limite
    return (mae_0 < 0.5 and mae_1 < 0.5 and mae_2 < 0.5 and mae_3 < 0.5 and mae_4 < 0.5 and mae_5 < 0.5 and mae_6 < 0.5 and mae_7 < 0.5), lin.node_info
