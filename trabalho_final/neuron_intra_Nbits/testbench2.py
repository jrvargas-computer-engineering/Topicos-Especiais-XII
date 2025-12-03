import importlib
from MAxPy import results
from sklearn.metrics import mean_absolute_error, mean_absolute_percentage_error

# Parâmetros do circuito
N = 8
N_INPUTS = 8

import random

def generate_packed_data(N, Y, signed=True):
    """
    Gera N valores de Y bits e os empacota em um único inteiro.
    
    Args:
        N (int): Quantidade de valores (ex: 8).
        Y (int): Número de bits por valor (ex: 4).
        signed (bool): Se True, gera números negativos e positivos.
                       Se False, gera apenas positivos.
    
    Returns:
        packed_value (int): O 'linguição' de bits pronto para o set_W.
        values_list (list): A lista original dos valores (para você conferir a conta).
    """
    packed_value = 0
    
    # Máscara para limpar bits excedentes (ex: 4 bits -> 1111 ou 0xF)
    mask = (1 << Y) - 1

    # Define o intervalo de geração (ex: 4 bits signed -> -8 a 7)
    if signed:
        min_val = -(1 << (Y - 1))
        max_val = (1 << (Y - 1)) - 1
    else:
        min_val = 0
        max_val = (1 << Y) - 1

    values_list = []

    for i in range(N):
        # 1. Gera um número aleatório dentro do range permitido
        val = random.randint(min_val, max_val)
        values_list.append(val)
        
        # 2. Converte para bits "crus" (Lida com negativo automaticamente)
        # Ex: Se val = -1 e Y=4 -> val & 0xF vira 15 (1111)
        val_bits = val & mask
        
        # 3. Desloca para a posição correta e soma (OR)
        # O valor i=0 fica no LSB (bits 0 a Y-1)
        # O valor i=1 fica logo acima (bits Y a 2Y-1), etc.
        packed_value |= (val_bits << (i * Y))

    return packed_value, values_list


def testbench_run(ckt=None, results_filename=None):
    
    zao_bits, lista_original = generate_packed_data(N=8, Y=4, signed=True)

    print(f"Valores gerados: {lista_original}")
    print(f"Valor empacotado (para set_W): {zao_bits}")
    print(f"Binário empacotado: {bin(zao_bits)}")
    
    lin = ckt.top()
    print(">>> Testbench init:", lin.name())

    # Arquivo de resultados
    rstfile = results.ResultsTable(results_filename,
                                   ["mape", "mae", "accuracy"])

    y_true = []
    y_pred = []

    # -----------------------------
    # Reset inicial
    # -----------------------------
    lin.set_rst(1)
    lin.set_clk(0); lin.eval()
    lin.set_clk(1); lin.eval()
    lin.set_rst(0)

    # -----------------------------
    # Teste simples: apenas dois valores
    # -----------------------------
    W_val = 3
    X_val = 2

    # Para testar sem empacotamento: colocamos W_val em W[0], resto zero
    W_vec = [0] * N_INPUTS
    X_vec = [0] * N_INPUTS
    W_vec[0] = W_val
    X_vec[0] = X_val

    # Empacotamento manual simples para MaxPy
    W_packed = W_vec[0]
    X_packed = X_vec[0]

    lin.set_W(9)
    lin.set_X_N(8)
    lin.set_en(1)

    # 1 ciclo de clock
    lin.set_clk(0); lin.eval()
    lin.set_clk(1); lin.eval()
    lin.set_clk(0); lin.eval()
    lin.set_clk(1); lin.eval()
    # leitura
    out_hw = lin.get_Out()
    print("out+hw 1: " + str(out_hw))

    # conversão signed
    if out_hw & (1 << (N-1)):
        out_hw -= (1 << N)

    # referência
    ref = W_val * X_val
    y_true.append(ref)
    y_pred.append(out_hw)

    print("ref: " + str(ref))
    print("out_hw: " + str(out_hw)) 

    # ---------------------------------------------------
    # Métricas
    # ---------------------------------------------------
    mape = mean_absolute_percentage_error(y_true, y_pred)
    mae = mean_absolute_error(y_true, y_pred)

    # Para compatibilidade, mesmo que accuracy não faça sentido
    from sklearn.metrics import accuracy_score
    accuracy = accuracy_score(y_true, y_pred)

    rstfile.add(lin, {"mape": mape, "mae": mae, "accuracy": accuracy})

    print(f"> MAPE={mape:.4f}, MAE={mae:.4f}, ACC={accuracy:.4f}")
    print(">>> Testbench end.")

    prun_flag = mape < 2
    return prun_flag, lin.node_info


if __name__ == "__main__":
    mod = importlib.import_module("neuron_intra_Nbits_exact.neuron_intra_Nbits")
    testbench_run(mod, "tb_simple.csv")
