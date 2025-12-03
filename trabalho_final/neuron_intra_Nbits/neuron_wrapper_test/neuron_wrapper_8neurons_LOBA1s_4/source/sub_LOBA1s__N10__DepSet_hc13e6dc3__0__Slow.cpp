// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_LOBA1s_4.h for the primary calling header

#include "verilated.h"

#include "sub_LOBA1s__N10.h"

VL_ATTR_COLD void sub_LOBA1s__N10___ctor_var_reset(sub_LOBA1s__N10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            sub_LOBA1s__N10___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(16);
    vlSelf->b = VL_RAND_RESET_I(16);
    vlSelf->r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__r_temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u1__DOT__k1a = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u1__DOT__k1b = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u1__DOT__k2b = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u2__DOT__lower = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
}
