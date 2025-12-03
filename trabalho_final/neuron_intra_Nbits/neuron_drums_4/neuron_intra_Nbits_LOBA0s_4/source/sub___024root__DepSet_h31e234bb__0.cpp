// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_4.h for the primary calling header

#include "verilated.h"

#include "neuron_intra_Nbits_LOBA0s_4__Syms.h"
#include "sub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__ico(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval_triggers__ico(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        sub___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void sub___024root___ico_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage;
    // Body
    neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((((1U & ((1U & (VL_EXTENDS_II(8,4, (0xfU 
                                                & (vlSelf->W 
                                                   >> 0x18U))) 
                            >> 7U)) ^ (1U & (VL_EXTENDS_II(8,4, 
                                                           (0xfU 
                                                            & (vlSelf->X_N 
                                                               >> 0x18U))) 
                                             >> 7U))))
               ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i.__PVT__r_temp)))
               : (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i.__PVT__r_temp)) 
             + ((1U & ((1U & (VL_EXTENDS_II(8,4, (vlSelf->W 
                                                  >> 0x1cU)) 
                              >> 7U)) ^ (1U & (VL_EXTENDS_II(8,4, 
                                                             (vlSelf->X_N 
                                                              >> 0x1cU)) 
                                               >> 7U))))
                 ? ((IData)(1U) + (~ (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i.__PVT__r_temp)))
                 : (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i.__PVT__r_temp))) 
            << 0x18U) | ((0xff0000U & ((((1U & ((1U 
                                                 & (VL_EXTENDS_II(8,4, 
                                                                  (0xfU 
                                                                   & (vlSelf->W 
                                                                      >> 0x10U))) 
                                                    >> 7U)) 
                                                ^ (1U 
                                                   & (VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (vlSelf->X_N 
                                                                        >> 0x10U))) 
                                                      >> 7U))))
                                          ? ((IData)(1U) 
                                             + (~ (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i.__PVT__r_temp)))
                                          : (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i.__PVT__r_temp)) 
                                        + ((1U & ((1U 
                                                   & (VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (vlSelf->W 
                                                                        >> 0x14U))) 
                                                      >> 7U)) 
                                                  ^ 
                                                  (1U 
                                                   & (VL_EXTENDS_II(8,4, 
                                                                    (0xfU 
                                                                     & (vlSelf->X_N 
                                                                        >> 0x14U))) 
                                                      >> 7U))))
                                            ? ((IData)(1U) 
                                               + (~ (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i.__PVT__r_temp)))
                                            : (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i.__PVT__r_temp))) 
                                       << 0x10U)) | 
                         ((0xff00U & ((((1U & ((1U 
                                                & (VL_EXTENDS_II(8,4, 
                                                                 (0xfU 
                                                                  & (vlSelf->W 
                                                                     >> 8U))) 
                                                   >> 7U)) 
                                               ^ (1U 
                                                  & (VL_EXTENDS_II(8,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->X_N 
                                                                       >> 8U))) 
                                                     >> 7U))))
                                         ? ((IData)(1U) 
                                            + (~ (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp)))
                                         : (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp)) 
                                       + ((1U & ((1U 
                                                  & (VL_EXTENDS_II(8,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->W 
                                                                       >> 0xcU))) 
                                                     >> 7U)) 
                                                 ^ 
                                                 (1U 
                                                  & (VL_EXTENDS_II(8,4, 
                                                                   (0xfU 
                                                                    & (vlSelf->X_N 
                                                                       >> 0xcU))) 
                                                     >> 7U))))
                                           ? ((IData)(1U) 
                                              + (~ (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)))
                                           : (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))) 
                                      << 8U)) | (0xffU 
                                                 & (((1U 
                                                      & ((1U 
                                                          & (VL_EXTENDS_II(8,4, 
                                                                           (0xfU 
                                                                            & vlSelf->W)) 
                                                             >> 7U)) 
                                                         ^ 
                                                         (1U 
                                                          & (VL_EXTENDS_II(8,4, 
                                                                           (0xfU 
                                                                            & vlSelf->X_N)) 
                                                             >> 7U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp)))
                                                      : (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp)) 
                                                    + 
                                                    ((1U 
                                                      & ((1U 
                                                          & (VL_EXTENDS_II(8,4, 
                                                                           (0xfU 
                                                                            & (vlSelf->W 
                                                                               >> 4U))) 
                                                             >> 7U)) 
                                                         ^ 
                                                         (1U 
                                                          & (VL_EXTENDS_II(8,4, 
                                                                           (0xfU 
                                                                            & (vlSelf->X_N 
                                                                               >> 4U))) 
                                                             >> 7U))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp)))
                                                      : (IData)(vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp)))))));
    vlSelf->neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
        = ((0xff00U & (((neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                         >> 0x10U) + (neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                      >> 0x18U)) << 8U)) 
           | (0xffU & (neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                       + (neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                          >> 8U))));
}

void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf);
void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf);
void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf);
void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf);
void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf);
void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf);
void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf);
void sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__0(sub_LOBA0s__N8* vlSelf);

void sub___024root___eval_ico(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i));
        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i));
        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i));
        sub_LOBA0s__N8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i));
        sub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval_triggers__act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
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
