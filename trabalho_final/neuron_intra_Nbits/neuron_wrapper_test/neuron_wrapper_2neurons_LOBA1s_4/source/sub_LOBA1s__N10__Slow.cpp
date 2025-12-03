// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_2neurons_LOBA1s_4.h for the primary calling header

#include "verilated.h"

#include "neuron_wrapper_2neurons_LOBA1s_4__Syms.h"
#include "sub_LOBA1s__N10.h"

void sub_LOBA1s__N10___ctor_var_reset(sub_LOBA1s__N10* vlSelf);

sub_LOBA1s__N10::sub_LOBA1s__N10(neuron_wrapper_2neurons_LOBA1s_4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_LOBA1s__N10___ctor_var_reset(this);
}

void sub_LOBA1s__N10::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_LOBA1s__N10::~sub_LOBA1s__N10() {
}
