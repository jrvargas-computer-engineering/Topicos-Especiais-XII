// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_DRUMs_4.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

extern const VlUnpacked<CData/*2:0*/, 256> neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0;

VL_INLINE_OPT void sub___024root___ico_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_he9926360__0;
    IData/*31:0*/ __VdfgTmp_h5a7e4447__0;
    IData/*31:0*/ __VdfgTmp_h0a9d29bd__0;
    IData/*31:0*/ __VdfgTmp_hd10b3d1e__0;
    IData/*31:0*/ __VdfgTmp_h8597a504__0;
    IData/*31:0*/ __VdfgTmp_h0bcf1da8__0;
    IData/*31:0*/ __VdfgTmp_h4f902530__0;
    IData/*31:0*/ __VdfgTmp_h4bbc27bb__0;
    IData/*31:0*/ __VdfgTmp_h92f084b7__0;
    IData/*31:0*/ __VdfgTmp_h153b75ea__0;
    IData/*31:0*/ __VdfgTmp_hda552724__0;
    IData/*31:0*/ __VdfgTmp_h0b0635d6__0;
    IData/*31:0*/ __VdfgTmp_h670fdade__0;
    IData/*31:0*/ __VdfgTmp_hf926c38f__0;
    IData/*31:0*/ __VdfgTmp_h91ca2655__0;
    IData/*31:0*/ __VdfgTmp_hc8e7eb90__0;
    IData/*31:0*/ __VdfgTmp_hbd7ae0b9__0;
    IData/*31:0*/ __VdfgTmp_h5b2d3eff__0;
    IData/*31:0*/ __VdfgTmp_he356abe9__0;
    IData/*31:0*/ __VdfgTmp_ha8be3f7d__0;
    IData/*31:0*/ __VdfgTmp_hec14c612__0;
    IData/*31:0*/ __VdfgTmp_h27cb4bfc__0;
    IData/*31:0*/ __VdfgTmp_h9988bb45__0;
    IData/*31:0*/ __VdfgTmp_he10c1746__0;
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx4;
    CData/*7:0*/ __Vtableidx5;
    CData/*7:0*/ __Vtableidx6;
    CData/*7:0*/ __Vtableidx7;
    CData/*7:0*/ __Vtableidx8;
    CData/*7:0*/ __Vtableidx9;
    CData/*7:0*/ __Vtableidx10;
    CData/*7:0*/ __Vtableidx11;
    CData/*7:0*/ __Vtableidx12;
    CData/*7:0*/ __Vtableidx13;
    CData/*7:0*/ __Vtableidx14;
    CData/*7:0*/ __Vtableidx15;
    CData/*7:0*/ __Vtableidx16;
    // Body
    __VdfgTmp_h92f084b7__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & vlSelf->W)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & vlSelf->W)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & vlSelf->W))));
    __VdfgTmp_h153b75ea__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & vlSelf->X_N)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & vlSelf->X_N)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & vlSelf->X_N))));
    __VdfgTmp_hda552724__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->W 
                                                         >> 4U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->W 
                                                                      >> 4U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->W 
                                                            >> 4U)))));
    __VdfgTmp_h0b0635d6__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->X_N 
                                                         >> 4U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->X_N 
                                                                      >> 4U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->X_N 
                                                            >> 4U)))));
    __VdfgTmp_h670fdade__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->W 
                                                         >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->W 
                                                                      >> 8U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->W 
                                                            >> 8U)))));
    __VdfgTmp_hf926c38f__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->X_N 
                                                         >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->X_N 
                                                                      >> 8U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->X_N 
                                                            >> 8U)))));
    __VdfgTmp_h91ca2655__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->W 
                                                         >> 0xcU))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->W 
                                                                      >> 0xcU))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->W 
                                                            >> 0xcU)))));
    __VdfgTmp_hc8e7eb90__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->X_N 
                                                         >> 0xcU))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->X_N 
                                                                      >> 0xcU))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->X_N 
                                                            >> 0xcU)))));
    __VdfgTmp_hbd7ae0b9__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->W 
                                                         >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->W 
                                                                      >> 0x10U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->W 
                                                            >> 0x10U)))));
    __VdfgTmp_h5b2d3eff__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->X_N 
                                                         >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->X_N 
                                                                      >> 0x10U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->X_N 
                                                            >> 0x10U)))));
    __VdfgTmp_he356abe9__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->W 
                                                         >> 0x14U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->W 
                                                                      >> 0x14U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->W 
                                                            >> 0x14U)))));
    __VdfgTmp_ha8be3f7d__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->X_N 
                                                         >> 0x14U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->X_N 
                                                                      >> 0x14U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->X_N 
                                                            >> 0x14U)))));
    __VdfgTmp_hec14c612__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->W 
                                                         >> 0x18U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->W 
                                                                      >> 0x18U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->W 
                                                            >> 0x18U)))));
    __VdfgTmp_h27cb4bfc__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->X_N 
                                                         >> 0x18U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->X_N 
                                                                      >> 0x18U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->X_N 
                                                            >> 0x18U)))));
    __VdfgTmp_h9988bb45__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (vlSelf->W 
                                                      >> 0x1cU)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (vlSelf->W 
                                                                   >> 0x1cU)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (vlSelf->W 
                                                         >> 0x1cU))));
    __VdfgTmp_he10c1746__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (vlSelf->X_N 
                                                      >> 0x1cU)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (vlSelf->X_N 
                                                                   >> 0x1cU)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (vlSelf->X_N 
                                                         >> 0x1cU))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h92f084b7__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h92f084b7__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h92f084b7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h92f084b7__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h92f084b7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h92f084b7__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h92f084b7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h92f084b7__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h92f084b7__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h92f084b7__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h92f084b7__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h92f084b7__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h92f084b7__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h92f084b7__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h92f084b7__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h92f084b7__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_h153b75ea__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h153b75ea__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h153b75ea__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_h153b75ea__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h153b75ea__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h153b75ea__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h153b75ea__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h153b75ea__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h153b75ea__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h153b75ea__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h153b75ea__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h153b75ea__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h153b75ea__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h153b75ea__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h153b75ea__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h153b75ea__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_hda552724__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hda552724__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hda552724__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_hda552724__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hda552724__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda552724__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hda552724__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda552724__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hda552724__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda552724__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hda552724__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda552724__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hda552724__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda552724__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hda552724__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda552724__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_h0b0635d6__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h0b0635d6__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h0b0635d6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_h0b0635d6__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h0b0635d6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0b0635d6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h0b0635d6__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0b0635d6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h0b0635d6__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0b0635d6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h0b0635d6__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0b0635d6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h0b0635d6__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0b0635d6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h0b0635d6__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0b0635d6__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h670fdade__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h670fdade__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h670fdade__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h670fdade__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h670fdade__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h670fdade__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h670fdade__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h670fdade__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h670fdade__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h670fdade__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h670fdade__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h670fdade__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h670fdade__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h670fdade__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h670fdade__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h670fdade__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_hf926c38f__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hf926c38f__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hf926c38f__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_hf926c38f__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hf926c38f__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hf926c38f__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hf926c38f__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hf926c38f__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hf926c38f__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf926c38f__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hf926c38f__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf926c38f__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hf926c38f__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf926c38f__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hf926c38f__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf926c38f__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h91ca2655__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h91ca2655__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h91ca2655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h91ca2655__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h91ca2655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h91ca2655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h91ca2655__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h91ca2655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h91ca2655__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h91ca2655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h91ca2655__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h91ca2655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h91ca2655__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h91ca2655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h91ca2655__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h91ca2655__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_hc8e7eb90__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hc8e7eb90__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hc8e7eb90__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_hc8e7eb90__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hc8e7eb90__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hc8e7eb90__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hc8e7eb90__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hc8e7eb90__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hc8e7eb90__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc8e7eb90__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hc8e7eb90__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc8e7eb90__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hc8e7eb90__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc8e7eb90__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hc8e7eb90__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc8e7eb90__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_hbd7ae0b9__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hbd7ae0b9__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hbd7ae0b9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_hbd7ae0b9__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hbd7ae0b9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hbd7ae0b9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hbd7ae0b9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hbd7ae0b9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hbd7ae0b9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hbd7ae0b9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hbd7ae0b9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hbd7ae0b9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hbd7ae0b9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hbd7ae0b9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hbd7ae0b9__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hbd7ae0b9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_h5b2d3eff__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h5b2d3eff__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h5b2d3eff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_h5b2d3eff__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h5b2d3eff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h5b2d3eff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h5b2d3eff__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h5b2d3eff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h5b2d3eff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h5b2d3eff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h5b2d3eff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h5b2d3eff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h5b2d3eff__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h5b2d3eff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h5b2d3eff__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h5b2d3eff__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_he356abe9__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_he356abe9__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_he356abe9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_he356abe9__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_he356abe9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_he356abe9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_he356abe9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_he356abe9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_he356abe9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he356abe9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_he356abe9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he356abe9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_he356abe9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he356abe9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_he356abe9__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he356abe9__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_ha8be3f7d__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_ha8be3f7d__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_ha8be3f7d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_ha8be3f7d__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_ha8be3f7d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_ha8be3f7d__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_ha8be3f7d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_ha8be3f7d__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_ha8be3f7d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_ha8be3f7d__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_ha8be3f7d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_ha8be3f7d__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_ha8be3f7d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_ha8be3f7d__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_ha8be3f7d__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_ha8be3f7d__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_hec14c612__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hec14c612__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hec14c612__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_hec14c612__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hec14c612__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hec14c612__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hec14c612__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hec14c612__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hec14c612__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hec14c612__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hec14c612__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hec14c612__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hec14c612__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hec14c612__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hec14c612__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hec14c612__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_h27cb4bfc__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h27cb4bfc__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h27cb4bfc__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_h27cb4bfc__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h27cb4bfc__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h27cb4bfc__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h27cb4bfc__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h27cb4bfc__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h27cb4bfc__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h27cb4bfc__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h27cb4bfc__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h27cb4bfc__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h27cb4bfc__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h27cb4bfc__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h27cb4bfc__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h27cb4bfc__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h9988bb45__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h9988bb45__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h9988bb45__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h9988bb45__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h9988bb45__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h9988bb45__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h9988bb45__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h9988bb45__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h9988bb45__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h9988bb45__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h9988bb45__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h9988bb45__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h9988bb45__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h9988bb45__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h9988bb45__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h9988bb45__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_he10c1746__0));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_he10c1746__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_he10c1746__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_he10c1746__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_he10c1746__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he10c1746__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_he10c1746__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he10c1746__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_he10c1746__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he10c1746__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_he10c1746__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he10c1746__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_he10c1746__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he10c1746__0)));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_he10c1746__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he10c1746__0)));
    __Vtableidx1 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx3];
    __Vtableidx4 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx4];
    __Vtableidx5 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx5];
    __Vtableidx6 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx6];
    __Vtableidx7 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx7];
    __Vtableidx8 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx8];
    __Vtableidx9 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx9];
    __Vtableidx10 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx10];
    __Vtableidx11 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx11];
    __Vtableidx12 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx12];
    __Vtableidx13 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx13];
    __Vtableidx14 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx14];
    __Vtableidx15 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx15];
    __Vtableidx16 = vlSelf->neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_intra_Nbits_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx16];
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h92f084b7__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h92f084b7__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h92f084b7__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h92f084b7__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h153b75ea__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h153b75ea__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h153b75ea__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h153b75ea__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hda552724__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hda552724__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hda552724__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hda552724__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h0b0635d6__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h0b0635d6__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h0b0635d6__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h0b0635d6__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h670fdade__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h670fdade__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h670fdade__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h670fdade__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf926c38f__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf926c38f__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf926c38f__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf926c38f__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h91ca2655__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h91ca2655__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h91ca2655__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h91ca2655__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hc8e7eb90__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hc8e7eb90__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hc8e7eb90__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hc8e7eb90__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hbd7ae0b9__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hbd7ae0b9__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hbd7ae0b9__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hbd7ae0b9__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h5b2d3eff__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h5b2d3eff__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h5b2d3eff__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h5b2d3eff__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_he356abe9__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_he356abe9__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_he356abe9__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_he356abe9__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_ha8be3f7d__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_ha8be3f7d__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_ha8be3f7d__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_ha8be3f7d__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hec14c612__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hec14c612__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hec14c612__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hec14c612__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h27cb4bfc__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h27cb4bfc__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h27cb4bfc__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h27cb4bfc__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h9988bb45__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h9988bb45__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h9988bb45__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h9988bb45__0 >> 5U));
    }
    neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_he10c1746__0 >> 2U));
    }
    if ((5U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_he10c1746__0 >> 3U));
    }
    if ((6U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_he10c1746__0 >> 4U));
    }
    if ((7U == (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_he10c1746__0 >> 5U));
    }
    __VdfgTmp_h4f902530__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & vlSelf->W)) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & vlSelf->X_N)) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h92f084b7__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_h153b75ea__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h92f084b7__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_h153b75ea__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_h4bbc27bb__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->W 
                                                              >> 4U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->X_N 
                                                                >> 4U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_hda552724__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_h0b0635d6__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_hda552724__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_h0b0635d6__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_h8597a504__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->W 
                                                              >> 8U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->X_N 
                                                                >> 8U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h670fdade__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_hf926c38f__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h670fdade__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_hf926c38f__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_h0bcf1da8__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->W 
                                                              >> 0xcU))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->X_N 
                                                                >> 0xcU))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h91ca2655__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_hc8e7eb90__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h91ca2655__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_hc8e7eb90__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_h0a9d29bd__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->W 
                                                              >> 0x10U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->X_N 
                                                                >> 0x10U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_hbd7ae0b9__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_h5b2d3eff__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_hbd7ae0b9__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_h5b2d3eff__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_hd10b3d1e__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->W 
                                                              >> 0x14U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->X_N 
                                                                >> 0x14U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_he356abe9__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_ha8be3f7d__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_he356abe9__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_ha8be3f7d__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_he9926360__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->W 
                                                              >> 0x18U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->X_N 
                                                                >> 0x18U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_hec14c612__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_h27cb4bfc__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_hec14c612__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_h27cb4bfc__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_h5a7e4447__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (vlSelf->W 
                                                           >> 0x1cU)) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (vlSelf->X_N 
                                                             >> 0x1cU)) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h9988bb45__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_he10c1746__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h9988bb45__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_he10c1746__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((__VdfgTmp_he9926360__0 + __VdfgTmp_h5a7e4447__0) 
            << 0x18U) | ((0xff0000U & ((__VdfgTmp_h0a9d29bd__0 
                                        + __VdfgTmp_hd10b3d1e__0) 
                                       << 0x10U)) | 
                         ((0xff00U & ((__VdfgTmp_h8597a504__0 
                                       + __VdfgTmp_h0bcf1da8__0) 
                                      << 8U)) | (0xffU 
                                                 & (__VdfgTmp_h4f902530__0 
                                                    + __VdfgTmp_h4bbc27bb__0)))));
    vlSelf->neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
        = ((0xff00U & (((neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                         >> 0x10U) + (neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                      >> 0x18U)) << 8U)) 
           | (0xffU & (neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                       + (neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                          >> 8U))));
}

void sub___024root___eval_ico(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        sub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void sub___024root___eval_act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_act\n"); );
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->Out = 0U;
        vlSelf->neuron_intra_Nbits__DOT__acc = 0U;
    } else if (vlSelf->en) {
        vlSelf->Out = (VL_LTS_III(8, 7U, (IData)(vlSelf->neuron_intra_Nbits__DOT__acc))
                        ? 7U : (0xfU & (IData)(vlSelf->neuron_intra_Nbits__DOT__acc)));
        vlSelf->neuron_intra_Nbits__DOT__acc = (0xffU 
                                                & ((IData)(vlSelf->neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage) 
                                                   + 
                                                   ((IData)(vlSelf->neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage) 
                                                    >> 8U)));
    }
}

void sub___024root___eval_nba(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    neuron_intra_Nbits_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_DRUMs_4/rtl/neuron_intra_Nbits.v", 1, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_DRUMs_4/rtl/neuron_intra_Nbits.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_DRUMs_4/rtl/neuron_intra_Nbits.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            sub___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
