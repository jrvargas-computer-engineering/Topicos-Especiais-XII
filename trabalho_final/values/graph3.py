import matplotlib.pyplot as plt

# Configurações e respectivas acurácias
config = [
    "2b x 2b",
    "4b x 2b",
    "8b x 2b",
    "2b x 4b",
    "4b x 4b",
    "8b x 4b",
    "2b x 8b",
    "4b x 8b",
    "8b x 8b"
]

accuracies = [
    21.83,
    13.28,
    13.37,
    80.89,
    77.89,
    79.06,
    82.48,
    83.44,
    84.11
]

# Cor de acordo com o valor da ENTRADA (primeiro número)
cores = []
for c in config:
    entrada_bits = int(c.split(" x ")[0].replace("b", ""))
    if entrada_bits == 2:
        cores.append("tab:blue")
    elif entrada_bits == 4:
        cores.append("tab:orange")
    else:
        cores.append("tab:green")
plt.figure(figsize=(12,5))
bars = plt.bar(config, accuracies, color=cores)

# Adicionar valores acima das barras
for bar, acc in zip(bars, accuracies):
    plt.text(
        bar.get_x() + bar.get_width()/2,
        bar.get_height() + 1,
        f"{acc:.2f}%",
        ha='center',
        va='bottom',
        fontsize=10
    )

plt.xlabel("Configuração (entrada x pesos)")
plt.ylabel("Acurácia (%)")
plt.title("Acurácia por configuração de quantização")
plt.xticks(rotation=45)
plt.grid(axis="y", linestyle="--", alpha=0.5)

plt.tight_layout()
plt.show()
