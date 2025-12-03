// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_8.h for the primary calling header

#include "verilated.h"

#include "neuron_intra_Nbits_LOBA0s_8__Syms.h"
#include "sub_LOBA0s__N10_K8.h"

VL_INLINE_OPT void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(vlSymsp->TOP.W))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(vlSymsp->TOP.W))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(vlSymsp->TOP.W))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(vlSymsp->TOP.X_N))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(vlSymsp->TOP.X_N))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(vlSymsp->TOP.X_N))))));
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
    vlSelf->__PVT__r_temp = ((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                         + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                        - (IData)(0xeU)))
                              ? (((IData)(__PVT__u1__DOT__Ah) 
                                  * (IData)(__PVT__u1__DOT__Bh)) 
                                 << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                      + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                     - (IData)(0xeU)))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.W 
                                                                     >> 8U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.W 
                                                                                >> 8U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.W 
                                                                        >> 8U)))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.X_N 
                                                                     >> 8U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.X_N 
                                                                                >> 8U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.X_N 
                                                                        >> 8U)))))));
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
    vlSelf->__PVT__r_temp = ((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                         + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                        - (IData)(0xeU)))
                              ? (((IData)(__PVT__u1__DOT__Ah) 
                                  * (IData)(__PVT__u1__DOT__Bh)) 
                                 << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                      + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                     - (IData)(0xeU)))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.W 
                                                                     >> 0x10U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.W 
                                                                                >> 0x10U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.W 
                                                                        >> 0x10U)))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.X_N 
                                                                     >> 0x10U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.X_N 
                                                                                >> 0x10U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.X_N 
                                                                        >> 0x10U)))))));
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
    vlSelf->__PVT__r_temp = ((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                         + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                        - (IData)(0xeU)))
                              ? (((IData)(__PVT__u1__DOT__Ah) 
                                  * (IData)(__PVT__u1__DOT__Bh)) 
                                 << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                      + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                     - (IData)(0xeU)))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.W 
                                                                     >> 0x18U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.W 
                                                                                >> 0x18U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.W 
                                                                        >> 0x18U)))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.X_N 
                                                                     >> 0x18U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.X_N 
                                                                                >> 0x18U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.X_N 
                                                                        >> 0x18U)))))));
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
    vlSelf->__PVT__r_temp = ((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                         + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                        - (IData)(0xeU)))
                              ? (((IData)(__PVT__u1__DOT__Ah) 
                                  * (IData)(__PVT__u1__DOT__Bh)) 
                                 << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                      + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                     - (IData)(0xeU)))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.W 
                                                                     >> 0x20U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.W 
                                                                                >> 0x20U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.W 
                                                                        >> 0x20U)))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.X_N 
                                                                     >> 0x20U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.X_N 
                                                                                >> 0x20U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.X_N 
                                                                        >> 0x20U)))))));
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
    vlSelf->__PVT__r_temp = ((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                         + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                        - (IData)(0xeU)))
                              ? (((IData)(__PVT__u1__DOT__Ah) 
                                  * (IData)(__PVT__u1__DOT__Bh)) 
                                 << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                      + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                     - (IData)(0xeU)))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.W 
                                                                     >> 0x28U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.W 
                                                                                >> 0x28U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.W 
                                                                        >> 0x28U)))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.X_N 
                                                                     >> 0x28U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.X_N 
                                                                                >> 0x28U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.X_N 
                                                                        >> 0x28U)))))));
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
    vlSelf->__PVT__r_temp = ((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                         + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                        - (IData)(0xeU)))
                              ? (((IData)(__PVT__u1__DOT__Ah) 
                                  * (IData)(__PVT__u1__DOT__Bh)) 
                                 << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                      + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                     - (IData)(0xeU)))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.W 
                                                                     >> 0x30U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.W 
                                                                                >> 0x30U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.W 
                                                                        >> 0x30U)))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.X_N 
                                                                     >> 0x30U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.X_N 
                                                                                >> 0x30U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.X_N 
                                                                        >> 0x30U)))))));
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
    vlSelf->__PVT__r_temp = ((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                         + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                        - (IData)(0xeU)))
                              ? (((IData)(__PVT__u1__DOT__Ah) 
                                  * (IData)(__PVT__u1__DOT__Bh)) 
                                 << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                      + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                     - (IData)(0xeU)))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__0\n"); );
    // Init
    SData/*15:0*/ __PVT__a_temp;
    SData/*15:0*/ __PVT__b_temp;
    CData/*7:0*/ __PVT__u1__DOT__Ah;
    CData/*7:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.W 
                                                                     >> 0x38U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.W 
                                                                                >> 0x38U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.W 
                                                                        >> 0x38U)))))));
    __PVT__b_temp = (0xffffU & ((0x8000U & VL_EXTENDS_II(16,8, 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.X_N 
                                                                     >> 0x38U)))))
                                 ? ((IData)(1U) + (~ 
                                                   (0xffffU 
                                                    & VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.X_N 
                                                                                >> 0x38U)))))))
                                 : (0xffffU & VL_EXTENDS_II(16,8, 
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSymsp->TOP.X_N 
                                                                        >> 0x38U)))))));
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
    vlSelf->__PVT__r_temp = ((0x1fU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                         + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                        - (IData)(0xeU)))
                              ? (((IData)(__PVT__u1__DOT__Ah) 
                                  * (IData)(__PVT__u1__DOT__Bh)) 
                                 << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                      + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                     - (IData)(0xeU)))
                              : 0U);
}
