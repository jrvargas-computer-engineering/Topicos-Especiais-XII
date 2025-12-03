// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_8.h for the primary calling header

#include "verilated.h"

#include "neuron_intra_Nbits_LOBA0s_8__Syms.h"
#include "sub_LOBA0s__K8.h"

void sub_LOBA0s__K8___ctor_var_reset(sub_LOBA0s__K8* vlSelf);

sub_LOBA0s__K8::sub_LOBA0s__K8(neuron_intra_Nbits_LOBA0s_8__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_LOBA0s__K8___ctor_var_reset(this);
}

void sub_LOBA0s__K8::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_LOBA0s__K8::~sub_LOBA0s__K8() {
}
