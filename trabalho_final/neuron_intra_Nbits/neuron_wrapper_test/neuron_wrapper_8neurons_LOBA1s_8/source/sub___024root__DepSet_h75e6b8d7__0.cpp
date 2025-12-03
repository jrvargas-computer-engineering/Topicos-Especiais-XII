// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_LOBA1s_8.h for the primary calling header

#include "verilated.h"

#include "neuron_wrapper_8neurons_LOBA1s_8__Syms.h"
#include "sub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval_triggers__act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        sub___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__2(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
               : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                 : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                      : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->neuron_wrapper_8neurons__DOT__neuron7__DOT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                        : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))));
    vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
               : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                 : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                      : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->neuron_wrapper_8neurons__DOT__neuron6__DOT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                        : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))));
    vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
               : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                 : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                      : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->neuron_wrapper_8neurons__DOT__neuron5__DOT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                        : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))));
    vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
               : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                 : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                      : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->neuron_wrapper_8neurons__DOT__neuron4__DOT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                        : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))));
    vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
               : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                 : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                      : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                        : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))));
    vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
               : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                 : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                      : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                        : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))));
    vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
               : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                 : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                      : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->neuron_wrapper_8neurons__DOT__neuron1__DOT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                        : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))));
    vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(16,8, (0xffU 
                                                 & (vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__W_reg 
                                                    >> 0x10U))) 
                            >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                             (0xffU 
                                                              & (vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__X_reg 
                                                                 >> 0x10U))) 
                                               >> 0xfU))))
               ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
               : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
             + ((1U & ((1U & (VL_EXTENDS_II(16,8, (vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__W_reg 
                                                   >> 0x18U)) 
                              >> 0xfU)) ^ (1U & (VL_EXTENDS_II(16,8, 
                                                               (vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__X_reg 
                                                                >> 0x18U)) 
                                                 >> 0xfU))))
                 ? ((IData)(1U) + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                 : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)) 
            << 0x10U) | (0xffffU & (((1U & ((1U & (
                                                   VL_EXTENDS_II(16,8, 
                                                                 (0xffU 
                                                                  & vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__W_reg)) 
                                                   >> 0xfU)) 
                                            ^ (1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__X_reg)) 
                                                >> 0xfU))))
                                      ? ((IData)(1U) 
                                         + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                      : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                    + ((1U & ((1U & 
                                               (VL_EXTENDS_II(16,8, 
                                                              (0xffU 
                                                               & (vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__W_reg 
                                                                  >> 8U))) 
                                                >> 0xfU)) 
                                              ^ (1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->neuron_wrapper_8neurons__DOT__neuron0__DOT__X_reg 
                                                                      >> 8U))) 
                                                    >> 0xfU))))
                                        ? ((IData)(1U) 
                                           + (~ vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                        : vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))));
}

void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf);
void sub___024root___nba_sequent__TOP__1(sub___024root* vlSelf);

void sub___024root___eval_nba(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        sub___024root___nba_sequent__TOP__0(vlSelf);
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i));
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        sub___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        sub___024root___nba_sequent__TOP__2(vlSelf);
    }
}
