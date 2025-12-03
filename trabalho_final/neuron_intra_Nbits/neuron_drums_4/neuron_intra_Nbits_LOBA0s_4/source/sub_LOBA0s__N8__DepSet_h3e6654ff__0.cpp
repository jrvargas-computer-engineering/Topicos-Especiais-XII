// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_4.h for the primary calling header

#include "verilated.h"

#include "neuron_intra_Nbits_LOBA0s_4__Syms.h"
#include "sub_LOBA0s__N8.h"

VL_INLINE_OPT void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__0\n"); );
    // Init
    CData/*7:0*/ __PVT__a_temp;
    CData/*7:0*/ __PVT__b_temp;
    CData/*3:0*/ __PVT__u1__DOT__Ah;
    CData/*3:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & vlSymsp->TOP.W)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & vlSymsp->TOP.W)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & vlSymsp->TOP.W)))));
    __PVT__b_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & vlSymsp->TOP.X_N)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & vlSymsp->TOP.X_N)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & vlSymsp->TOP.X_N)))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 3U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 3U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & (IData)(__PVT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 4U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & (IData)(__PVT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 4U));
    }
    vlSelf->__PVT__r_temp = ((0xfU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                       - (IData)(6U)))
                              ? (0xffffU & (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bh)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                                - (IData)(6U))))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__0\n"); );
    // Init
    CData/*7:0*/ __PVT__a_temp;
    CData/*7:0*/ __PVT__b_temp;
    CData/*3:0*/ __PVT__u1__DOT__Ah;
    CData/*3:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.W 
                                                         >> 4U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.W 
                                                                      >> 4U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.W 
                                                            >> 4U))))));
    __PVT__b_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.X_N 
                                                         >> 4U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.X_N 
                                                                      >> 4U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.X_N 
                                                            >> 4U))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 3U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 3U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & (IData)(__PVT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 4U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & (IData)(__PVT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 4U));
    }
    vlSelf->__PVT__r_temp = ((0xfU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                       - (IData)(6U)))
                              ? (0xffffU & (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bh)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                                - (IData)(6U))))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__0\n"); );
    // Init
    CData/*7:0*/ __PVT__a_temp;
    CData/*7:0*/ __PVT__b_temp;
    CData/*3:0*/ __PVT__u1__DOT__Ah;
    CData/*3:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.W 
                                                         >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.W 
                                                                      >> 8U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.W 
                                                            >> 8U))))));
    __PVT__b_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.X_N 
                                                         >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.X_N 
                                                                      >> 8U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.X_N 
                                                            >> 8U))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 3U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 3U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & (IData)(__PVT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 4U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & (IData)(__PVT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 4U));
    }
    vlSelf->__PVT__r_temp = ((0xfU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                       - (IData)(6U)))
                              ? (0xffffU & (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bh)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                                - (IData)(6U))))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__0\n"); );
    // Init
    CData/*7:0*/ __PVT__a_temp;
    CData/*7:0*/ __PVT__b_temp;
    CData/*3:0*/ __PVT__u1__DOT__Ah;
    CData/*3:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.W 
                                                         >> 0xcU))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.W 
                                                                      >> 0xcU))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.W 
                                                            >> 0xcU))))));
    __PVT__b_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.X_N 
                                                         >> 0xcU))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.X_N 
                                                                      >> 0xcU))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.X_N 
                                                            >> 0xcU))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 3U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 3U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & (IData)(__PVT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 4U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & (IData)(__PVT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 4U));
    }
    vlSelf->__PVT__r_temp = ((0xfU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                       - (IData)(6U)))
                              ? (0xffffU & (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bh)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                                - (IData)(6U))))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__0\n"); );
    // Init
    CData/*7:0*/ __PVT__a_temp;
    CData/*7:0*/ __PVT__b_temp;
    CData/*3:0*/ __PVT__u1__DOT__Ah;
    CData/*3:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.W 
                                                         >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.W 
                                                                      >> 0x10U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.W 
                                                            >> 0x10U))))));
    __PVT__b_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.X_N 
                                                         >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.X_N 
                                                                      >> 0x10U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.X_N 
                                                            >> 0x10U))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 3U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 3U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & (IData)(__PVT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 4U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & (IData)(__PVT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 4U));
    }
    vlSelf->__PVT__r_temp = ((0xfU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                       - (IData)(6U)))
                              ? (0xffffU & (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bh)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                                - (IData)(6U))))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__0\n"); );
    // Init
    CData/*7:0*/ __PVT__a_temp;
    CData/*7:0*/ __PVT__b_temp;
    CData/*3:0*/ __PVT__u1__DOT__Ah;
    CData/*3:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.W 
                                                         >> 0x14U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.W 
                                                                      >> 0x14U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.W 
                                                            >> 0x14U))))));
    __PVT__b_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.X_N 
                                                         >> 0x14U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.X_N 
                                                                      >> 0x14U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.X_N 
                                                            >> 0x14U))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 3U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 3U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & (IData)(__PVT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 4U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & (IData)(__PVT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 4U));
    }
    vlSelf->__PVT__r_temp = ((0xfU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                       - (IData)(6U)))
                              ? (0xffffU & (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bh)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                                - (IData)(6U))))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__0\n"); );
    // Init
    CData/*7:0*/ __PVT__a_temp;
    CData/*7:0*/ __PVT__b_temp;
    CData/*3:0*/ __PVT__u1__DOT__Ah;
    CData/*3:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.W 
                                                         >> 0x18U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.W 
                                                                      >> 0x18U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.W 
                                                            >> 0x18U))))));
    __PVT__b_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.X_N 
                                                         >> 0x18U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP.X_N 
                                                                      >> 0x18U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSymsp->TOP.X_N 
                                                            >> 0x18U))))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 3U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 3U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & (IData)(__PVT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 4U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & (IData)(__PVT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 4U));
    }
    vlSelf->__PVT__r_temp = ((0xfU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                       - (IData)(6U)))
                              ? (0xffffU & (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bh)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                                - (IData)(6U))))
                              : 0U);
}

VL_INLINE_OPT void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__0\n"); );
    // Init
    CData/*7:0*/ __PVT__a_temp;
    CData/*7:0*/ __PVT__b_temp;
    CData/*3:0*/ __PVT__u1__DOT__Ah;
    CData/*3:0*/ __PVT__u1__DOT__Bh;
    // Body
    __PVT__a_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (vlSymsp->TOP.W 
                                                      >> 0x1cU)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (vlSymsp->TOP.W 
                                                                   >> 0x1cU)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (vlSymsp->TOP.W 
                                                         >> 0x1cU)))));
    __PVT__b_temp = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (vlSymsp->TOP.X_N 
                                                      >> 0x1cU)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (vlSymsp->TOP.X_N 
                                                                   >> 0x1cU)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (vlSymsp->TOP.X_N 
                                                         >> 0x1cU)))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__a_temp)));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__a_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__a_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__a_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u1__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u1__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__a_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0x7fU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x80U 
                                                & (IData)(__PVT__b_temp)));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x80U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 1U) 
                                                      << 7U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x40U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 7U))) 
                                                      << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xbfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | ((IData)(
                                                        (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 7U) 
                                                         & ((IData)(__PVT__b_temp) 
                                                            >> 6U))) 
                                                << 6U));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x20U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 6U))) 
                                                      << 5U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xdfU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x20U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((0x10U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 5U))) 
                                                      << 4U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xefU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (0x10U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((8U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 4U))) 
                                                      << 3U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xf7U 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (8U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((4U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 3U))) 
                                                      << 2U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfbU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (4U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | (((2U 
                                                        & (IData)(__PVT__b_temp))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                           >> 2U))) 
                                                      << 1U));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfdU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (2U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w)) 
                                                   | ((1U 
                                                       & (IData)(__PVT__b_temp))
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                          >> 1U))));
    vlSelf->__PVT__u1__DOT__u2__DOT__lobh = ((0xfeU 
                                              & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh)) 
                                             | (1U 
                                                & (((IData)(vlSelf->__PVT__u1__DOT__u2__DOT__u1__DOT__w) 
                                                    >> 1U) 
                                                   & (IData)(__PVT__b_temp))));
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u1__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1a = 3U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u1__DOT__u2__DOT__lobh))) {
        vlSelf->__PVT__u1__DOT__k1b = 3U;
    }
    __PVT__u1__DOT__Ah = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & (IData)(__PVT__a_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1a))) {
        __PVT__u1__DOT__Ah = (0xfU & ((IData)(__PVT__a_temp) 
                                      >> 4U));
    }
    __PVT__u1__DOT__Bh = 0U;
    if ((3U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & (IData)(__PVT__b_temp));
    }
    if ((4U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 2U));
    }
    if ((6U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 3U));
    }
    if ((7U == (IData)(vlSelf->__PVT__u1__DOT__k1b))) {
        __PVT__u1__DOT__Bh = (0xfU & ((IData)(__PVT__b_temp) 
                                      >> 4U));
    }
    vlSelf->__PVT__r_temp = ((0xfU >= (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                        + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                       - (IData)(6U)))
                              ? (0xffffU & (((IData)(__PVT__u1__DOT__Ah) 
                                             * (IData)(__PVT__u1__DOT__Bh)) 
                                            << (((IData)(vlSelf->__PVT__u1__DOT__k1a) 
                                                 + (IData)(vlSelf->__PVT__u1__DOT__k1b)) 
                                                - (IData)(6U))))
                              : 0U);
}
