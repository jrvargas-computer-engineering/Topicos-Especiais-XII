// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_LOBA1s_8.h for the primary calling header

#include "verilated.h"

#include "neuron_wrapper_8neurons_LOBA1s_8__Syms.h"
#include "sub_LOBA1s__N10_K8.h"

VL_INLINE_OPT void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    CData/*7:0*/ __PVT__u1__DOT__Bl;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron1__DOT__W_reg 
                                                          >> 0x18U)))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron1__DOT__W_reg 
                                                                     >> 0x18U)))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron1__DOT__W_reg 
                                                             >> 0x18U)))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron1__DOT__X_reg 
                                                          >> 0x18U)))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron1__DOT__X_reg 
                                                                     >> 0x18U)))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron1__DOT__X_reg 
                                                             >> 0x18U)))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & (IData)(__PVT__a_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 8U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = __PVT__b_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff80U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffc0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffe0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (7U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (3U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff8U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (7U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (1U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffcU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (3U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffeU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (1U 
                                                     & (IData)(__PVT__b_temp)));
    }
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 7U;
    }
    __PVT__u1__DOT__Bl = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    vlSelf->__PVT__r_temp = (((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                          + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                         - (IData)(0xeU)))
                               ? (((IData)(__PVT__u1__DOT__Ah) 
                                   * (IData)(__PVT__u1__DOT__Bh)) 
                                  << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                       + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                      - (IData)(0xeU)))
                               : 0U) + ((0x1fU >= (
                                                   ((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                    + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                   - (IData)(0xeU)))
                                         ? (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bl)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                - (IData)(0xeU)))
                                         : 0U));
}

VL_INLINE_OPT void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    CData/*7:0*/ __PVT__u1__DOT__Bl;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg)))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg)))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg)))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg)))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg)))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg)))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & (IData)(__PVT__a_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 8U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = __PVT__b_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff80U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffc0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffe0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (7U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (3U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff8U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (7U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (1U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffcU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (3U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffeU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (1U 
                                                     & (IData)(__PVT__b_temp)));
    }
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 7U;
    }
    __PVT__u1__DOT__Bl = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    vlSelf->__PVT__r_temp = (((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                          + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                         - (IData)(0xeU)))
                               ? (((IData)(__PVT__u1__DOT__Ah) 
                                   * (IData)(__PVT__u1__DOT__Bh)) 
                                  << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                       + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                      - (IData)(0xeU)))
                               : 0U) + ((0x1fU >= (
                                                   ((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                    + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                   - (IData)(0xeU)))
                                         ? (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bl)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                - (IData)(0xeU)))
                                         : 0U));
}

VL_INLINE_OPT void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    CData/*7:0*/ __PVT__u1__DOT__Bl;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                             >> 8U))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                                        >> 8U))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                                >> 8U))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                             >> 8U))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                                        >> 8U))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                                >> 8U))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & (IData)(__PVT__a_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 8U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = __PVT__b_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff80U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffc0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffe0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (7U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (3U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff8U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (7U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (1U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffcU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (3U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffeU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (1U 
                                                     & (IData)(__PVT__b_temp)));
    }
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 7U;
    }
    __PVT__u1__DOT__Bl = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    vlSelf->__PVT__r_temp = (((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                          + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                         - (IData)(0xeU)))
                               ? (((IData)(__PVT__u1__DOT__Ah) 
                                   * (IData)(__PVT__u1__DOT__Bh)) 
                                  << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                       + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                      - (IData)(0xeU)))
                               : 0U) + ((0x1fU >= (
                                                   ((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                    + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                   - (IData)(0xeU)))
                                         ? (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bl)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                - (IData)(0xeU)))
                                         : 0U));
}

VL_INLINE_OPT void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    CData/*7:0*/ __PVT__u1__DOT__Bl;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                             >> 0x10U))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                                        >> 0x10U))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                                >> 0x10U))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                             >> 0x10U))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                                        >> 0x10U))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                                >> 0x10U))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & (IData)(__PVT__a_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 8U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = __PVT__b_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff80U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffc0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffe0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (7U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (3U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff8U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (7U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (1U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffcU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (3U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffeU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (1U 
                                                     & (IData)(__PVT__b_temp)));
    }
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 7U;
    }
    __PVT__u1__DOT__Bl = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    vlSelf->__PVT__r_temp = (((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                          + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                         - (IData)(0xeU)))
                               ? (((IData)(__PVT__u1__DOT__Ah) 
                                   * (IData)(__PVT__u1__DOT__Bh)) 
                                  << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                       + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                      - (IData)(0xeU)))
                               : 0U) + ((0x1fU >= (
                                                   ((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                    + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                   - (IData)(0xeU)))
                                         ? (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bl)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                - (IData)(0xeU)))
                                         : 0U));
}

