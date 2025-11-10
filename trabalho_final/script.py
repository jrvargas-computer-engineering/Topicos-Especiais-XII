import pytimeloop.timeloopfe.v4 as tl
import os
import shutil # Importado para limpar a pasta 'outputs'

# --- Adicionado: Limpeza da pasta de saída ---
# Isso evita erros se a pasta 'outputs' já existir
output_dir = f"{os.curdir}/outputs"
if os.path.exists(output_dir):
    print(f"Limpando pasta de saída antiga: {output_dir}")
    shutil.rmtree(output_dir)
# --- Fim da adição ---

# 1. Defina o caminho para o arquivo "agregador"
TOP_PATH = f"{os.curdir}/top.yaml.jinja"

# 2. Carregue a especificação
spec = tl.Specification.from_yaml_files(TOP_PATH)

# 3. Modifique para seu DSE
#    Vamos alterar a profundidade do buffer
#    ALTERAÇÃO 1: O nome agora é "Buffer" (maiúsculo)
spec.architecture.find("Buffer").attributes.depth = 128 # (Mudei de 2 para 128, um valor mais razoável)

# ALTERAÇÃO 2: A linha abaixo foi removida porque 'PE' não existe 
# na sua nova arquitetura (que é 'accelerator' -> 'MACC').
# spec.architecture.find("PE").spatial.meshX *= 2

# 4. Rode o mapper
print("Rodando o Timeloop Mapper...")

# --- Adicionado: Bloco Try/Except ---
# Isso captura falhas se o mapper não conseguir rodar
try:
    result = tl.call_mapper(spec, output_dir=output_dir)

    # 5. Imprima os resultados
    print("\nSimulação concluída!")
    stats = result.get_stats()
    print(f"Energia (pJ/MAC): {stats.per_compute('energy') * 1e12}")
    print(f"Ciclos: {stats.cycles}")

except Exception as e:
    print(f"\n--- A SIMULAÇÃO FALHOU ---")
    print(f"Erro: {e}")
    print("\nVerifique se os plugins do Accelergy para 'regfile' e 'intmac' estão instalados.")
# --- Fim da adição ---