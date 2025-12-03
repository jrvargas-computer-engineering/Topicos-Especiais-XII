import re
import matplotlib.pyplot as plt
import numpy as np

# Arquivos e legendas desejadas
arquivos = [
    "accuracy/original.txt",
    "accuracy/accuracy_norm_01.txt",
    "accuracy/accuracy_norm_m11.txt",
    "accuracy/accuracy_quant2.txt",
    "accuracy/accuracy_quant4.txt",
    "accuracy/accuracy_quant8.txt",
]

# Legendas desejadas (na mesma ordem dos arquivos)
legendas = [
    "Original",
    "Normalização 0.0 até 1.0",
    "Normalização -1.0 até 1.0",
    "Quantização 2 bits",
    "Quantização 4 bits",   
    "Quantização 8 bits",
]

def ler_acuracias_por_classe(caminho):
    """Extrai acurácias das classes de um arquivo no formato informado."""
    acuracias = []
    padrao = r"Classe (\d+): ([0-9\.]+)%"

    with open(caminho, "r", encoding="utf-8", errors="ignore") as f:
        conteudo = f.read()
        for classe, valor in re.findall(padrao, conteudo):
            acuracias.append(float(valor))

    return acuracias

# Calcular médias
medias = []

for arq in arquivos:
    acur = ler_acuracias_por_classe(arq)
    medias.append(np.mean(acur))

# Plot do gráfico de barras
plt.figure(figsize=(8, 5))
plt.bar(legendas, medias)
plt.title("Acurácia Média x Técnica de Pré-processamento")
plt.ylabel("Acurácia Média (%)")
plt.xlabel("Técnica de Pré-processamento")
plt.grid(axis='y', linestyle='--', alpha=0.4)
plt.tight_layout()
plt.show()
