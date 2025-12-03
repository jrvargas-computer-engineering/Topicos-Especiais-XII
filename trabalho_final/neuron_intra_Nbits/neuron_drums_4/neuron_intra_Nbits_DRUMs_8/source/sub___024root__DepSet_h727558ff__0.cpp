// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_DRUMs_8.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

VL_INLINE_OPT void sub___024root___ico_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___ico_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage;
    IData/*31:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h2856c4e1__0;
    IData/*31:0*/ __VdfgTmp_hc6134639__0;
    IData/*31:0*/ __VdfgTmp_h1ce7f694__0;
    IData/*31:0*/ __VdfgTmp_heabe8fd2__0;
    IData/*31:0*/ __VdfgTmp_h1a43182c__0;
    IData/*31:0*/ __VdfgTmp_he4d1044c__0;
    IData/*31:0*/ __VdfgTmp_h834cb655__0;
    IData/*31:0*/ __VdfgTmp_h0e03bab1__0;
    IData/*31:0*/ __VdfgTmp_h5e1acc72__0;
    IData/*31:0*/ __VdfgTmp_h28f07b73__0;
    IData/*31:0*/ __VdfgTmp_h93c29fd6__0;
    IData/*31:0*/ __VdfgTmp_h53b676a3__0;
    IData/*31:0*/ __VdfgTmp_h84a3ccff__0;
    IData/*31:0*/ __VdfgTmp_h0f9c52fb__0;
    IData/*31:0*/ __VdfgTmp_h55dd9520__0;
    IData/*31:0*/ __VdfgTmp_hb57502ff__0;
    // Body
    __VdfgTmp_h2856c4e1__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(vlSelf->W))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->W))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(vlSelf->W)))));
    __VdfgTmp_hc6134639__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(vlSelf->X_N))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->X_N))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(vlSelf->X_N)))));
    __VdfgTmp_h1ce7f694__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->W 
                                                                   >> 8U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 8U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->W 
                                                                      >> 8U))))));
    __VdfgTmp_heabe8fd2__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->X_N 
                                                                   >> 8U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->X_N 
                                                                              >> 8U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->X_N 
                                                                      >> 8U))))));
    __VdfgTmp_h1a43182c__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->W 
                                                                   >> 0x10U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x10U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->W 
                                                                      >> 0x10U))))));
    __VdfgTmp_he4d1044c__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->X_N 
                                                                   >> 0x10U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->X_N 
                                                                              >> 0x10U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->X_N 
                                                                      >> 0x10U))))));
    __VdfgTmp_h834cb655__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->W 
                                                                   >> 0x18U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x18U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->W 
                                                                      >> 0x18U))))));
    __VdfgTmp_h0e03bab1__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->X_N 
                                                                   >> 0x18U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->X_N 
                                                                              >> 0x18U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->X_N 
                                                                      >> 0x18U))))));
    __VdfgTmp_h5e1acc72__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->W 
                                                                   >> 0x20U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x20U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->W 
                                                                      >> 0x20U))))));
    __VdfgTmp_h28f07b73__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->X_N 
                                                                   >> 0x20U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->X_N 
                                                                              >> 0x20U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->X_N 
                                                                      >> 0x20U))))));
    __VdfgTmp_h93c29fd6__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->W 
                                                                   >> 0x28U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x28U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->W 
                                                                      >> 0x28U))))));
    __VdfgTmp_h53b676a3__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->X_N 
                                                                   >> 0x28U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->X_N 
                                                                              >> 0x28U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->X_N 
                                                                      >> 0x28U))))));
    __VdfgTmp_h84a3ccff__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->W 
                                                                   >> 0x30U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x30U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->W 
                                                                      >> 0x30U))))));
    __VdfgTmp_h0f9c52fb__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->X_N 
                                                                   >> 0x30U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->X_N 
                                                                              >> 0x30U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->X_N 
                                                                      >> 0x30U))))));
    __VdfgTmp_h55dd9520__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->W 
                                                                   >> 0x38U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x38U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->W 
                                                                      >> 0x38U))))));
    __VdfgTmp_hb57502ff__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->X_N 
                                                                   >> 0x38U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->X_N 
                                                                              >> 0x38U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->X_N 
                                                                      >> 0x38U))))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h2856c4e1__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h2856c4e1__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h2856c4e1__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h2856c4e1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h2856c4e1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h2856c4e1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h2856c4e1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h2856c4e1__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h2856c4e1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_hc6134639__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hc6134639__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hc6134639__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hc6134639__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hc6134639__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hc6134639__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hc6134639__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hc6134639__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc6134639__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h1ce7f694__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h1ce7f694__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h1ce7f694__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h1ce7f694__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h1ce7f694__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h1ce7f694__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h1ce7f694__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h1ce7f694__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1ce7f694__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_heabe8fd2__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_heabe8fd2__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_heabe8fd2__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_heabe8fd2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_heabe8fd2__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_heabe8fd2__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_heabe8fd2__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_heabe8fd2__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_heabe8fd2__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h1a43182c__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h1a43182c__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h1a43182c__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h1a43182c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h1a43182c__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h1a43182c__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h1a43182c__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h1a43182c__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1a43182c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_he4d1044c__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_he4d1044c__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_he4d1044c__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_he4d1044c__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_he4d1044c__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_he4d1044c__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_he4d1044c__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_he4d1044c__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he4d1044c__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h834cb655__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h834cb655__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h834cb655__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h834cb655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h834cb655__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h834cb655__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h834cb655__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h834cb655__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h834cb655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h0e03bab1__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h0e03bab1__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h0e03bab1__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h0e03bab1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h0e03bab1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h0e03bab1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h0e03bab1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h0e03bab1__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0e03bab1__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h5e1acc72__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h5e1acc72__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h5e1acc72__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h5e1acc72__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h5e1acc72__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h5e1acc72__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h5e1acc72__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h5e1acc72__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h5e1acc72__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h28f07b73__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h28f07b73__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h28f07b73__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h28f07b73__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h28f07b73__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h28f07b73__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h28f07b73__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h28f07b73__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h28f07b73__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h93c29fd6__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h93c29fd6__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h93c29fd6__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h93c29fd6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h93c29fd6__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h93c29fd6__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h93c29fd6__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h93c29fd6__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h93c29fd6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h53b676a3__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h53b676a3__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h53b676a3__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h53b676a3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h53b676a3__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h53b676a3__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h53b676a3__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h53b676a3__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h53b676a3__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h84a3ccff__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h84a3ccff__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h84a3ccff__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h84a3ccff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h84a3ccff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h84a3ccff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h84a3ccff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h84a3ccff__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h84a3ccff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h0f9c52fb__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h0f9c52fb__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h0f9c52fb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h0f9c52fb__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h0f9c52fb__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h0f9c52fb__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h0f9c52fb__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0f9c52fb__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h55dd9520__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h55dd9520__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h55dd9520__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h55dd9520__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h55dd9520__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h55dd9520__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h55dd9520__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h55dd9520__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h55dd9520__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_hb57502ff__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hb57502ff__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hb57502ff__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hb57502ff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hb57502ff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hb57502ff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hb57502ff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hb57502ff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hb57502ff__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hb57502ff__0)));
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h2856c4e1__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h2856c4e1__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h2856c4e1__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h2856c4e1__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h2856c4e1__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h2856c4e1__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h2856c4e1__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h2856c4e1__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hc6134639__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hc6134639__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hc6134639__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hc6134639__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hc6134639__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hc6134639__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hc6134639__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hc6134639__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1ce7f694__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1ce7f694__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1ce7f694__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1ce7f694__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1ce7f694__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1ce7f694__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1ce7f694__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1ce7f694__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_heabe8fd2__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_heabe8fd2__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_heabe8fd2__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_heabe8fd2__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_heabe8fd2__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_heabe8fd2__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_heabe8fd2__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_heabe8fd2__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1a43182c__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1a43182c__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1a43182c__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1a43182c__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1a43182c__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1a43182c__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1a43182c__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h1a43182c__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he4d1044c__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he4d1044c__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he4d1044c__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he4d1044c__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he4d1044c__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he4d1044c__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he4d1044c__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he4d1044c__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h834cb655__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h834cb655__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h834cb655__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h834cb655__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h834cb655__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h834cb655__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h834cb655__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h834cb655__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0e03bab1__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0e03bab1__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0e03bab1__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0e03bab1__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0e03bab1__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0e03bab1__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0e03bab1__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0e03bab1__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h5e1acc72__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h5e1acc72__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h5e1acc72__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h5e1acc72__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h5e1acc72__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h5e1acc72__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h5e1acc72__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h5e1acc72__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h28f07b73__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h28f07b73__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h28f07b73__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h28f07b73__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h28f07b73__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h28f07b73__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h28f07b73__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h28f07b73__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h93c29fd6__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h93c29fd6__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h93c29fd6__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h93c29fd6__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h93c29fd6__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h93c29fd6__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h93c29fd6__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h93c29fd6__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h53b676a3__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h53b676a3__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h53b676a3__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h53b676a3__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h53b676a3__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h53b676a3__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h53b676a3__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h53b676a3__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h84a3ccff__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h84a3ccff__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h84a3ccff__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h84a3ccff__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h84a3ccff__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h84a3ccff__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h84a3ccff__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h84a3ccff__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0f9c52fb__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0f9c52fb__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0f9c52fb__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0f9c52fb__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0f9c52fb__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0f9c52fb__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0f9c52fb__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h0f9c52fb__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h55dd9520__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h55dd9520__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h55dd9520__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h55dd9520__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h55dd9520__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h55dd9520__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h55dd9520__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h55dd9520__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hb57502ff__0 >> 2U));
    }
    if ((9U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hb57502ff__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hb57502ff__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hb57502ff__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hb57502ff__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hb57502ff__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hb57502ff__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hb57502ff__0 >> 9U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h2856c4e1__0)) 
                       * (0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_hc6134639__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h1ce7f694__0)) 
                       * (0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_heabe8fd2__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h1a43182c__0)) 
                       * (0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_he4d1044c__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h834cb655__0)) 
                       * (0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h0e03bab1__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h5e1acc72__0)) 
                       * (0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h28f07b73__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h93c29fd6__0)) 
                       * (0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h53b676a3__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h84a3ccff__0)) 
                       * (0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h0f9c52fb__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h55dd9520__0)) 
                       * (0xffU & ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_hb57502ff__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((QData)((IData)((0xffffU & (((1U & ((1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x30U)))) 
                                                    >> 0xfU)) 
                                                ^ (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->X_N 
                                                                                >> 0x30U)))) 
                                                      >> 0xfU))))
                                          ? ((IData)(1U) 
                                             + (~ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__r_temp))
                                          : neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__r_temp) 
                                        + ((1U & ((1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->W 
                                                                                >> 0x38U)))) 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->X_N 
                                                                                >> 0x38U)))) 
                                                      >> 0xfU))))
                                            ? ((IData)(1U) 
                                               + (~ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__r_temp))
                                            : neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__r_temp))))) 
            << 0x30U) | (((QData)((IData)((((((1U & 
                                               ((1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x20U)))) 
                                                    >> 0xfU)) 
                                                ^ (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->X_N 
                                                                                >> 0x20U)))) 
                                                      >> 0xfU))))
                                               ? ((IData)(1U) 
                                                  + 
                                                  (~ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__r_temp))
                                               : neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__r_temp) 
                                             + ((1U 
                                                 & ((1U 
                                                     & (VL_EXTENDS_II(16,8, 
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->W 
                                                                                >> 0x28U)))) 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (1U 
                                                     & (VL_EXTENDS_II(16,8, 
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->X_N 
                                                                                >> 0x28U)))) 
                                                        >> 0xfU))))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__r_temp))
                                                 : neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__r_temp)) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (((1U 
                                                   & ((1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->W 
                                                                                >> 0x10U)))) 
                                                          >> 0xfU)) 
                                                      ^ 
                                                      (1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->X_N 
                                                                                >> 0x10U)))) 
                                                          >> 0xfU))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp))
                                                   : neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp) 
                                                 + 
                                                 ((1U 
                                                   & ((1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->W 
                                                                                >> 0x18U)))) 
                                                          >> 0xfU)) 
                                                      ^ 
                                                      (1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->X_N 
                                                                                >> 0x18U)))) 
                                                          >> 0xfU))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp))
                                                   : neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp)))))) 
                          << 0x10U) | (QData)((IData)(
                                                      (0xffffU 
                                                       & (((1U 
                                                            & ((1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->W))) 
                                                                   >> 0xfU)) 
                                                               ^ 
                                                               (1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->X_N))) 
                                                                   >> 0xfU))))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp))
                                                            : neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp) 
                                                          + 
                                                          ((1U 
                                                            & ((1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->W 
                                                                                >> 8U)))) 
                                                                   >> 0xfU)) 
                                                               ^ 
                                                               (1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->X_N 
                                                                                >> 8U)))) 
                                                                   >> 0xfU))))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp))
                                                            : neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp)))))));
    vlSelf->neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
        = ((((IData)((neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                      >> 0x20U)) + (IData)((neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                            >> 0x30U))) 
            << 0x10U) | (0xffffU & ((IData)(neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage) 
                                    + (IData)((neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                               >> 0x10U)))));
}

void sub___024root___eval_ico(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        sub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void sub___024root___eval_act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_act\n"); );
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->Out = 0U;
        vlSelf->neuron_intra_Nbits__DOT__acc = 0U;
    } else if (vlSelf->en) {
        vlSelf->Out = (VL_LTS_III(16, 0x7fU, (IData)(vlSelf->neuron_intra_Nbits__DOT__acc))
                        ? 0x7fU : (0xffU & (IData)(vlSelf->neuron_intra_Nbits__DOT__acc)));
        vlSelf->neuron_intra_Nbits__DOT__acc = (0xffffU 
                                                & (vlSelf->neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
                                                   + 
                                                   (vlSelf->neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
                                                    >> 0x10U)));
    }
}

void sub___024root___eval_nba(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        sub___024root___nba_sequent__TOP__0(vlSelf);
    }
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
    neuron_intra_Nbits_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
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
                VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_DRUMs_8/rtl/neuron_intra_Nbits.v", 59, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_DRUMs_8/rtl/neuron_intra_Nbits.v", 59, "", "Active region did not converge.");
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
                VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_DRUMs_8/rtl/neuron_intra_Nbits.v", 59, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            sub___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
