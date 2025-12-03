// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_8.h for the primary calling header

#include "verilated.h"

#include "neuron_intra_Nbits_LOBA0s_8__Syms.h"
#include "sub___024root.h"

void sub___024root___ctor_var_reset(sub___024root* vlSelf);

sub___024root::sub___024root(neuron_intra_Nbits_LOBA0s_8__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    sub___024root___ctor_var_reset(this);
}

void sub___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

sub___024root::~sub___024root() {
}
