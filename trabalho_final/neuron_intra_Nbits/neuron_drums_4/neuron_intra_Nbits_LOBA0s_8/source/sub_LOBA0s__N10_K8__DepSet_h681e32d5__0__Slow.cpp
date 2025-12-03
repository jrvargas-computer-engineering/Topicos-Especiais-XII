// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_8.h for the primary calling header

#include "verilated.h"

#include "sub_LOBA0s__N10_K8.h"

VL_ATTR_COLD void sub_LOBA0s__N10_K8___ctor_var_reset(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(16);
    vlSelf->b = VL_RAND_RESET_I(16);
    vlSelf->r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__r_temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u1__DOT__k1a = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u1__DOT__k1b = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
}
