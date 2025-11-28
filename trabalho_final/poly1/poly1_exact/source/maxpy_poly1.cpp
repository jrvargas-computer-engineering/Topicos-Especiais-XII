#include "verilator_pybind_wrapper.h"

Instance* MAxPy_poly1_exact::maxpy_poly1() {

    Instance *top, *pi;
	Net *pn;

	top = new Instance("poly1");
	pi = top;

    return(top);
}
