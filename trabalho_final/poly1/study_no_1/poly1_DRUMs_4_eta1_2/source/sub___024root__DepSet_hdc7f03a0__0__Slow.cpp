// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See poly1_DRUMs_4_eta1_2.h for the primary calling header

#include "verilated.h"

#include "poly1_DRUMs_4_eta1_2__Syms.h"
#include "sub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__stl(sub___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void sub___024root___eval_triggers__stl(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    poly1_DRUMs_4_eta1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->poly1__DOT__sum1__DOT__genblk1__DOT__SET_CMD) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__poly1__DOT__sum1__DOT__genblk1__DOT__SET_CMD));
    vlSelf->__Vtrigrprev__TOP__poly1__DOT__sum1__DOT__genblk1__DOT__SET_CMD 
        = vlSelf->poly1__DOT__sum1__DOT__genblk1__DOT__SET_CMD;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        sub___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