VL_INLINE_OPT void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    CData/*7:0*/ __PVT__u1__DOT__Bl;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                          >> 0x18U)))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                                     >> 0x18U)))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__W_reg 
                                                             >> 0x18U)))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                          >> 0x18U)))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                                     >> 0x18U)))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron2__DOT__X_reg 
                                                             >> 0x18U)))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & (IData)(__PVT__a_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 8U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = __PVT__b_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff80U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffc0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffe0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (7U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (3U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff8U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (7U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (1U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffcU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (3U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffeU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (1U 
                                                     & (IData)(__PVT__b_temp)));
    }
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 7U;
    }
    __PVT__u1__DOT__Bl = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    vlSelf->__PVT__r_temp = (((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                          + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                         - (IData)(0xeU)))
                               ? (((IData)(__PVT__u1__DOT__Ah) 
                                   * (IData)(__PVT__u1__DOT__Bh)) 
                                  << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                       + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                      - (IData)(0xeU)))
                               : 0U) + ((0x1fU >= (
                                                   ((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                    + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                   - (IData)(0xeU)))
                                         ? (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bl)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                - (IData)(0xeU)))
                                         : 0U));
}

VL_INLINE_OPT void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    CData/*7:0*/ __PVT__u1__DOT__Bl;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg)))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg)))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg)))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg)))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg)))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg)))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & (IData)(__PVT__a_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 8U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = __PVT__b_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff80U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffc0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffe0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (7U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (3U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff8U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (7U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (1U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffcU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (3U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffeU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (1U 
                                                     & (IData)(__PVT__b_temp)));
    }
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 7U;
    }
    __PVT__u1__DOT__Bl = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    vlSelf->__PVT__r_temp = (((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                          + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                         - (IData)(0xeU)))
                               ? (((IData)(__PVT__u1__DOT__Ah) 
                                   * (IData)(__PVT__u1__DOT__Bh)) 
                                  << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                       + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                      - (IData)(0xeU)))
                               : 0U) + ((0x1fU >= (
                                                   ((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                    + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                   - (IData)(0xeU)))
                                         ? (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bl)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                - (IData)(0xeU)))
                                         : 0U));
}

VL_INLINE_OPT void sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA1s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            sub_LOBA1s__N10_K8___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    CData/*7:0*/ __PVT__u1__DOT__Bl;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg 
                                                             >> 8U))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg 
                                                                        >> 8U))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__W_reg 
                                                                >> 8U))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg 
                                                             >> 8U))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg 
                                                                        >> 8U))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.neuron_wrapper_8neurons__DOT__neuron3__DOT__X_reg 
                                                                >> 8U))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x8000U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & (IData)(__PVT__a_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xffU & ((IData)(__PVT__a_temp) 
                                       >> 8U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    if ((0xfU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = __PVT__b_temp;
    }
    if ((0xeU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0x8000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xdU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xc000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xcU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xe000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xbU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf000U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0xaU == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                          - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xf800U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((9U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfc00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((8U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xffU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfe00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1ffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((7U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x7fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff00U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xffU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((6U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x3fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xff80U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x7fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((5U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0x1fU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffc0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x3fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((4U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (0xfU 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xffe0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0x1fU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((3U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (7U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff0U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (0xfU 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((2U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (3U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfff8U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (7U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((1U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = (1U 
                                                  & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower));
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffcU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (3U 
                                                     & (IData)(__PVT__b_temp)));
    }
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__u1__DOT__k1b) 
                        - (IData)(8U))))) {
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = 0U;
        vlSelf->__PVT__u1__DOT__u2__DOT__lower = ((0xfffeU 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)) 
                                                  | (1U 
                                                     & (IData)(__PVT__b_temp)));
    }
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0x7fffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x8000U 
                                                & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x8000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 1U) 
                                                      << 0xfU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x4000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xfU))) 
                                                      << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xbfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 0xfU) 
                                                         & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower) 
                                                            >> 0xeU))) 
                                                << 0xeU));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x2000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xeU))) 
                                                      << 0xdU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xdfffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x2000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x1000U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xdU))) 
                                                      << 0xcU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xefffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x1000U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x800U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xcU))) 
                                                      << 0xbU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xf7ffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x800U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x400U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xbU))) 
                                                      << 0xaU));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfbffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x400U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x200U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 0xaU))) 
                                                      << 9U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfdffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x200U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x100U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 9U))) 
                                                      << 8U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfeffU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x100U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 8U))) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xff7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x80U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x40U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xffefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfff7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobl = ((0xfffeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u2__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lower))));
    if ((0x8000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobl))) {
        vlSelf->__PVT__u1__DOT__k2b = 7U;
    }
    __PVT__u1__DOT__Bl = 0U;
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & (IData)(__PVT__b_temp));
    }
    if ((8U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 3U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 4U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 5U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 6U));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 7U));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__u1__DOT__k2b))) {
        __PVT__u1__DOT__Bl = (0xffU & ((IData)(__PVT__b_temp) 
                                       >> 8U));
    }
    vlSelf->__PVT__r_temp = (((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                          + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                         - (IData)(0xeU)))
                               ? (((IData)(__PVT__u1__DOT__Ah) 
                                   * (IData)(__PVT__u1__DOT__Bh)) 
                                  << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                       + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                      - (IData)(0xeU)))
                               : 0U) + ((0x1fU >= (
                                                   ((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                    + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                   - (IData)(0xeU)))
                                         ? (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bl)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k2b)) 
                                                - (IData)(0xeU)))
                                         : 0U));
}
