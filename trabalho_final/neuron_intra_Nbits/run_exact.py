from MAxPy import maxpy
circuit = maxpy.AxCircuit(top_name="neuron_wrapper")
circuit.rtl2py(target="exact")
