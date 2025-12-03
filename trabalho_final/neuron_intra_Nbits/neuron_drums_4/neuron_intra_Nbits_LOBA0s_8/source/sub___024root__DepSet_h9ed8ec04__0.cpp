// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_intra_Nbits_LOBA0s_8.h for the primary calling header

#include "verilated.h"

#include "neuron_intra_Nbits_LOBA0s_8__Syms.h"
#include "sub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__ico(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval_triggers__ico(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___ico_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage;
    // Body
    neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
        = (((QData)((IData)((0xffffU & (((1U & ((1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x30U)))) 
                                                    >> 0xfU)) 
                                                ^ (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->X_N 
                                                                                >> 0x30U)))) 
                                                      >> 0xfU))))
                                          ? ((IData)(1U) 
                                             + (~ vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i.__PVT__r_temp))
                                          : vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i.__PVT__r_temp) 
                                        + ((1U & ((1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->W 
                                                                                >> 0x38U)))) 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->X_N 
                                                                                >> 0x38U)))) 
                                                      >> 0xfU))))
                                            ? ((IData)(1U) 
                                               + (~ vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i.__PVT__r_temp))
                                            : vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i.__PVT__r_temp))))) 
            << 0x30U) | (((QData)((IData)((((((1U & 
                                               ((1U 
                                                 & (VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->W 
                                                                              >> 0x20U)))) 
                                                    >> 0xfU)) 
                                                ^ (1U 
                                                   & (VL_EXTENDS_II(16,8, 
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->X_N 
                                                                                >> 0x20U)))) 
                                                      >> 0xfU))))
                                               ? ((IData)(1U) 
                                                  + 
                                                  (~ vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i.__PVT__r_temp))
                                               : vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i.__PVT__r_temp) 
                                             + ((1U 
                                                 & ((1U 
                                                     & (VL_EXTENDS_II(16,8, 
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->W 
                                                                                >> 0x28U)))) 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    (1U 
                                                     & (VL_EXTENDS_II(16,8, 
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->X_N 
                                                                                >> 0x28U)))) 
                                                        >> 0xfU))))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i.__PVT__r_temp))
                                                 : vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i.__PVT__r_temp)) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & (((1U 
                                                   & ((1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->W 
                                                                                >> 0x10U)))) 
                                                          >> 0xfU)) 
                                                      ^ 
                                                      (1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->X_N 
                                                                                >> 0x10U)))) 
                                                          >> 0xfU))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp))
                                                   : vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i.__PVT__r_temp) 
                                                 + 
                                                 ((1U 
                                                   & ((1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->W 
                                                                                >> 0x18U)))) 
                                                          >> 0xfU)) 
                                                      ^ 
                                                      (1U 
                                                       & (VL_EXTENDS_II(16,8, 
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->X_N 
                                                                                >> 0x18U)))) 
                                                          >> 0xfU))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp))
                                                   : vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i.__PVT__r_temp)))))) 
                          << 0x10U) | (QData)((IData)(
                                                      (0xffffU 
                                                       & (((1U 
                                                            & ((1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->W))) 
                                                                   >> 0xfU)) 
                                                               ^ 
                                                               (1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->X_N))) 
                                                                   >> 0xfU))))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp))
                                                            : vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i.__PVT__r_temp) 
                                                          + 
                                                          ((1U 
                                                            & ((1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->W 
                                                                                >> 8U)))) 
                                                                   >> 0xfU)) 
                                                               ^ 
                                                               (1U 
                                                                & (VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->X_N 
                                                                                >> 8U)))) 
                                                                   >> 0xfU))))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + 
                                                            (~ vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp))
                                                            : vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i.__PVT__r_temp)))))));
    vlSelf->neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
        = ((((IData)((neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                      >> 0x20U)) + (IData)((neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                            >> 0x30U))) 
            << 0x10U) | (0xffffU & ((IData)(neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage) 
                                    + (IData)((neuron_intra_Nbits__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                               >> 0x10U)))));
}

void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf);
void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf);
void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf);
void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf);
void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf);
void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf);
void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf);
void sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__0(sub_LOBA0s__N10_K8* vlSelf);

void sub___024root___eval_ico(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i));
        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i));
        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i));
        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i));
        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i));
        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i));
        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i));
        sub_LOBA0s__N10_K8___ico_sequent__TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i__0((&vlSymsp->TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i));
        sub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval_triggers__act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_intra_Nbits_LOBA0s_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
