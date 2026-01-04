// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_DRUMs_7.h for the primary calling header

#include "verilated.h"

#include "neuron_wrapper_8neurons_DRUMs_7__Syms.h"
#include "sub_neuron_wrapper.h"

void sub_neuron_wrapper___ctor_var_reset(sub_neuron_wrapper* vlSelf);

sub_neuron_wrapper::sub_neuron_wrapper(neuron_wrapper_8neurons_DRUMs_7__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_neuron_wrapper___ctor_var_reset(this);
}

void sub_neuron_wrapper::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_neuron_wrapper::~sub_neuron_wrapper() {
}
