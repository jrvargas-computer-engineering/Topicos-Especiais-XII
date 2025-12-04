import re
import matplotlib.pyplot as plt

# Liste aqui os 4 arquivos que você quer ler:
arquivos = [
    "accuracy/original.txt",
    "accuracy/accuracy_quant2.txt",
    "accuracy/accuracy_quant4.txt",
    "accuracy/accuracy_quant8.txt"
]

# Nome de cada curva no gráfico
labels = [
    "Original",
    "2 bits",
    "4 bits",
    "8 bits"
]

def ler_acuracias(path):
    """
    Lê um arquivo no formato dado e retorna uma lista com as acurácias de cada classe.
    """
    acuracias = []
    with open(path, "r") as f:
        for linha in f:
            m = re.search(r"Classe\s+(\d+):\s+([0-9.]+)%", linha)
            if m:
                acuracias.append(float(m.group(2)))
    return acuracias

# Ler todos
todas_acuracias = [ler_acuracias(arq) for arq in arquivos]

# Plotar
plt.figure(figsize=(12,5))

for acc, label in zip(todas_acuracias, labels):
    plt.plot(range(len(acc)), acc, marker="o", label=label)

plt.xlabel("Classe")
plt.ylabel("Acurácia (%)")
plt.title("Acurácia por classe para cada configuração")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()
