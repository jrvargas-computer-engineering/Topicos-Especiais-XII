from MAxPy import maxpy
from testbench import testbench_run

circuit = maxpy.AxCircuit(top_name="neuron_wrapper_8neurons")
circuit.set_testbench_script(testbench_run)

circuit.set_group("neuron_wrapper_test")
circuit.set_synth_tool(None)
circuit.set_results_filename("output.csv")
circuit.parameters = {
    "[[MULTIPLIER_TYPE]]": ["DRUMs"],
    "[[MULTIPLIER_K]]": ["4","8"],

}
circuit.rtl2py_param_loop(base="rtl_param")
