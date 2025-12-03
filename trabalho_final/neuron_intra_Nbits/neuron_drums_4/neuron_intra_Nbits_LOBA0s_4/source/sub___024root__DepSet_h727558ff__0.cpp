// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_4.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

void sub___024root___eval_act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_act\n"); );
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
void sub___024root___eval_ico(sub___024root* vlSelf);
void sub___024root___eval_triggers__act(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__nba(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_LOBA0s_4/rtl/neuron_intra_Nbits.v", 1, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_LOBA0s_4/rtl/neuron_intra_Nbits.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("neuron_drums_4/neuron_intra_Nbits_LOBA0s_4/rtl/neuron_intra_Nbits.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            sub___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
