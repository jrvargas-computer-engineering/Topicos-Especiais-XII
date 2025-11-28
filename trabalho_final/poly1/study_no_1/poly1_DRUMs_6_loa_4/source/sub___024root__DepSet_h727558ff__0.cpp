// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See poly1_DRUMs_6_loa_4.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

VL_INLINE_OPT void sub___024root___ico_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    poly1_DRUMs_6_loa_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ poly1__DOT____Vcellout__mult1____pinNumber3;
    IData/*31:0*/ poly1__DOT__mult1__DOT__r_temp;
    CData/*3:0*/ poly1__DOT__mult1__DOT__U1__DOT__k1;
    CData/*3:0*/ poly1__DOT__mult1__DOT__U1__DOT__k2;
    CData/*3:0*/ poly1__DOT__mult1__DOT__U1__DOT__m;
    CData/*3:0*/ poly1__DOT__mult1__DOT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h734707d0__0;
    IData/*31:0*/ __VdfgTmp_h61254020__0;
    // Body
    __VdfgTmp_h734707d0__0 = ((0x8000U & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelf->a)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->a))));
    __VdfgTmp_h61254020__0 = ((0x8000U & VL_EXTENDS_II(16,8, (IData)(vlSelf->x)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelf->x)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, (IData)(vlSelf->x))));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x8000U 
                                                      & __VdfgTmp_h734707d0__0));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h734707d0__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                                >> 0xfU) 
                                                               & (__VdfgTmp_h734707d0__0 
                                                                  >> 0xeU))) 
                                                      << 0xeU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x2000U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x1000U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x800U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x400U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x200U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x100U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x80U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x40U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x20U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h734707d0__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (0x10U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h734707d0__0) ? 0U : 
               (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (8U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h734707d0__0) ? 0U : 
               (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h734707d0__0) ? 0U : 
               (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (2U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h734707d0__0) ? 0U : 
              (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1 = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1)) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h734707d0__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x8000U 
                                                      & __VdfgTmp_h61254020__0));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h61254020__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                                >> 0xfU) 
                                                               & (__VdfgTmp_h61254020__0 
                                                                  >> 0xeU))) 
                                                      << 0xeU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x2000U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x1000U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x800U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x400U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x200U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x100U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x80U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x40U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x20U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h61254020__0) ? 0U
                : (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (0x10U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h61254020__0) ? 0U : 
               (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (8U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h61254020__0) ? 0U : 
               (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h61254020__0) ? 0U : 
               (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (2U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h61254020__0) ? 0U : 
              (1U & ((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2 = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2)) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w) 
                                                          >> 1U) 
                                                         & __VdfgTmp_h61254020__0)));
    poly1__DOT__mult1__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l1))) {
        poly1__DOT__mult1__DOT__U1__DOT__k1 = 0U;
    }
    poly1__DOT__mult1__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->poly1__DOT__mult1__DOT__U1__DOT__l2))) {
        poly1__DOT__mult1__DOT__U1__DOT__k2 = 0U;
    }
    poly1__DOT__mult1__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 2U));
    }
    if ((7U == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 3U));
    }
    if ((8U == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 4U));
    }
    if ((9U == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 5U));
    }
    if ((0xaU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 6U));
    }
    if ((0xbU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 7U));
    }
    if ((0xcU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 8U));
    }
    if ((0xdU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 9U));
    }
    if ((0xeU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 0xaU));
    }
    if ((0xfU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))) {
        poly1__DOT__mult1__DOT__U1__DOT__n = (0xfU 
                                              & (__VdfgTmp_h734707d0__0 
                                                 >> 0xbU));
    }
    poly1__DOT__mult1__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 2U));
    }
    if ((7U == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 3U));
    }
    if ((8U == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 4U));
    }
    if ((9U == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 5U));
    }
    if ((0xaU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 6U));
    }
    if ((0xbU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 7U));
    }
    if ((0xcU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 8U));
    }
    if ((0xdU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 9U));
    }
    if ((0xeU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 0xaU));
    }
    if ((0xfU == (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))) {
        poly1__DOT__mult1__DOT__U1__DOT__m = (0xfU 
                                              & (__VdfgTmp_h61254020__0 
                                                 >> 0xbU));
    }
    poly1__DOT__mult1__DOT__r_temp = ((0xfffU & ((0x3fU 
                                                  & ((5U 
                                                      < (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))
                                                      ? 
                                                     (0x21U 
                                                      | ((IData)(poly1__DOT__mult1__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h734707d0__0)) 
                                                 * 
                                                 (0x3fU 
                                                  & ((5U 
                                                      < (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))
                                                      ? 
                                                     (0x21U 
                                                      | ((IData)(poly1__DOT__mult1__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_h61254020__0)))) 
                                      << (0x1fU & (
                                                   ((5U 
                                                     < (IData)(poly1__DOT__mult1__DOT__U1__DOT__k1))
                                                     ? 
                                                    (0xfU 
                                                     & ((IData)(poly1__DOT__mult1__DOT__U1__DOT__k1) 
                                                        - (IData)(5U)))
                                                     : 0U) 
                                                   + 
                                                   ((5U 
                                                     < (IData)(poly1__DOT__mult1__DOT__U1__DOT__k2))
                                                     ? 
                                                    (0xfU 
                                                     & ((IData)(poly1__DOT__mult1__DOT__U1__DOT__k2) 
                                                        - (IData)(5U)))
                                                     : 0U))));
    poly1__DOT____Vcellout__mult1____pinNumber3 = (
                                                   (1U 
                                                    & ((1U 
                                                        & (VL_EXTENDS_II(16,8, (IData)(vlSelf->a)) 
                                                           >> 0xfU)) 
                                                       ^ 
                                                       (1U 
                                                        & (VL_EXTENDS_II(16,8, (IData)(vlSelf->x)) 
                                                           >> 0xfU))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ poly1__DOT__mult1__DOT__r_temp))
                                                    : poly1__DOT__mult1__DOT__r_temp);
    vlSelf->y = ((0xfff0U & (((poly1__DOT____Vcellout__mult1____pinNumber3 
                               >> 4U) + (0xfffU & (
                                                   VL_EXTENDS_II(16,8, (IData)(vlSelf->b)) 
                                                   >> 4U))) 
                             << 4U)) | (0xfU & (poly1__DOT____Vcellout__mult1____pinNumber3 
                                                | (0xffffU 
                                                   & VL_EXTENDS_II(16,8, (IData)(vlSelf->b))))));
}

void sub___024root___eval_ico(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    poly1_DRUMs_6_loa_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        sub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void sub___024root___eval_act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    poly1_DRUMs_6_loa_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_act\n"); );
}

void sub___024root___eval_nba(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    poly1_DRUMs_6_loa_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_nba\n"); );
}

void sub___024root___eval_triggers__ico(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__ico(sub___024root* vlSelf);
#endif  // VL_DEBUG
void sub___024root___eval_triggers__act(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__nba(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    poly1_DRUMs_6_loa_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        sub___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if ((0x64U < vlSelf->__VicoIterCount)) {
#ifdef VL_DEBUG
                sub___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("study_no_1/poly1_DRUMs_6_loa_4/rtl/poly1.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            sub___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            sub___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if ((0x64U < vlSelf->__VactIterCount)) {
#ifdef VL_DEBUG
                    sub___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("study_no_1/poly1_DRUMs_6_loa_4/rtl/poly1.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                sub___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if ((0x64U < __VnbaIterCount)) {
#ifdef VL_DEBUG
                sub___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("study_no_1/poly1_DRUMs_6_loa_4/rtl/poly1.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            sub___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    poly1_DRUMs_6_loa_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
