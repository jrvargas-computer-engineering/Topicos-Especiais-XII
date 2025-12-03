import re
import matplotlib.pyplot as plt

# Arquivo contendo os dados
arquivo = "accuracy/accuracy_cross.txt"

# Estrutura para guardar os dados:
# dados[pesos] = {entrada: acuracia}
dados = {
    2: {},
    4: {},
    8: {},
    16: {}
}

# Expressão regular para extrair informações
padrao = r"Pesos (\d+) bits, Entrada (\d+) bits -> ([0-9\.]+)%"

with open(arquivo, "r", encoding="utf-8", errors="ignore") as f:
    conteudo = f.read()

    matches = re.findall(padrao, conteudo)
    for pesos, entrada, acc in matches:
        pesos = int(pesos)
        entrada = int(entrada)
        acc = float(acc)
        dados[pesos][entrada] = acc


# Gerar um gráfico para cada tamanho de pesos
for pesos, entradas_dict in dados.items():

    entradas = sorted(entradas_dict.keys())
    acuracias = [entradas_dict[e] for e in entradas]

    plt.figure(figsize=(6, 4))
    plt.bar([str(e) for e in entradas], acuracias)
    plt.title(f"Acurácia por Tamanho da Entrada (Pesos = {pesos} bits)")
    plt.xlabel("Tamanho da Entrada (bits)")
    plt.ylabel("Acurácia (%)")
    plt.ylim(0, 100)
    plt.grid(axis='y', linestyle='--', alpha=0.4)
    plt.tight_layout()
    plt.show()
