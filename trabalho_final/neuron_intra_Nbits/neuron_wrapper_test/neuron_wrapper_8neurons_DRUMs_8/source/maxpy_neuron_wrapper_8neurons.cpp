#include "verilator_pybind_wrapper.h"

Instance* MAxPy_neuron_wrapper_8neurons_DRUMs_8::maxpy_neuron_wrapper_8neurons() {

    Instance *top, *pi;
	Net *pn;

	top = new Instance("neuron_wrapper_8neurons");
	pi = top;

    return(top);
}
