import numpy as np

def load_weights(path):
    return np.loadtxt(path, dtype=np.int8)

def load_inputs(path):
    return np.loadtxt(path, dtype=np.int8)

def neuron_int8(x, w):
    # converte para int32 para evitar overflow durante a soma
    x32 = x.astype(np.int32)
    w32 = w.astype(np.int32)

    prod = x32 * w32
    acc = prod.sum()
    return acc

def forward_int8(x, W):
    outputs = []
    for i in range(W.shape[0]):
        outputs.append(neuron_int8(x, W[i]))
    return np.array(outputs, dtype=np.int32)

W = load_weights("trabalho_final/values2/pesos/int2.txt")
print("Weights shape:", W.shape)
print(W)

X = load_inputs("trabalho_final/values2/input/entrada_int2.txt")
print("Inputs shape:", X.shape)
print(X)

labels = np.loadtxt("trabalho_final/values2/input/labels_reais_teste.txt", dtype=np.int32)

print(X.shape)   # deve mostrar (28400, 128)
print(X.dtype)   # int8
"""
imagem = X[7000]  
# pesos = W[0]   
# saida = neuron_int8(imagem, pesos)
# print("Saída do neurônio 0:", saida)

out = forward_int8(imagem, W)
classe = np.argmax(out)

print(out)
print("Classe escolhida:", classe)
"""
preds = []

for i in range(X.shape[0]):
    out = forward_int8(X[i], W)
    pred = np.argmax(out)
    preds.append(pred)

preds = np.array(preds, dtype=np.int32)

accuracy = (preds == labels).mean()
print(f"\nAcurácia total: {accuracy*100:.2f}%")

classes = np.unique(labels)
print("\nAcurácia por classe:")

for c in classes:
    mask = (labels == c)
    acc_c = (preds[mask] == labels[mask]).mean()
    print(f"  Classe {c}: {acc_c*100:.2f}%")