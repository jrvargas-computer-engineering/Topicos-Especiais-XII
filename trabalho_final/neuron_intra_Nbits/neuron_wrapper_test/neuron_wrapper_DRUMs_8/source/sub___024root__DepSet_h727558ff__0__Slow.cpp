// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_DRUMs_8.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

VL_ATTR_COLD void sub___024root___eval_static(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_static\n"); );
}

VL_ATTR_COLD void sub___024root___eval_initial(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void sub___024root___eval_final(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_final\n"); );
}

VL_ATTR_COLD void sub___024root___eval_triggers__stl(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__stl(sub___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void sub___024root___eval_stl(sub___024root* vlSelf);

VL_ATTR_COLD void sub___024root___eval_settle(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                VL_FATAL_MT("neuron_wrapper_test/neuron_wrapper_DRUMs_8/rtl/neuron_wrapper.v", 1, "", "Settle region did not converge.");
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
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void sub___024root___stl_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__r_temp;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*5:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_h74ebfa92__0;
    IData/*31:0*/ __VdfgTmp_h26b958ec__0;
    IData/*31:0*/ __VdfgTmp_hc6763b2d__0;
    IData/*31:0*/ __VdfgTmp_hd7313907__0;
    IData/*31:0*/ __VdfgTmp_h91b60712__0;
    IData/*31:0*/ __VdfgTmp_he0f9ffe7__0;
    IData/*31:0*/ __VdfgTmp_h95cbfb1b__0;
    IData/*31:0*/ __VdfgTmp_h91edd9f4__0;
    IData/*31:0*/ __VdfgTmp_hf575ba0b__0;
    IData/*31:0*/ __VdfgTmp_hfec0447a__0;
    IData/*31:0*/ __VdfgTmp_he6134893__0;
    IData/*31:0*/ __VdfgTmp_h2d776d97__0;
    IData/*31:0*/ __VdfgTmp_h040c9dfb__0;
    IData/*31:0*/ __VdfgTmp_h602abd76__0;
    IData/*31:0*/ __VdfgTmp_h02740cda__0;
    IData/*31:0*/ __VdfgTmp_h21e50df2__0;
    // Body
    vlSelf->out_safe = (((- (IData)((1U & ((IData)(vlSelf->neuron_wrapper__DOT__neuron_out) 
                                           >> 7U)))) 
                         << 8U) | (IData)(vlSelf->neuron_wrapper__DOT__neuron_out));
    __VdfgTmp_h74ebfa92__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(vlSelf->neuron_wrapper__DOT__W_reg))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->neuron_wrapper__DOT__W_reg))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(vlSelf->neuron_wrapper__DOT__W_reg)))));
    __VdfgTmp_h26b958ec__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(vlSelf->neuron_wrapper__DOT__X_reg))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->neuron_wrapper__DOT__X_reg))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(vlSelf->neuron_wrapper__DOT__X_reg)))));
    __VdfgTmp_hc6763b2d__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                   >> 8U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 8U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 8U))))));
    __VdfgTmp_hd7313907__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                   >> 8U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                              >> 8U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 8U))))));
    __VdfgTmp_h91b60712__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                   >> 0x10U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 0x10U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x10U))))));
    __VdfgTmp_he0f9ffe7__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                   >> 0x10U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                              >> 0x10U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x10U))))));
    __VdfgTmp_h95cbfb1b__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                   >> 0x18U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 0x18U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x18U))))));
    __VdfgTmp_h91edd9f4__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                   >> 0x18U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                              >> 0x18U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x18U))))));
    __VdfgTmp_hf575ba0b__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                   >> 0x20U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 0x20U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x20U))))));
    __VdfgTmp_hfec0447a__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                   >> 0x20U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                              >> 0x20U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x20U))))));
    __VdfgTmp_he6134893__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                   >> 0x28U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 0x28U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x28U))))));
    __VdfgTmp_h2d776d97__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                   >> 0x28U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                              >> 0x28U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x28U))))));
    __VdfgTmp_h040c9dfb__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                   >> 0x30U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 0x30U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x30U))))));
    __VdfgTmp_h602abd76__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                   >> 0x30U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                              >> 0x30U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x30U))))));
    __VdfgTmp_h02740cda__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                   >> 0x38U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 0x38U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x38U))))));
    __VdfgTmp_h21e50df2__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                   >> 0x38U)))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                              >> 0x38U)))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                      >> 0x38U))))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h74ebfa92__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h74ebfa92__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h74ebfa92__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h74ebfa92__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h74ebfa92__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h74ebfa92__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h74ebfa92__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h74ebfa92__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h74ebfa92__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h26b958ec__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h26b958ec__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h26b958ec__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h26b958ec__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h26b958ec__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h26b958ec__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h26b958ec__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h26b958ec__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h26b958ec__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_hc6763b2d__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hc6763b2d__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hc6763b2d__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hc6763b2d__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hc6763b2d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hc6763b2d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hc6763b2d__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hc6763b2d__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hc6763b2d__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_hd7313907__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hd7313907__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hd7313907__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hd7313907__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hd7313907__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hd7313907__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hd7313907__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hd7313907__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd7313907__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h91b60712__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h91b60712__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h91b60712__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h91b60712__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h91b60712__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h91b60712__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h91b60712__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h91b60712__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h91b60712__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_he0f9ffe7__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_he0f9ffe7__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_he0f9ffe7__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_he0f9ffe7__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_he0f9ffe7__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_he0f9ffe7__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_he0f9ffe7__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he0f9ffe7__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h95cbfb1b__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h95cbfb1b__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h95cbfb1b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h95cbfb1b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h95cbfb1b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h95cbfb1b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h95cbfb1b__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h95cbfb1b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h91edd9f4__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h91edd9f4__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h91edd9f4__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h91edd9f4__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h91edd9f4__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h91edd9f4__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h91edd9f4__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h91edd9f4__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h91edd9f4__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_hf575ba0b__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hf575ba0b__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hf575ba0b__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hf575ba0b__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hf575ba0b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hf575ba0b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hf575ba0b__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hf575ba0b__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hf575ba0b__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_hfec0447a__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hfec0447a__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hfec0447a__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hfec0447a__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hfec0447a__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hfec0447a__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hfec0447a__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hfec0447a__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hfec0447a__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_he6134893__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_he6134893__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_he6134893__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_he6134893__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_he6134893__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_he6134893__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_he6134893__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_he6134893__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_he6134893__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h2d776d97__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h2d776d97__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h2d776d97__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h2d776d97__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h2d776d97__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h2d776d97__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h2d776d97__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h2d776d97__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h2d776d97__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h040c9dfb__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h040c9dfb__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h040c9dfb__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h040c9dfb__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h040c9dfb__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h040c9dfb__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h040c9dfb__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h040c9dfb__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h040c9dfb__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h602abd76__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h602abd76__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h602abd76__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h602abd76__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h602abd76__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h602abd76__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h602abd76__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h602abd76__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h602abd76__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h02740cda__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h02740cda__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h02740cda__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h02740cda__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h02740cda__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h02740cda__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h02740cda__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h02740cda__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h02740cda__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h21e50df2__0));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h21e50df2__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h21e50df2__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h21e50df2__0) ? 0U
                : (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h21e50df2__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h21e50df2__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h21e50df2__0) ? 0U : 
               (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h21e50df2__0)));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h21e50df2__0) ? 0U : 
              (1U & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h21e50df2__0)));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h74ebfa92__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h74ebfa92__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h74ebfa92__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h74ebfa92__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h74ebfa92__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h74ebfa92__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h74ebfa92__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h74ebfa92__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h26b958ec__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h26b958ec__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h26b958ec__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h26b958ec__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h26b958ec__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h26b958ec__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h26b958ec__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h26b958ec__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hc6763b2d__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hc6763b2d__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hc6763b2d__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hc6763b2d__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hc6763b2d__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hc6763b2d__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hc6763b2d__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hc6763b2d__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hd7313907__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hd7313907__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hd7313907__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hd7313907__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hd7313907__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hd7313907__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hd7313907__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hd7313907__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h91b60712__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h91b60712__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h91b60712__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h91b60712__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h91b60712__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h91b60712__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h91b60712__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h91b60712__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he0f9ffe7__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he0f9ffe7__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he0f9ffe7__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he0f9ffe7__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he0f9ffe7__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he0f9ffe7__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he0f9ffe7__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_he0f9ffe7__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h95cbfb1b__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h95cbfb1b__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h95cbfb1b__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h95cbfb1b__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h95cbfb1b__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h95cbfb1b__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h95cbfb1b__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h95cbfb1b__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h91edd9f4__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h91edd9f4__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h91edd9f4__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h91edd9f4__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h91edd9f4__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h91edd9f4__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h91edd9f4__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h91edd9f4__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hf575ba0b__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hf575ba0b__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hf575ba0b__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hf575ba0b__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hf575ba0b__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hf575ba0b__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hf575ba0b__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_hf575ba0b__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hfec0447a__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hfec0447a__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hfec0447a__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hfec0447a__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hfec0447a__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hfec0447a__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hfec0447a__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_hfec0447a__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_he6134893__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_he6134893__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_he6134893__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_he6134893__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_he6134893__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_he6134893__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_he6134893__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_he6134893__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h2d776d97__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h2d776d97__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h2d776d97__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h2d776d97__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h2d776d97__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h2d776d97__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h2d776d97__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h2d776d97__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h040c9dfb__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h040c9dfb__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h040c9dfb__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h040c9dfb__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h040c9dfb__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h040c9dfb__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h040c9dfb__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h040c9dfb__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h602abd76__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h602abd76__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h602abd76__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h602abd76__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h602abd76__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h602abd76__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h602abd76__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h602abd76__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h02740cda__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h02740cda__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h02740cda__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h02740cda__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h02740cda__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h02740cda__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h02740cda__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0x3fU & (__VdfgTmp_h02740cda__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((8U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h21e50df2__0 >> 2U));
    }
    if ((9U == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h21e50df2__0 >> 3U));
    }
    if ((0xaU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h21e50df2__0 >> 4U));
    }
    if ((0xbU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h21e50df2__0 >> 5U));
    }
    if ((0xcU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h21e50df2__0 >> 6U));
    }
    if ((0xdU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h21e50df2__0 >> 7U));
    }
    if ((0xeU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h21e50df2__0 >> 8U));
    }
    if ((0xfU == (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0x3fU & (__VdfgTmp_h21e50df2__0 >> 9U));
    }
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h74ebfa92__0)) 
                       * (0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h26b958ec__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_hc6763b2d__0)) 
                       * (0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_hd7313907__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h91b60712__0)) 
                       * (0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_he0f9ffe7__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h95cbfb1b__0)) 
                       * (0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h91edd9f4__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_hf575ba0b__0)) 
                       * (0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_hfec0447a__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_he6134893__0)) 
                       * (0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h2d776d97__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h040c9dfb__0)) 
                       * (0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h602abd76__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__r_temp 
        = ((0xffffU & ((0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                  ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                              << 1U))
                                  : __VdfgTmp_h02740cda__0)) 
                       * (0xffU & ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0x81U | ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                                << 1U))
                                    : __VdfgTmp_h21e50df2__0)))) 
           << (0x1fU & (((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(7U)))
                          : 0U) + ((7U < (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(7U)))
                                    : 0U))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((QData)((IData)((0xffffU & (((1U & ((1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 0x30U)))) 
                                                    >> 0xfU)) 
                                                ^ (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                                >> 0x30U)))) 
                                                      >> 0xfU))))
                                          ? ((IData)(1U) 
                                             + (~ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__r_temp))
                                          : neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__r_temp) 
                                        + ((1U & ((1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                                >> 0x38U)))) 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                                >> 0x38U)))) 
                                                      >> 0xfU))))
                                            ? ((IData)(1U) 
                                               + (~ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__r_temp))
                                            : neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__r_temp))))) 
            << 0x30U) | (((QData)((IData)((((((1U & 
                                               ((1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                              >> 0x20U)))) 
                                                    >> 0xfU)) 
                                                ^ (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                                >> 0x20U)))) 
                                                      >> 0xfU))))
                                               ? ((IData)(1U) 
                                                  + 
                                                  (~ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__r_temp))
                                               : neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__r_temp) 
                                             + ((1U 
                                                 & ((1U 
                                                     & (VL_EXTENDS_II(16,8, 
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                                >> 0x28U)))) 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (1U 
                                                     & (VL_EXTENDS_II(16,8, 
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                                >> 0x28U)))) 
                                                        >> 0xfU))))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__r_temp))
                                                 : neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__r_temp)) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (((1U 
                                                   & ((1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                                >> 0x10U)))) 
                                                          >> 0xfU)) 
                                                      ^ 
                                                      (1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                                >> 0x10U)))) 
                                                          >> 0xfU))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp))
                                                   : neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp) 
                                                 + 
                                                 ((1U 
                                                   & ((1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                                >> 0x18U)))) 
                                                          >> 0xfU)) 
                                                      ^ 
                                                      (1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                                >> 0x18U)))) 
                                                          >> 0xfU))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp))
                                                   : neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp)))))) 
                          << 0x10U) | (QData)((IData)(
                                                      (0xffffU 
                                                       & (((1U 
                                                            & ((1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->neuron_wrapper__DOT__W_reg))) 
                                                                   >> 0xfU)) 
                                                               ^ 
                                                               (1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->neuron_wrapper__DOT__X_reg))) 
                                                                   >> 0xfU))))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp))
                                                            : neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp) 
                                                          + 
                                                          ((1U 
                                                            & ((1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                                >> 8U)))) 
                                                                   >> 0xfU)) 
                                                               ^ 
                                                               (1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                                >> 8U)))) 
                                                                   >> 0xfU))))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp))
                                                            : neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp)))))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
        = ((((IData)((vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                      >> 0x20U)) + (IData)((vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                            >> 0x30U))) 
            << 0x10U) | (0xffffU & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage) 
                                    + (IData)((vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                               >> 0x10U)))));
}

VL_ATTR_COLD void sub___024root___eval_stl(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        sub___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->load_en = VL_RAND_RESET_I(1);
    vlSelf->w_in = VL_RAND_RESET_I(32);
    vlSelf->x_in = VL_RAND_RESET_I(32);
    vlSelf->out_safe = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__W_reg = VL_RAND_RESET_Q(64);
    vlSelf->neuron_wrapper__DOT__X_reg = VL_RAND_RESET_Q(64);
    vlSelf->neuron_wrapper__DOT__neuron_out = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage = VL_RAND_RESET_Q(64);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2 = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w = VL_RAND_RESET_I(16);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
}
