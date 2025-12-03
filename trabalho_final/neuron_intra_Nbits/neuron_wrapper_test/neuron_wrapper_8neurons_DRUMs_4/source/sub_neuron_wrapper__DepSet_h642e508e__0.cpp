// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_DRUMs_4.h for the primary calling header

#include "verilated.h"

#include "sub_neuron_wrapper.h"

VL_INLINE_OPT void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2(sub_neuron_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2\n"); );
    // Body
    vlSelf->__PVT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->__PVT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp))
               : vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->__PVT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->__PVT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp))
                 : vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->__PVT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->__PVT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp))
                                      : vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->__PVT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp))
                                        : vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp))));
}
