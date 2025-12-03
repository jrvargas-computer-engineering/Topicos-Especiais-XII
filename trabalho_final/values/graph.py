import re
import matplotlib.pyplot as plt

# Arquivos e legendas desejadas
arquivos = [
    "accuracy/original.txt",
    "accuracy/accuracy_norm_01.txt",
    "accuracy/accuracy_norm_m11.txt",
]

# Legendas desejadas (na mesma ordem dos arquivos)
legendas = [
    "Original",
    "Normalização 0.0 até 1.0",
    "Normalização -1.0 até 1.0",
]

def ler_acuracias_por_classe(caminho):
    acuracias = []
    padrao = r"Classe (\d+): ([0-9\.]+)%"

    with open(caminho, "r", encoding="utf-8", errors="ignore") as f:
        conteudo = f.read()
        for classe, valor in re.findall(padrao, conteudo):
            acuracias.append(float(valor))

    return acuracias

plt.figure(figsize=(12, 6))

for caminho, legenda in zip(arquivos, legendas):
    acuracias = ler_acuracias_por_classe(caminho)
    plt.plot(range(len(acuracias)), acuracias, marker='o', label=legenda)

plt.title("Acurácia x Classe")
plt.xlabel("Classe")
plt.ylabel("Acurácia (%)")
plt.grid(True, linestyle="--", alpha=0.4)
plt.legend()
plt.tight_layout()
plt.show()
