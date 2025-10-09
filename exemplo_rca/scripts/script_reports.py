import os
import re

# Pasta base
base_dir = "reports_ss"
output_file = "summary.csv"

def parse_area(file_path):
    with open(file_path) as f:
        for line in f:
            if line.startswith("neuron_intra_Nbits NA"):
                parts = line.split()
                # partes [2,3,4,5] são os valores
                return f"Cell-Count: {parts[2]} | Cell-Area: {parts[3]} | Net-Area: {parts[4]} | Total-Area: {parts[5]}"
    return "NA"

def parse_power(file_path):
    with open(file_path) as f:
        for line in f:
            if line.strip().startswith("Subtotal"):
                parts = line.split()
                # partes [1,2,3,4] são os valores
                return f"Leakage: {parts[1]} | Internal: {parts[2]} | Switching: {parts[3]} | Total: {parts[4]}"
    return "NA"

def parse_timing(file_path):
    timing_keys = ["Setup", "Required Time", "Launch Clock", "Data Path", "Slack"]
    timing_values = {}
    with open(file_path) as f:
        for line in f:
            for key in timing_keys:
                if key in line:
                    # captura o número após ':' ou ':-' ou ':='
                    m = re.search(r"[-:=]+\s*([-\d.eE]+)", line)
                    if m:
                        timing_values[key] = m.group(1)
    if len(timing_values) == 5:
        return " | ".join([f"{k}: {timing_values[k]}" for k in timing_keys])
    else:
        return "NA"

with open(output_file, "w") as out_f:
    for folder in sorted(os.listdir(base_dir)):
        folder_path = os.path.join(base_dir, folder)
        if os.path.isdir(folder_path):
            out_f.write(f"{folder}:\n")
            out_f.write("arquivo;area;power;timing\n")
            for subfolder in sorted(os.listdir(folder_path)):
                subfolder_path = os.path.join(folder_path, subfolder)
                if os.path.isdir(subfolder_path):
                    area = parse_area(os.path.join(subfolder_path, "report_area_opt.rpt"))
                    power = parse_power(os.path.join(subfolder_path, "report_power_opt.rpt"))
                    timing = parse_timing(os.path.join(subfolder_path, "report_timing_opt.rpt"))
                    out_f.write(f"{subfolder};{area};{power};{timing}\n")

print(f"Resumo gerado em '{output_file}'")
