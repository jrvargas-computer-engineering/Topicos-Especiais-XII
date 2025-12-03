// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_DRUMs_4.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

VL_ATTR_COLD void sub___024root___eval_static(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_static\n"); );
}

VL_ATTR_COLD void sub___024root___eval_initial(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void sub___024root___eval_final(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_final\n"); );
}

VL_ATTR_COLD void sub___024root___eval_triggers__stl(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__stl(sub___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void sub___024root___eval_stl(sub___024root* vlSelf);

VL_ATTR_COLD void sub___024root___eval_settle(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        sub___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                sub___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("neuron_wrapper_test/neuron_wrapper_DRUMs_4/rtl/neuron_wrapper.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            sub___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__stl(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*2:0*/, 256> neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0;

VL_ATTR_COLD void sub___024root___stl_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*2:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*1:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_hb16f8d1a__0;
    IData/*31:0*/ __VdfgTmp_h3e090271__0;
    IData/*31:0*/ __VdfgTmp_ha4b3dbba__0;
    IData/*31:0*/ __VdfgTmp_hb5cccf90__0;
    IData/*31:0*/ __VdfgTmp_h8173b6f3__0;
    IData/*31:0*/ __VdfgTmp_h34965ad9__0;
    IData/*31:0*/ __VdfgTmp_he966dddd__0;
    IData/*31:0*/ __VdfgTmp_hd6abe22b__0;
    IData/*31:0*/ __VdfgTmp_hc09ce60b__0;
    IData/*31:0*/ __VdfgTmp_hf8085df5__0;
    IData/*31:0*/ __VdfgTmp_h53ebb2f3__0;
    IData/*31:0*/ __VdfgTmp_hf3dd800a__0;
    IData/*31:0*/ __VdfgTmp_h23ca79f9__0;
    IData/*31:0*/ __VdfgTmp_h01ec29e8__0;
    IData/*31:0*/ __VdfgTmp_h23a90410__0;
    IData/*31:0*/ __VdfgTmp_hd0426aa4__0;
    IData/*31:0*/ __VdfgTmp_hd6067c4d__0;
    IData/*31:0*/ __VdfgTmp_hfa7253a0__0;
    IData/*31:0*/ __VdfgTmp_h18fe1fd1__0;
    IData/*31:0*/ __VdfgTmp_hc73ebc50__0;
    IData/*31:0*/ __VdfgTmp_he3c8bb81__0;
    IData/*31:0*/ __VdfgTmp_hcda72d95__0;
    IData/*31:0*/ __VdfgTmp_h1718503d__0;
    IData/*31:0*/ __VdfgTmp_h44a00b25__0;
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
    vlSelf->out_safe = (((- (IData)((1U & ((IData)(vlSelf->neuron_wrapper__DOT__neuron_out) 
                                           >> 3U)))) 
                         << 4U) | (IData)(vlSelf->neuron_wrapper__DOT__neuron_out));
    __VdfgTmp_hc09ce60b__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & vlSelf->neuron_wrapper__DOT__W_reg)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & vlSelf->neuron_wrapper__DOT__W_reg)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & vlSelf->neuron_wrapper__DOT__W_reg))));
    __VdfgTmp_hf8085df5__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & vlSelf->neuron_wrapper__DOT__X_reg)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & vlSelf->neuron_wrapper__DOT__X_reg)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & vlSelf->neuron_wrapper__DOT__X_reg))));
    __VdfgTmp_h53ebb2f3__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                         >> 4U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 4U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                            >> 4U)))));
    __VdfgTmp_hf3dd800a__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                         >> 4U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 4U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                            >> 4U)))));
    __VdfgTmp_h23ca79f9__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                         >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 8U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                            >> 8U)))));
    __VdfgTmp_h01ec29e8__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                         >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 8U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                            >> 8U)))));
    __VdfgTmp_h23a90410__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                         >> 0xcU))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0xcU))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                            >> 0xcU)))));
    __VdfgTmp_hd0426aa4__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                         >> 0xcU))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0xcU))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                            >> 0xcU)))));
    __VdfgTmp_hd6067c4d__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                         >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x10U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                            >> 0x10U)))));
    __VdfgTmp_hfa7253a0__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                         >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x10U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                            >> 0x10U)))));
    __VdfgTmp_h18fe1fd1__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                         >> 0x14U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x14U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                            >> 0x14U)))));
    __VdfgTmp_hc73ebc50__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                         >> 0x14U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x14U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                            >> 0x14U)))));
    __VdfgTmp_he3c8bb81__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                         >> 0x18U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x18U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                            >> 0x18U)))));
    __VdfgTmp_hcda72d95__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (0xfU 
                                                      & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                         >> 0x18U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x18U))))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (0xfU 
                                                         & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                            >> 0x18U)))));
    __VdfgTmp_h1718503d__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (vlSelf->neuron_wrapper__DOT__W_reg 
                                                      >> 0x1cU)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                   >> 0x1cU)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (vlSelf->neuron_wrapper__DOT__W_reg 
                                                         >> 0x1cU))));
    __VdfgTmp_h44a00b25__0 = ((0x80U & VL_EXTENDS_II(8,4, 
                                                     (vlSelf->neuron_wrapper__DOT__X_reg 
                                                      >> 0x1cU)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffU 
                                                  & VL_EXTENDS_II(8,4, 
                                                                  (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                   >> 0x1cU)))))
                               : (0xffU & VL_EXTENDS_II(8,4, 
                                                        (vlSelf->neuron_wrapper__DOT__X_reg 
                                                         >> 0x1cU))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_hc09ce60b__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hc09ce60b__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hc09ce60b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_hc09ce60b__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hc09ce60b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hc09ce60b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hc09ce60b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hc09ce60b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hc09ce60b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hc09ce60b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hc09ce60b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hc09ce60b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hc09ce60b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hc09ce60b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hc09ce60b__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hc09ce60b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_hf8085df5__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hf8085df5__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hf8085df5__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_hf8085df5__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hf8085df5__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hf8085df5__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hf8085df5__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hf8085df5__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hf8085df5__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf8085df5__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hf8085df5__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf8085df5__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hf8085df5__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf8085df5__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hf8085df5__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf8085df5__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h53ebb2f3__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h53ebb2f3__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h53ebb2f3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h53ebb2f3__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h53ebb2f3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h53ebb2f3__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h53ebb2f3__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h53ebb2f3__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h53ebb2f3__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h53ebb2f3__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h53ebb2f3__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h53ebb2f3__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h53ebb2f3__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h53ebb2f3__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h53ebb2f3__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h53ebb2f3__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_hf3dd800a__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hf3dd800a__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hf3dd800a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_hf3dd800a__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hf3dd800a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hf3dd800a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hf3dd800a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hf3dd800a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hf3dd800a__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf3dd800a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hf3dd800a__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf3dd800a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hf3dd800a__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf3dd800a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hf3dd800a__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hf3dd800a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h23ca79f9__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h23ca79f9__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h23ca79f9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h23ca79f9__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h23ca79f9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h23ca79f9__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h23ca79f9__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h23ca79f9__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h23ca79f9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h23ca79f9__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h23ca79f9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h23ca79f9__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h23ca79f9__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h23ca79f9__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h23ca79f9__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h23ca79f9__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_h01ec29e8__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h01ec29e8__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h01ec29e8__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_h01ec29e8__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h01ec29e8__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h01ec29e8__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h01ec29e8__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h01ec29e8__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h01ec29e8__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h01ec29e8__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h01ec29e8__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h01ec29e8__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h01ec29e8__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h01ec29e8__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h01ec29e8__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h01ec29e8__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h23a90410__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h23a90410__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h23a90410__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h23a90410__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h23a90410__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h23a90410__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h23a90410__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h23a90410__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h23a90410__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h23a90410__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h23a90410__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h23a90410__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h23a90410__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h23a90410__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h23a90410__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h23a90410__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_hd0426aa4__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hd0426aa4__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hd0426aa4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_hd0426aa4__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hd0426aa4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd0426aa4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hd0426aa4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd0426aa4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hd0426aa4__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd0426aa4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hd0426aa4__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd0426aa4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hd0426aa4__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd0426aa4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hd0426aa4__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd0426aa4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_hd6067c4d__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hd6067c4d__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hd6067c4d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_hd6067c4d__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hd6067c4d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hd6067c4d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hd6067c4d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hd6067c4d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hd6067c4d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hd6067c4d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hd6067c4d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hd6067c4d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hd6067c4d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hd6067c4d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hd6067c4d__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hd6067c4d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_hfa7253a0__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hfa7253a0__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hfa7253a0__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_hfa7253a0__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hfa7253a0__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hfa7253a0__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hfa7253a0__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hfa7253a0__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hfa7253a0__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hfa7253a0__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hfa7253a0__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hfa7253a0__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hfa7253a0__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hfa7253a0__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hfa7253a0__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hfa7253a0__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h18fe1fd1__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h18fe1fd1__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h18fe1fd1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h18fe1fd1__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h18fe1fd1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h18fe1fd1__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h18fe1fd1__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h18fe1fd1__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h18fe1fd1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h18fe1fd1__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h18fe1fd1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h18fe1fd1__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h18fe1fd1__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h18fe1fd1__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h18fe1fd1__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h18fe1fd1__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_hc73ebc50__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hc73ebc50__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hc73ebc50__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_hc73ebc50__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hc73ebc50__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hc73ebc50__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hc73ebc50__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hc73ebc50__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hc73ebc50__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc73ebc50__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hc73ebc50__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc73ebc50__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hc73ebc50__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc73ebc50__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hc73ebc50__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hc73ebc50__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_he3c8bb81__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_he3c8bb81__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_he3c8bb81__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_he3c8bb81__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_he3c8bb81__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_he3c8bb81__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_he3c8bb81__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_he3c8bb81__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_he3c8bb81__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he3c8bb81__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_he3c8bb81__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he3c8bb81__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_he3c8bb81__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he3c8bb81__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_he3c8bb81__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he3c8bb81__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_hcda72d95__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hcda72d95__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hcda72d95__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_hcda72d95__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hcda72d95__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hcda72d95__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hcda72d95__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hcda72d95__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hcda72d95__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hcda72d95__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hcda72d95__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hcda72d95__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hcda72d95__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hcda72d95__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hcda72d95__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hcda72d95__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & __VdfgTmp_h1718503d__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h1718503d__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h1718503d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 7U) & (__VdfgTmp_h1718503d__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h1718503d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1718503d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h1718503d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h1718503d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h1718503d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1718503d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h1718503d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1718503d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h1718503d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1718503d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h1718503d__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h1718503d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & __VdfgTmp_h44a00b25__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h44a00b25__0) ? 0U
                : 1U) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h44a00b25__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 7U) & (__VdfgTmp_h44a00b25__0 
                                  >> 6U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h44a00b25__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h44a00b25__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h44a00b25__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h44a00b25__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h44a00b25__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h44a00b25__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h44a00b25__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h44a00b25__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h44a00b25__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h44a00b25__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h44a00b25__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h44a00b25__0)));
    __Vtableidx1 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx3];
    __Vtableidx4 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx4];
    __Vtableidx5 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx5];
    __Vtableidx6 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx6];
    __Vtableidx7 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx7];
    __Vtableidx8 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx8];
    __Vtableidx9 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx9];
    __Vtableidx10 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx10];
    __Vtableidx11 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx11];
    __Vtableidx12 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx12];
    __Vtableidx13 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx13];
    __Vtableidx14 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx14];
    __Vtableidx15 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx15];
    __Vtableidx16 = vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 
        = neuron_wrapper_DRUMs_4__ConstPool__TABLE_h73da5c3f_0
        [__Vtableidx16];
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hc09ce60b__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hc09ce60b__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hc09ce60b__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hc09ce60b__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf8085df5__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf8085df5__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf8085df5__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf8085df5__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h53ebb2f3__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h53ebb2f3__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h53ebb2f3__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h53ebb2f3__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf3dd800a__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf3dd800a__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf3dd800a__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hf3dd800a__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h23ca79f9__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h23ca79f9__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h23ca79f9__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h23ca79f9__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h01ec29e8__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h01ec29e8__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h01ec29e8__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h01ec29e8__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h23a90410__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h23a90410__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h23a90410__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h23a90410__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hd0426aa4__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hd0426aa4__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hd0426aa4__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hd0426aa4__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hd6067c4d__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hd6067c4d__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hd6067c4d__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_hd6067c4d__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hfa7253a0__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hfa7253a0__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hfa7253a0__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hfa7253a0__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h18fe1fd1__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h18fe1fd1__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h18fe1fd1__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h18fe1fd1__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hc73ebc50__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hc73ebc50__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hc73ebc50__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hc73ebc50__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_he3c8bb81__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_he3c8bb81__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_he3c8bb81__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_he3c8bb81__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hcda72d95__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hcda72d95__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hcda72d95__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_hcda72d95__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h1718503d__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h1718503d__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h1718503d__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (3U & (__VdfgTmp_h1718503d__0 >> 5U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((4U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h44a00b25__0 >> 2U));
    }
    if ((5U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h44a00b25__0 >> 3U));
    }
    if ((6U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h44a00b25__0 >> 4U));
    }
    if ((7U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (3U & (__VdfgTmp_h44a00b25__0 >> 5U));
    }
    __VdfgTmp_he966dddd__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & vlSelf->neuron_wrapper__DOT__W_reg)) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & vlSelf->neuron_wrapper__DOT__X_reg)) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_hc09ce60b__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_hf8085df5__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_hc09ce60b__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_hf8085df5__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_hd6abe22b__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                              >> 4U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                >> 4U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h53ebb2f3__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_hf3dd800a__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h53ebb2f3__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_hf3dd800a__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_h8173b6f3__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                              >> 8U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                >> 8U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h23ca79f9__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_h01ec29e8__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h23ca79f9__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_h01ec29e8__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_h34965ad9__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                              >> 0xcU))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                >> 0xcU))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h23a90410__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_hd0426aa4__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h23a90410__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_hd0426aa4__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_ha4b3dbba__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                              >> 0x10U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                >> 0x10U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_hd6067c4d__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_hfa7253a0__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_hd6067c4d__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_hfa7253a0__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_hb5cccf90__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                              >> 0x14U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                >> 0x14U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h18fe1fd1__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_hc73ebc50__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h18fe1fd1__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_hc73ebc50__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_hb16f8d1a__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (0xfU 
                                                           & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                              >> 0x18U))) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (0xfU 
                                                             & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                >> 0x18U))) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_he3c8bb81__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_hcda72d95__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_he3c8bb81__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_hcda72d95__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    __VdfgTmp_h3e090271__0 = ((1U & ((1U & (VL_EXTENDS_II(8,4, 
                                                          (vlSelf->neuron_wrapper__DOT__W_reg 
                                                           >> 0x1cU)) 
                                            >> 7U)) 
                                     ^ (1U & (VL_EXTENDS_II(8,4, 
                                                            (vlSelf->neuron_wrapper__DOT__X_reg 
                                                             >> 0x1cU)) 
                                              >> 7U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & ((0xffU 
                                                      & ((0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                                 << 1U))
                                                              : __VdfgTmp_h1718503d__0)) 
                                                         * 
                                                         (0xfU 
                                                          & ((3U 
                                                              < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                              ? 
                                                             (9U 
                                                              | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                                 << 1U))
                                                              : __VdfgTmp_h44a00b25__0)))) 
                                                     << 
                                                     (0xfU 
                                                      & (((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                              - (IData)(3U)))
                                                           : 0U) 
                                                         + 
                                                         ((3U 
                                                           < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                           ? 
                                                          (7U 
                                                           & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                              - (IData)(3U)))
                                                           : 0U)))))))
                               : (0xffffU & ((0xffU 
                                              & ((0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                                         << 1U))
                                                      : __VdfgTmp_h1718503d__0)) 
                                                 * 
                                                 (0xfU 
                                                  & ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (9U 
                                                      | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                         << 1U))
                                                      : __VdfgTmp_h44a00b25__0)))) 
                                             << (0xfU 
                                                 & (((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                                         - (IData)(3U)))
                                                      : 0U) 
                                                    + 
                                                    ((3U 
                                                      < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                                      ? 
                                                     (7U 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                                         - (IData)(3U)))
                                                      : 0U))))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((__VdfgTmp_hb16f8d1a__0 + __VdfgTmp_h3e090271__0) 
            << 0x18U) | ((0xff0000U & ((__VdfgTmp_ha4b3dbba__0 
                                        + __VdfgTmp_hb5cccf90__0) 
                                       << 0x10U)) | 
                         ((0xff00U & ((__VdfgTmp_h8173b6f3__0 
                                       + __VdfgTmp_h34965ad9__0) 
                                      << 8U)) | (0xffU 
                                                 & (__VdfgTmp_he966dddd__0 
                                                    + __VdfgTmp_hd6abe22b__0)))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
        = ((0xff00U & (((vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                         >> 0x10U) + (vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                      >> 0x18U)) << 8U)) 
           | (0xffU & (vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                       + (vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                          >> 8U))));
}

VL_ATTR_COLD void sub___024root___eval_stl(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        sub___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__nba(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void sub___024root___ctor_var_reset(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->load_en = VL_RAND_RESET_I(1);
    vlSelf->w_in = VL_RAND_RESET_I(32);
    vlSelf->x_in = VL_RAND_RESET_I(32);
    vlSelf->out_safe = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__W_reg = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__X_reg = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__neuron_out = VL_RAND_RESET_I(4);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__acc = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(8);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
}
