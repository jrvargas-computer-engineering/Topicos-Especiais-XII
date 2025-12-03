// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "neuron_intra_Nbits_exact__Syms.h"
#include "neuron_intra_Nbits_exact.h"
#include "sub___024root.h"

// FUNCTIONS
neuron_intra_Nbits_exact__Syms::~neuron_intra_Nbits_exact__Syms()
{
}

neuron_intra_Nbits_exact__Syms::neuron_intra_Nbits_exact__Syms(VerilatedContext* contextp, const char* namep, neuron_intra_Nbits_exact* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
