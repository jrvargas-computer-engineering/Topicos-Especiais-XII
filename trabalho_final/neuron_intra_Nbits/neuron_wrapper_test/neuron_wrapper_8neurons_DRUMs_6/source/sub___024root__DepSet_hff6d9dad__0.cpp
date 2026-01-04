// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_DRUMs_6.h for the primary calling header

#include "verilated.h"

#include "neuron_wrapper_8neurons_DRUMs_6__Syms.h"
#include "sub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval_triggers__act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_DRUMs_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        sub___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_DRUMs_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->out_safe_0 = (((- (IData)((1U & ((IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0.__PVT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0.__PVT__neuron_out));
    vlSelf->out_safe_1 = (((- (IData)((1U & ((IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1.__PVT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1.__PVT__neuron_out));
    vlSelf->out_safe_2 = (((- (IData)((1U & ((IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2.__PVT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2.__PVT__neuron_out));
    vlSelf->out_safe_3 = (((- (IData)((1U & ((IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3.__PVT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3.__PVT__neuron_out));
    vlSelf->out_safe_4 = (((- (IData)((1U & ((IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4.__PVT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4.__PVT__neuron_out));
    vlSelf->out_safe_5 = (((- (IData)((1U & ((IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5.__PVT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5.__PVT__neuron_out));
    vlSelf->out_safe_6 = (((- (IData)((1U & ((IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6.__PVT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6.__PVT__neuron_out));
    vlSelf->out_safe_7 = (((- (IData)((1U & ((IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7.__PVT__neuron_out) 
                                             >> 7U)))) 
                           << 8U) | (IData)(vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7.__PVT__neuron_out));
}

void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__0(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__0(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__0(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__0(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__0(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__0(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__0(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1(sub_neuron_wrapper* vlSelf);
void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2(sub_neuron_wrapper* vlSelf);

void sub___024root___eval_nba(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_DRUMs_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron1__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron2__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron3__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron4__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron5__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7));
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__1((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7));
        sub___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6));
        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__2((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7));
    }
}
