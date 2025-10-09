import math
import re
import os

# Caminhos dos arquivos RTL
rtl_path = '../rtl/base.v'
rtl_out_path = '../rtl/neuron_intra_Nbits.v'

# Caminho do script de síntese
synth_script_path = "synth_script.tcl"

# Lê o RTL original
with open(rtl_path, 'r') as rtl_file:
    rtl_lines = rtl_file.readlines()

# Valores a explorar
values_N = [8, 16, 64]
values_N_INP = [4, 8, 16]

for val_N in values_N:
    for val_N_INP in values_N_INP:
        print(f"\n=== Rodando síntese para N={val_N}, N_INPUTS={val_N_INP} ===")

        # ==========================================================
        # PASSO 1 - Modifica o RTL com novos parâmetros
        # ==========================================================
        modified_lines = []
        for line in rtl_lines:
            if 'parameter' in line:
                tokens = line.strip().split()
                if len(tokens) >= 4 and tokens[0] == 'parameter':
                    param_name = tokens[1]
                    if param_name == 'N':
                        param_val = val_N
                    elif param_name == 'N_INPUTS':
                        param_val = val_N_INP
                    elif param_name == 'LOG_N_INPUTS':
                        param_val = int(math.log2(val_N_INP))
                    else:
                        modified_lines.append(line)
                        continue

                    new_line = f'parameter {param_name} = {param_val}'
                    if param_name != 'LOG_N_INPUTS':
                        new_line += ','
                    new_line += '\n'
                    modified_lines.append(new_line)
                else:
                    modified_lines.append(line)
            else:
                modified_lines.append(line)

        # Salva o novo RTL
        with open(rtl_out_path, 'w') as rtl_file_out:
            rtl_file_out.writelines(modified_lines)

        # ==========================================================
        # PASSO 1.5 - Atualiza o script de síntese com subpastas
        # ==========================================================
        with open(synth_script_path, "r") as f:
            synth_text = f.read()

        # Monta novo prefixo de diretório
        novo_prefixo = f"reports_ss/N_inputs_{val_N_INP}/N_{val_N}/"
        synth_text_mod = re.sub(r'\breports_ss/', novo_prefixo, synth_text)

        with open(synth_script_path, "w") as f:
            f.write(synth_text_mod)

        print(f"Atualizado synth_script.tcl com paths: {novo_prefixo}")

        # ==========================================================
        # PASSO 2 - Rodar a síntese (exemplo de comando)
        # ==========================================================
        # Aqui você pode chamar o Genus via subprocess, por exemplo:
        os.system(f"genus -batch -files {synth_script_path} > synth_{val_N_INP}_{val_N}.log")

        # ==========================================================
        # PASSO 3 - Coleta resultados
        # ==========================================================
        # (Implementar conforme necessário)

