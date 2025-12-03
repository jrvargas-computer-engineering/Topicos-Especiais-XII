// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_4.h for the primary calling header

#include "verilated.h"

#include "neuron_intra_Nbits_LOBA0s_4__Syms.h"
#include "sub_LOBA0s.h"

void sub_LOBA0s___ctor_var_reset(sub_LOBA0s* vlSelf);

sub_LOBA0s::sub_LOBA0s(neuron_intra_Nbits_LOBA0s_4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub_LOBA0s___ctor_var_reset(this);
}

void sub_LOBA0s::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub_LOBA0s::~sub_LOBA0s() {
}
