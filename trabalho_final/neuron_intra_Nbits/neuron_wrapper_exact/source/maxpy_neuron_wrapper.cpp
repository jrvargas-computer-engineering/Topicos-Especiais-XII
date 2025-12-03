#include "verilator_pybind_wrapper.h"

Instance* MAxPy_neuron_wrapper_exact::maxpy_neuron_wrapper() {

    Instance *top, *pi;
	Net *pn;

	top = new Instance("neuron_wrapper");
	pi = top;

    return(top);
}
