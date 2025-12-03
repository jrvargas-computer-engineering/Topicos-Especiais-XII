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
                VL_FATAL_MT("neuron_drums_4/neuron_wrapper_DRUMs_8/rtl/neuron_wrapper.v", 1, "", "Settle region did not converge.");
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
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__a_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__b_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__a_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__b_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__a_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__b_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__a_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__b_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__a_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__b_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__a_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__b_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__a_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__b_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__a_temp;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__b_temp;
    // Body
    vlSelf->out_safe = (((- (IData)((1U & ((IData)(vlSelf->neuron_wrapper__DOT__neuron_out) 
                                           >> 3U)))) 
                         << 4U) | (IData)(vlSelf->neuron_wrapper__DOT__neuron_out));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & vlSelf->neuron_wrapper__DOT__W_reg)))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & vlSelf->neuron_wrapper__DOT__W_reg)))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & vlSelf->neuron_wrapper__DOT__W_reg)))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & vlSelf->neuron_wrapper__DOT__X_reg)))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & vlSelf->neuron_wrapper__DOT__X_reg)))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & vlSelf->neuron_wrapper__DOT__X_reg)))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                    >> 4U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                    >> 4U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                  >> 4U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                    >> 4U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                    >> 4U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                  >> 4U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                    >> 8U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                    >> 8U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                  >> 8U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                    >> 8U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                    >> 8U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                  >> 8U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                    >> 0xcU))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                    >> 0xcU))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                  >> 0xcU))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                    >> 0xcU))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                    >> 0xcU))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                  >> 0xcU))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                    >> 0x10U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                    >> 0x10U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                  >> 0x10U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                    >> 0x10U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                    >> 0x10U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                  >> 0x10U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                    >> 0x14U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                    >> 0x14U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                  >> 0x14U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                    >> 0x14U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                    >> 0x14U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                  >> 0x14U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                    >> 0x18U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                    >> 0x18U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                  >> 0x18U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                    >> 0x18U))))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                    >> 0x18U))))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                  >> 0x18U))))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (vlSelf->neuron_wrapper__DOT__W_reg 
                                                 >> 0x1cU)))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                 >> 0x1cU)))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (vlSelf->neuron_wrapper__DOT__W_reg 
                                               >> 0x1cU)))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (vlSelf->neuron_wrapper__DOT__X_reg 
                                                 >> 0x1cU)))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                 >> 0x1cU)))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (vlSelf->neuron_wrapper__DOT__X_reg 
                                               >> 0x1cU)))));
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(8,4, (0xfU 
                                                & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                   >> 0x18U))) 
                            >> 7U)) ^ (1U & (VL_EXTENDS_II(8,4, 
                                                           (0xfU 
                                                            & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                               >> 0x18U))) 
                                             >> 7U))))
               ? ((IData)(1U) + (~ (0xffffU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__a_temp) 
                                               * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__b_temp)))))
               : (0xffffU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__a_temp) 
                             * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__b_temp)))) 
             + ((1U & ((1U & (VL_EXTENDS_II(8,4, (vlSelf->neuron_wrapper__DOT__W_reg 
                                                  >> 0x1cU)) 
                              >> 7U)) ^ (1U & (VL_EXTENDS_II(8,4, 
                                                             (vlSelf->neuron_wrapper__DOT__X_reg 
                                                              >> 0x1cU)) 
                                               >> 7U))))
                 ? ((IData)(1U) + (~ (0xffffU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__a_temp) 
                                                 * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__b_temp)))))
                 : (0xffffU & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__a_temp) 
                               * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__b_temp))))) 
            << 0x18U) | ((0xff0000U & ((((1U & ((1U 
                                                 & (VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                      >> 0x10U))) 
                                                    >> 7U)) 
                                                ^ (1U 
                                                   & (VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                        >> 0x10U))) 
                                                      >> 7U))))
                                          ? ((IData)(1U) 
                                             + (~ (0xffffU 
                                                   & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__a_temp) 
                                                      * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__b_temp)))))
                                          : (0xffffU 
                                             & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__a_temp) 
                                                * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__b_temp)))) 
                                        + ((1U & ((1U 
                                                   & (VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                        >> 0x14U))) 
                                                      >> 7U)) 
                                                  ^ 
                                                  (1U 
                                                   & (VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                        >> 0x14U))) 
                                                      >> 7U))))
                                            ? ((IData)(1U) 
                                               + (~ 
                                                  (0xffffU 
                                                   & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__a_temp) 
                                                      * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__b_temp)))))
                                            : (0xffffU 
                                               & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__a_temp) 
                                                  * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__b_temp))))) 
                                       << 0x10U)) | 
                         ((0xff00U & ((((1U & ((1U 
                                                & (VL_EXTENDS_II(8,4, 
                                                                 (0xfU 
                                                                  & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                     >> 8U))) 
                                                   >> 7U)) 
                                               ^ (1U 
                                                  & (VL_EXTENDS_II(8,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                       >> 8U))) 
                                                     >> 7U))))
                                         ? ((IData)(1U) 
                                            + (~ (0xffffU 
                                                  & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__a_temp) 
                                                     * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__b_temp)))))
                                         : (0xffffU 
                                            & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__a_temp) 
                                               * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__b_temp)))) 
                                       + ((1U & ((1U 
                                                  & (VL_EXTENDS_II(8,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                       >> 0xcU))) 
                                                     >> 7U)) 
                                                 ^ 
                                                 (1U 
                                                  & (VL_EXTENDS_II(8,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                       >> 0xcU))) 
                                                     >> 7U))))
                                           ? ((IData)(1U) 
                                              + (~ 
                                                 (0xffffU 
                                                  & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__a_temp) 
                                                     * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__b_temp)))))
                                           : (0xffffU 
                                              & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__a_temp) 
                                                 * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__b_temp))))) 
                                      << 8U)) | (0xffU 
                                                 & (((1U 
                                                      & ((1U 
                                                          & (VL_EXTENDS_II(8,4, 
                                                                           (0xfU 
                                                                            & vlSelf->neuron_wrapper__DOT__W_reg)) 
                                                             >> 7U)) 
                                                         ^ 
                                                         (1U 
                                                          & (VL_EXTENDS_II(8,4, 
                                                                           (0xfU 
                                                                            & vlSelf->neuron_wrapper__DOT__X_reg)) 
                                                             >> 7U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ 
                                                       (0xffffU 
                                                        & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__a_temp) 
                                                           * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__b_temp)))))
                                                      : 
                                                     (0xffffU 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__a_temp) 
                                                         * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__b_temp)))) 
                                                    + 
                                                    ((1U 
                                                      & ((1U 
                                                          & (VL_EXTENDS_II(8,4, 
                                                                           (0xfU 
                                                                            & (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                               >> 4U))) 
                                                             >> 7U)) 
                                                         ^ 
                                                         (1U 
                                                          & (VL_EXTENDS_II(8,4, 
                                                                           (0xfU 
                                                                            & (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                               >> 4U))) 
                                                             >> 7U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ 
                                                       (0xffffU 
                                                        & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__a_temp) 
                                                           * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__b_temp)))))
                                                      : 
                                                     (0xffffU 
                                                      & ((IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__a_temp) 
                                                         * (IData)(neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__b_temp)))))))));
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
    vlSelf->neuron_wrapper__DOT__W_reg = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__X_reg = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__neuron_out = VL_RAND_RESET_I(4);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__acc = VL_RAND_RESET_I(8);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage = VL_RAND_RESET_I(32);
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage = VL_RAND_RESET_I(16);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
}
