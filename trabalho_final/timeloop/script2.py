import os
import shutil
import pytimeloop.timeloopfe.v4 as tl


# ==========================================
# PARÂMETROS DE EXPLORAÇÃO (DSE)
# ==========================================
# Variações de precisão (bits)
word_bits_list = [8, 16, 32]

# Variações de paralelismo (número de MACs)
instances_list = [1, 16, 64, 256, 1024]

# Arquivo de entrada e diretório de saída base
YAML_PATH = "top.yaml.jinja"  # <--- SEU ARQUIVO AQUI
BASE_OUTPUT_DIR = "./outputs_dse"

# ==========================================
# LOOP DE EXPLORAÇÃO
# ==========================================
print(f"Iniciando DSE: {len(word_bits_list)} precisões x {len(instances_list)} configs de instâncias")
print("-" * 80)
print(f"{'Bits':<6} | {'Instances':<10} | {'Ciclos':<12} | {'Energia (pJ)':<15} | {'Área (u^2)':<15}")
print("-" * 80)

# Carrega a especificação base UMA vez
spec_base = tl.Specification.from_yaml_files(YAML_PATH)

results = []

for bits in word_bits_list:
    for n_instances in instances_list:
        
        # Cria uma cópia fresca da especificação para esta iteração
        # (Isso evita que modificações de um loop afetem o próximo)
        spec = spec_base
        
        # ---------------------------------------------------------
        # 1. MODIFICAR A ARQUITETURA
        # ---------------------------------------------------------
        
        # --- A. Configurar o BUFFER (Memória) ---
        buffer_node = spec.architecture.find("Buffer")
        if buffer_node:
            # width: largura física da interface (geralmente igual ao dado em regfiles simples)
            buffer_node.attributes['width'] = bits 
            # datawidth: tamanho lógico do dado
            buffer_node.attributes['datawidth'] = bits
        
   
    # --- B. Configurar o MACC (Computação) ---
        macc_node = spec.architecture.find("MACC")
        if macc_node:
            # width: precisão da operação matemática
            macc_node.attributes['width'] = bits
            
            # instances: número de unidades físicas
            macc_node.attributes['instances'] = n_instances
            
            # --- CORREÇÃO DO ERRO DE ASSERTION ---
            # O Timeloop exige que a geometria (X * Y) seja igual às instâncias.
            # Vamos assumir um arranjo 1D (tudo em uma linha):
            macc_node.attributes['meshX'] = n_instances
            macc_node.attributes['meshY'] = 1

        # ---------------------------------------------------------
        # 2. RODAR SIMULAÇÃO
        # ---------------------------------------------------------
        run_name = f"bits_{bits}_inst_{n_instances}"
        output_dir = os.path.join(BASE_OUTPUT_DIR, run_name)
        
        if os.path.exists(output_dir):
            shutil.rmtree(output_dir)
            
        try:
            # Roda o Mapper e pega as estatísticas
            stats = tl.call_mapper(spec, output_dir=output_dir)
            
            # ---------------------------------------------------------
            # 3. COLETAR DADOS
            # ---------------------------------------------------------
            cycles = stats.cycles
            energy = stats.energy # Energia total da topologia (pJ)
            area = stats.area     # Área total (um^2)
            
            # Imprime na tabela
            print(f"{bits:<6} | {n_instances:<10} | {cycles:<12} | {energy:<15.4f} | {area:<15.2f}")
            
            results.append({
                "bits": bits,
                "instances": n_instances,
                "cycles": cycles,
                "energy": energy,
                "area": area
            })
            
        except Exception as e:
            # Se falhar, imprime o erro mas continua o loop para os próximos testes
            print(f"{bits:<6} | {n_instances:<10} | FALHA: {str(e)[:40]}...")

print("-" * 80)
print("Exploração concluída.")