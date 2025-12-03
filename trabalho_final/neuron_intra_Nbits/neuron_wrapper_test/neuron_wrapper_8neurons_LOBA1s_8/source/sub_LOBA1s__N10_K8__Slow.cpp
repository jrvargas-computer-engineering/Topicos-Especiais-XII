// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_LOBA1s_8.h for the primary calling header

#include "verilated.h"

#include "neuron_wrapper_8neurons_LOBA1s_8__Syms.h"
#include "sub_LOBA1s__N10_K8.h"

void sub_LOBA1s__N10_K8___ctor_var_reset(sub_LOBA1s__N10_K8* vlSelf);

sub_LOBA1s__N10_K8::sub_LOBA1s__N10_K8(neuron_wrapper_8neurons_LOBA1s_8__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_LOBA1s__N10_K8___ctor_var_reset(this);
}

void sub_LOBA1s__N10_K8::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_LOBA1s__N10_K8::~sub_LOBA1s__N10_K8() {
}
