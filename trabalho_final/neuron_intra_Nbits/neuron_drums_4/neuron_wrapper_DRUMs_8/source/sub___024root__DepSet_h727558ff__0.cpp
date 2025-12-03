// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_DRUMs_8.h for the primary calling header

#include "verilated.h"

#include "sub___024root.h"

void sub___024root___eval_act(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_act\n"); );
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__0(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__0\n"); );
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
    IData/*31:0*/ __Vdly__neuron_wrapper__DOT__W_reg;
    IData/*31:0*/ __Vdly__neuron_wrapper__DOT__X_reg;
    // Body
    __Vdly__neuron_wrapper__DOT__X_reg = vlSelf->neuron_wrapper__DOT__X_reg;
    __Vdly__neuron_wrapper__DOT__W_reg = vlSelf->neuron_wrapper__DOT__W_reg;
    if (vlSelf->rst) {
        __Vdly__neuron_wrapper__DOT__X_reg = 0U;
        __Vdly__neuron_wrapper__DOT__W_reg = 0U;
    } else if (vlSelf->load_en) {
        __Vdly__neuron_wrapper__DOT__X_reg = ((vlSelf->neuron_wrapper__DOT__X_reg 
                                               << 4U) 
                                              | (0xfU 
                                                 & vlSelf->x_in));
        __Vdly__neuron_wrapper__DOT__W_reg = ((vlSelf->neuron_wrapper__DOT__W_reg 
                                               << 4U) 
                                              | (0xfU 
                                                 & vlSelf->w_in));
    }
    vlSelf->neuron_wrapper__DOT__X_reg = __Vdly__neuron_wrapper__DOT__X_reg;
    vlSelf->neuron_wrapper__DOT__W_reg = __Vdly__neuron_wrapper__DOT__W_reg;
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & vlSelf->neuron_wrapper__DOT__X_reg)))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & vlSelf->neuron_wrapper__DOT__X_reg)))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & vlSelf->neuron_wrapper__DOT__X_reg)))));
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
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__b_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (vlSelf->neuron_wrapper__DOT__X_reg 
                                                 >> 0x1cU)))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (vlSelf->neuron_wrapper__DOT__X_reg 
                                                                 >> 0x1cU)))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (vlSelf->neuron_wrapper__DOT__X_reg 
                                               >> 0x1cU)))));
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (0xfU 
                                                 & vlSelf->neuron_wrapper__DOT__W_reg)))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (0xfU 
                                                                 & vlSelf->neuron_wrapper__DOT__W_reg)))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (0xfU 
                                               & vlSelf->neuron_wrapper__DOT__W_reg)))));
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
    neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__a_temp 
        = (0xffU & ((0x80U & VL_EXTENDS_II(8,4, (vlSelf->neuron_wrapper__DOT__W_reg 
                                                 >> 0x1cU)))
                     ? ((IData)(1U) + (~ (0xffU & VL_EXTENDS_II(8,4, 
                                                                (vlSelf->neuron_wrapper__DOT__W_reg 
                                                                 >> 0x1cU)))))
                     : (0xffU & VL_EXTENDS_II(8,4, 
                                              (vlSelf->neuron_wrapper__DOT__W_reg 
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
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__1(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->neuron_wrapper__DOT__neuron_out = 0U;
        vlSelf->neuron_wrapper__DOT__u_neuron__DOT__acc = 0U;
    } else if (vlSelf->en) {
        vlSelf->neuron_wrapper__DOT__neuron_out = (
                                                   VL_LTS_III(8, 7U, (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__acc))
                                                    ? 7U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__acc)));
        vlSelf->neuron_wrapper__DOT__u_neuron__DOT__acc 
            = (0xffU & ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage) 
                        + ((IData)(vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage) 
                           >> 8U)));
    }
    vlSelf->out_safe = (((- (IData)((1U & ((IData)(vlSelf->neuron_wrapper__DOT__neuron_out) 
                                           >> 3U)))) 
                         << 4U) | (IData)(vlSelf->neuron_wrapper__DOT__neuron_out));
}

VL_INLINE_OPT void sub___024root___nba_sequent__TOP__2(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage 
        = ((0xff00U & (((vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                         >> 0x10U) + (vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                                      >> 0x18U)) << 8U)) 
           | (0xffU & (vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                       + (vlSelf->neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage 
                          >> 8U))));
}

void sub___024root___eval_nba(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    sub___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        sub___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        sub___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        sub___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void sub___024root___eval_triggers__act(sub___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__act(sub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void sub___024root___dump_triggers__nba(sub___024root* vlSelf);
#endif  // VL_DEBUG

void sub___024root___eval(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                    VL_FATAL_MT("neuron_drums_4/neuron_wrapper_DRUMs_8/rtl/neuron_wrapper.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("neuron_drums_4/neuron_wrapper_DRUMs_8/rtl/neuron_wrapper.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            sub___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_DRUMs_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
