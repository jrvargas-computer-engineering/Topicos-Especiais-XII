from codecarbon import EmissionsTracker
from sys import argv

import random


project_name = "aula17"
task_name = "mac_enegy"
num_reps = int(argv[1])




lista_x = [random.uniform(0, num_reps) for _ in range(num_reps)]
lista_y = [random.uniform(0, num_reps) for _ in range(num_reps)]



try:
    tracker = EmissionsTracker(project_name=project_name, measure_power_secs=1)
    tracker.start_task(task_name)


    for i in range(num_reps):

        mac = mac + lista_x[i]*lista_w[i]  

    task_teste_emissions = tracker.stop_task()

except Exception as e:
    print("Exception!", e)

finally:
    tracker.stop()