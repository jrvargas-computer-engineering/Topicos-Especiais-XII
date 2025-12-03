// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_2neurons_LOBA1s_8.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

void sub___024root___eval_act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_2neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_act\n"); );
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_2neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__W_reg;
    IData/*31:0*/ __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__X_reg;
    IData/*31:0*/ __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__W_reg;
    IData/*31:0*/ __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__X_reg;
    // Body
    __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__W_reg 
        = vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__W_reg;
    __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__W_reg 
        = vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__W_reg;
    __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__X_reg 
        = vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__X_reg;
    __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__X_reg 
        = vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__X_reg;
    if (vlSelf->rst) {
        __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__W_reg = 0U;
        __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__W_reg = 0U;
        __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__X_reg = 0U;
        __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__X_reg = 0U;
    } else if (vlSelf->load_en) {
        __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__W_reg 
            = ((vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__W_reg 
                << 8U) | (0xffU & vlSelf->w_in_1));
        __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__W_reg 
            = ((vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__W_reg 
                << 8U) | (0xffU & vlSelf->w_in_0));
        __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__X_reg 
            = ((vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__X_reg 
                << 8U) | (0xffU & vlSelf->x_in_1));
        __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__X_reg 
            = ((vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__X_reg 
                << 8U) | (0xffU & vlSelf->x_in_0));
    }
    vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__W_reg 
        = __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__W_reg;
    vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__W_reg 
        = __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__W_reg;
    vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__X_reg 
        = __Vdly__neuron_wrapper_2neurons__DOT__neuron1__DOT__X_reg;
    vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__X_reg 
        = __Vdly__neuron_wrapper_2neurons__DOT__neuron0__DOT__X_reg;
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__1(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_2neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__neuron_out = 0U;
        vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__neuron_out = 0U;
        vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__acc = 0U;
        vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__acc = 0U;
    } else if (vlSelf->en) {
        vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__neuron_out 
            = (VL_LTS_III(16, 0x7fU, (IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__acc))
                ? 0x7fU : (VL_GTS_III(16, 0xff80U, (IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__acc))
                            ? 0x80U : (0xffU & (IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__acc))));
        vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__neuron_out 
            = (VL_LTS_III(16, 0x7fU, (IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__acc))
                ? 0x7fU : (VL_GTS_III(16, 0xff80U, (IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__acc))
                            ? 0x80U : (0xffU & (IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__acc))));
        vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__acc 
            = (0xffffU & (vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                          + (vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                             >> 0x10U)));
        vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__acc 
            = (0xffffU & (vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                          + (vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                             >> 0x10U)));
    }
    vlSelf->out_safe_1 = (((- (IData)((1U & ((IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron1__DOT__neuron_out));
    vlSelf->out_safe_0 = (((- (IData)((1U & ((IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSelf->neuron_wrapper_2neurons__DOT__neuron0__DOT__neuron_out));
}

void sub___024root___eval_triggers__act(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__nba(sub___024root* vlSelf);
#endif  // VL_DEBUG
void sub___024root___eval_nba(sub___024root* vlSelf);

void sub___024root___eval(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_2neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
                    VL_FATAL_MT("neuron_wrapper_test/neuron_wrapper_2neurons_LOBA1s_8/rtl/neuron_wrapper_2neurons.v", 5, "", "Active region did not converge.");
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
                VL_FATAL_MT("neuron_wrapper_test/neuron_wrapper_2neurons_LOBA1s_8/rtl/neuron_wrapper_2neurons.v", 5, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            sub___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_2neurons_LOBA1s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->load_en & 0xfeU))) {
        Verilated::overWidthError("load_en");}
}
#endif  // VL_DEBUG
