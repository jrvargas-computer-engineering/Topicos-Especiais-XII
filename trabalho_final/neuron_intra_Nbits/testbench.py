# Testbench completo para MAXPy com leitura de pesos e inputs reais
# Gerado automaticamente conforme especificação da Juliana

import random
from MAxPy import results
from sklearn.metrics import mean_absolute_percentage_error, mean_absolute_error, accuracy_score

# ----------------------
# PARÂMETROS
# ----------------------
N_BITS = 8
VALUES_PER_MAC = 4          # Cada MAC consome 4 valores
INPUT_SIZE = 128            # Cada linha tem 128 valores
CYCLES = INPUT_SIZE // 4    # 32 ciclos
NEURONS_TOTAL = 35
NEURONS_PER_BLOCK = 8       # Hardware processa 8 neurônios por vez

# ----------------------
# LEITURA DOS ARQUIVOS
# ----------------------
def load_weights(filename):
    weights = []
    with open(filename) as f:
        for line in f:
            vals = line.strip().split()
            weights.append([int(v) for v in vals])  # Agora decimal
    return weights

def load_inputs(filename, max_lines=None):
    inputs = []
    with open(filename) as f:
        for i, line in enumerate(f):
            if max_lines and i >= max_lines:
                break
            vals = line.strip().split()
            inputs.append([int(v) for v in vals])   # Agora decimal
    return inputs

# ----------------------
# CLOCK
# ----------------------
def clock_tick(lin):
    lin.set_clk(0); lin.eval()
    lin.set_clk(1); lin.eval()

# ----------------------
# TESTBENCH PRINCIPAL
# ----------------------
def testbench_run(ckt=None, results_filename=None, weights_file="values2/pesos/int8.txt", inputs_file="values2/input/entrada_int8.txt", num_input_lines=10):

    # Carregar arquivos reais
    weights_table = load_weights(weights_file)   # 35 x 128
    inputs_table = load_inputs(inputs_file, num_input_lines)

    lin = ckt.top()
    print(f">>> Testbench MAXPy com arquivos reais: {lin.name()}")

    # colunas das métricas
    mae_cols = [f"mae_{i}" for i in range(NEURONS_PER_BLOCK)]
    mape_cols = [f"mape_{i}" for i in range(NEURONS_PER_BLOCK)]
    acc_cols = [f"accuracy_{i}" for i in range(NEURONS_PER_BLOCK)]
    col_names = mae_cols + mape_cols + acc_cols

    rstfile = results.ResultsTable(results_filename, col_names)

    # Armazenadores das métricas
    y_true = [[] for _ in range(NEURONS_PER_BLOCK)]
    y_pred = [[] for _ in range(NEURONS_PER_BLOCK)]

    # ----------------------
    # RESET
    # ----------------------
    lin.set_rst(1)
    lin.set_en(0)
    lin.set_load_en(0)
    clock_tick(lin)
    lin.set_rst(0)

    # ----------------------
    # PROCESSA BLOCOS DE 8 NEURÔNIOS
    # ----------------------
    num_blocks = (NEURONS_TOTAL + NEURONS_PER_BLOCK - 1) // NEURONS_PER_BLOCK

    for block in range(num_blocks):
        block_start = block * NEURONS_PER_BLOCK
        block_end = min(block_start + NEURONS_PER_BLOCK, NEURONS_TOTAL)
        block_size = block_end - block_start

        # print(f"\n============== BLOCO {block} ({block_size} neurônios) ==============")

        # Extrai os pesos para este bloco
        block_weights = weights_table[block_start:block_end]

        # ----------------------
        # PARA CADA LINHA DE ENTRADA DO ARQUIVO
        # ----------------------
        for line_idx, input_line in enumerate(inputs_table):
            # print(f"\n---- Input line {line_idx} ----")

            # ----------------------
            # CARREGAMENTO DOS 128 VALORES (4 por ciclo)
            # ----------------------
            lin.set_load_en(1)

            for j in range(CYCLES):
                # índice inicial e final no vetor de entrada
                x_slice = input_line[j*4:(j+1)*4]
                x0, x1, x2, x3 = x_slice

                for n in range(block_size):
                    # pesos reais daquele neurônio
                    w_slice = block_weights[n][j*4:(j+1)*4]
                    w0, w1, w2, w3 = w_slice

                    # A entrada do MAXPy é invertida como no testbench original
                    getattr(lin, f"set_w_in_{n}")(w3)
                    getattr(lin, f"set_x_in_{n}")(x3)
                clock_tick(lin)

                for n in range(block_size):
                    w0, w1, w2, w3 = block_weights[n][j*4:(j+1)*4]
                    getattr(lin, f"set_w_in_{n}")(w2)
                    getattr(lin, f"set_x_in_{n}")(x2)
                clock_tick(lin)

                for n in range(block_size):
                    w0, w1, w2, w3 = block_weights[n][j*4:(j+1)*4]
                    getattr(lin, f"set_w_in_{n}")(w1)
                    getattr(lin, f"set_x_in_{n}")(x1)
                clock_tick(lin)

                for n in range(block_size):
                    w0, w1, w2, w3 = block_weights[n][j*4:(j+1)*4]
                    getattr(lin, f"set_w_in_{n}")(w0)
                    getattr(lin, f"set_x_in_{n}")(x0)
                clock_tick(lin)

            lin.set_load_en(0)

            # ----------------------
            # COMPUTAÇÃO
            # ----------------------
            lin.set_en(1)
            clock_tick(lin)
            clock_tick(lin)
            clock_tick(lin)

            # ----------------------
            # LEITURA DAS SAÍDAS
            # ----------------------
            limit_pos = (1 << (N_BITS-1)) - 1
            limit_neg = -(1 << (N_BITS-1))

            for n in range(block_size):
                out_hw = getattr(lin, f"get_out_safe_{n}")()
                ref = sum([w * x for w, x in zip(block_weights[n], input_line)])

                # saturação
                ref = max(min(ref, limit_pos), limit_neg)

                y_true[n].append(ref)
                y_pred[n].append(out_hw)

                # print(f"Neuron {block_start+n}: REF={ref}  HW={out_hw}")

    # ----------------------
    # MÉTRICAS DO BLOCO DE 8
    # ----------------------
    results_save = {}

    print("\n=========== MÉTRICAS FINAIS ===========")
    for n in range(NEURONS_PER_BLOCK):
        if len(y_true[n]) == 0:
            results_save[f"mae_{n}"] = -1
            results_save[f"mape_{n}"] = -1
            results_save[f"accuracy_{n}"] = -1
            continue

        mae = mean_absolute_error(y_true[n], y_pred[n])
        results_save[f"mae_{n}"] = mae
        print(f"Neuron {n} MAE = {mae:.4f}")

        try:
            mape = mean_absolute_percentage_error(y_true[n], y_pred[n])
        except:
            mape = -1.0
        results_save[f"mape_{n}"] = mape
        print(f"Neuron {n} MAPE = {mape:.4f}")

        acc = accuracy_score(y_true[n], y_pred[n])
        results_save[f"accuracy_{n}"] = acc
        print(f"Neuron {n} ACC = {acc:.4f}")

    rstfile.add(lin, results_save)
    return True, lin.node_info

if __name__ == "__main__":
    mod = importlib.import_module(name="neuron_wrapper_8neurons_exact.neuron_wrapper_8neurons")
    testbench_run(ckt=mod, results_filename="testbench_dev.csv")
