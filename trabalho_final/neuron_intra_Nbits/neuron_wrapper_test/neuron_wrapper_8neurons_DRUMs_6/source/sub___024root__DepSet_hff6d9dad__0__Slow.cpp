// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_DRUMs_6.h for the primary calling header

#include "verilated.h"

#include "neuron_wrapper_8neurons_DRUMs_6__Syms.h"
#include "sub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__stl(sub___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void sub___024root___eval_triggers__stl(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_DRUMs_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        sub___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf);
VL_ATTR_COLD void sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0(sub_neuron_wrapper* vlSelf);

VL_ATTR_COLD void sub___024root___eval_stl(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_DRUMs_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        sub___024root___nba_sequent__TOP__0(vlSelf);
        sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron0));
        sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron1));
        sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron2));
        sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron3));
        sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron4));
        sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron5));
        sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron6));
        sub_neuron_wrapper___stl_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron0__0((&vlSymsp->TOP__neuron_wrapper_8neurons__DOT__neuron7));
    }
}
