import pytimeloop.timeloopfe.v4 as tl
import os
import csv
import shutil 
import traceback

# =========================
# versao DSE
# =========================
version="dse_pe_mac_width"
os.makedirs(version, exist_ok=True)

# =========================
# parametros
# =========================
PE_LIST = [1,2,4,8,16]    #numero de neuronios
MAC_LIST = [2,4,8]   #numero de MACs 
WIDTH_LIST = [4,8,16]

# =========================
# pasta de outputs
# =========================
MAIN_OUTPUT = f"{os.curdir}/{version}/outputs"
def clean_path(dir):
#output_dir = f"{os.curdir}/outputs"
    if os.path.exists(dir):
        print(f"Limpando pasta de saída antiga: {dir}")
        shutil.rmtree(dir)

# =========================
# CSV
# =========================
csv_file = os.path.join(version, "dse_results.csv")
header = [
    "arquitecture",
    "percent_utilization",
    "computes",
    "cycles",
    "cycle_seconds",
    "latency",
    "area",
    "energy",
    "computes_per_second",
    "computes_per_second_per_square_meter",
    "computes_per_joule",
    "acesses",
    "per_component_energy",
    "per_component_area",
    "variables",
]
with open(csv_file, "w", newline="") as f:
    writer = csv.writer(f, delimiter=';')
    writer.writerow(header)

def extract_result(result,version):
    # Cria uma linha no mesmo formato do header
    row = [
        version, 
        getattr(result, "percent_utilization", ""),
        getattr(result, "computes", ""),
        getattr(result, "cycles", ""),
        getattr(result, "cycle_seconds", ""),
        getattr(result, "latency", ""),
        getattr(result, "area", ""),
        getattr(result, "energy", ""),
        getattr(result, "computes_per_second", ""),
        getattr(result, "computes_per_second_per_square_meter", ""),
        getattr(result, "computes_per_joule", ""),
        getattr(result, "acesses", ""),
        getattr(result, "per_component_energy", ""),
        getattr(result, "per_component_area", ""),
        getattr(result, "variables", ""),
    ]
    return row



# =========================
# DSE
# =========================
# Carregar a especificacao
TOP_PATH = f"{os.curdir}/top.yaml.jinja"

# Modificacao DSE aqui
for pe in PE_LIST:
    for mac in MAC_LIST: 
        for wid in WIDTH_LIST:

            output_dir = f"{MAIN_OUTPUT}/{pe}_neurons_{mac}_macs_{wid}_width"
            clean_path(output_dir)
            os.makedirs(output_dir, exist_ok=True)

            spec = tl.Specification.from_yaml_files(TOP_PATH)

            spec.architecture.find("GlobalBuffer").attributes.width = pe*mac*2*wid  
            spec.architecture.find("GlobalBuffer").attributes.datawidth = wid  
            spec.architecture.find("PE_Array").spatial.meshX = pe   
            spec.architecture.find("Input_Port").attributes.width = mac*wid
            spec.architecture.find("Input_Port").attributes.datawidth = wid
            spec.architecture.find("MACC").spatial.meshX = mac   
            spec.architecture.find("MACC").spatial.meshX = mac   
            spec.architecture.find("MACC").attributes.width = wid   
            spec.architecture.find("MACC").attributes.datawidth = wid   

            try:
                result = tl.call_mapper(spec, output_dir=output_dir)
                row = extract_result(result, f"{pe}_neurons_{mac}_macs_{wid}_width")

                # Append ao CSV
                with open(csv_file, "a", newline="") as f:
                    writer = csv.writer(f, delimiter=';')
                    writer.writerow(row)
                print(f"Resultados salvos em {csv_file}")

            except: 
                print("Excecao..")
                traceback.print_exc()
    
   