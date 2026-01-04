// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See neuron_wrapper_8neurons_DRUMs_6.h for the primary calling header

#include "verilated.h"

#include "neuron_wrapper_8neurons_DRUMs_6__Syms.h"
#include "sub_neuron_wrapper.h"

VL_INLINE_OPT void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__0(sub_neuron_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_DRUMs_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron6__0\n"); );
    // Init
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_hda1c8e3e__0;
    IData/*31:0*/ __VdfgTmp_hd178f696__0;
    IData/*31:0*/ __VdfgTmp_hfd1bd6cd__0;
    IData/*31:0*/ __VdfgTmp_h6bf8f47d__0;
    IData/*31:0*/ __VdfgTmp_h473dcb91__0;
    IData/*31:0*/ __VdfgTmp_he9e6caf7__0;
    IData/*31:0*/ __VdfgTmp_h765c7b9c__0;
    IData/*31:0*/ __VdfgTmp_h0eaf5fb2__0;
    IData/*31:0*/ __Vdly__W_reg;
    IData/*31:0*/ __Vdly__X_reg;
    // Body
    __Vdly__X_reg = vlSelf->__PVT__X_reg;
    __Vdly__W_reg = vlSelf->__PVT__W_reg;
    if (vlSymsp->TOP.rst) {
        __Vdly__X_reg = 0U;
        __Vdly__W_reg = 0U;
    } else if (vlSymsp->TOP.load_en) {
        __Vdly__X_reg = ((vlSelf->__PVT__X_reg << 8U) 
                         | (0xffU & vlSymsp->TOP.x_in_6));
        __Vdly__W_reg = ((vlSelf->__PVT__W_reg << 8U) 
                         | (0xffU & vlSymsp->TOP.w_in_6));
    }
    vlSelf->__PVT__X_reg = __Vdly__X_reg;
    vlSelf->__PVT__W_reg = __Vdly__W_reg;
    __VdfgTmp_hd178f696__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & vlSelf->__PVT__X_reg)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & vlSelf->__PVT__X_reg)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlSelf->__PVT__X_reg))));
    __VdfgTmp_h6bf8f47d__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (vlSelf->__PVT__X_reg 
                                                           >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__X_reg 
                                                                      >> 8U))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__X_reg 
                                                              >> 8U)))));
    __VdfgTmp_he9e6caf7__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (vlSelf->__PVT__X_reg 
                                                           >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__X_reg 
                                                                      >> 0x10U))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__X_reg 
                                                              >> 0x10U)))));
    __VdfgTmp_h0eaf5fb2__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (vlSelf->__PVT__X_reg 
                                                        >> 0x18U)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (vlSelf->__PVT__X_reg 
                                                                   >> 0x18U)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (vlSelf->__PVT__X_reg 
                                                           >> 0x18U))));
    __VdfgTmp_hda1c8e3e__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & vlSelf->__PVT__W_reg)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & vlSelf->__PVT__W_reg)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlSelf->__PVT__W_reg))));
    __VdfgTmp_hfd1bd6cd__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (vlSelf->__PVT__W_reg 
                                                           >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__W_reg 
                                                                      >> 8U))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__W_reg 
                                                              >> 8U)))));
    __VdfgTmp_h473dcb91__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (vlSelf->__PVT__W_reg 
                                                           >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__W_reg 
                                                                      >> 0x10U))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__W_reg 
                                                              >> 0x10U)))));
    __VdfgTmp_h765c7b9c__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (vlSelf->__PVT__W_reg 
                                                        >> 0x18U)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (vlSelf->__PVT__W_reg 
                                                                   >> 0x18U)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (vlSelf->__PVT__W_reg 
                                                           >> 0x18U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_hd178f696__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hd178f696__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hd178f696__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hd178f696__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hd178f696__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hd178f696__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hd178f696__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h6bf8f47d__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h6bf8f47d__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h6bf8f47d__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h6bf8f47d__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h6bf8f47d__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h6bf8f47d__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_he9e6caf7__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_he9e6caf7__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_he9e6caf7__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_he9e6caf7__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_he9e6caf7__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_he9e6caf7__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_he9e6caf7__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h0eaf5fb2__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h0eaf5fb2__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h0eaf5fb2__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h0eaf5fb2__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h0eaf5fb2__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h0eaf5fb2__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_hda1c8e3e__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hda1c8e3e__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hda1c8e3e__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hda1c8e3e__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hda1c8e3e__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hda1c8e3e__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_hfd1bd6cd__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hfd1bd6cd__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hfd1bd6cd__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hfd1bd6cd__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hfd1bd6cd__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hfd1bd6cd__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h473dcb91__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h473dcb91__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h473dcb91__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h473dcb91__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h473dcb91__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h473dcb91__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h473dcb91__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h765c7b9c__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h765c7b9c__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h765c7b9c__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h765c7b9c__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h765c7b9c__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h765c7b9c__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h765c7b9c__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h765c7b9c__0)));
    __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 0xbU));
    }
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp 
        = ((0xfffU & ((0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                 ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                             << 1U))
                                 : __VdfgTmp_hda1c8e3e__0)) 
                      * (0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                   ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                               << 1U))
                                   : __VdfgTmp_hd178f696__0)))) 
           << (0x1fU & (((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(5U)))
                          : 0U) + ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(5U)))
                                    : 0U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp 
        = ((0xfffU & ((0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                 ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                             << 1U))
                                 : __VdfgTmp_hfd1bd6cd__0)) 
                      * (0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                   ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                               << 1U))
                                   : __VdfgTmp_h6bf8f47d__0)))) 
           << (0x1fU & (((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(5U)))
                          : 0U) + ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(5U)))
                                    : 0U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp 
        = ((0xfffU & ((0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                 ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                             << 1U))
                                 : __VdfgTmp_h473dcb91__0)) 
                      * (0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                   ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                               << 1U))
                                   : __VdfgTmp_he9e6caf7__0)))) 
           << (0x1fU & (((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(5U)))
                          : 0U) + ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(5U)))
                                    : 0U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp 
        = ((0xfffU & ((0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                 ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                             << 1U))
                                 : __VdfgTmp_h765c7b9c__0)) 
                      * (0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                   ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                               << 1U))
                                   : __VdfgTmp_h0eaf5fb2__0)))) 
           << (0x1fU & (((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(5U)))
                          : 0U) + ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(5U)))
                                    : 0U))));
}

VL_INLINE_OPT void sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__0(sub_neuron_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    neuron_wrapper_8neurons_DRUMs_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        sub_neuron_wrapper___nba_sequent__TOP__neuron_wrapper_8neurons__DOT__neuron7__0\n"); );
    // Init
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m;
    CData/*3:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n;
    IData/*31:0*/ __VdfgTmp_hda1c8e3e__0;
    IData/*31:0*/ __VdfgTmp_hd178f696__0;
    IData/*31:0*/ __VdfgTmp_hfd1bd6cd__0;
    IData/*31:0*/ __VdfgTmp_h6bf8f47d__0;
    IData/*31:0*/ __VdfgTmp_h473dcb91__0;
    IData/*31:0*/ __VdfgTmp_he9e6caf7__0;
    IData/*31:0*/ __VdfgTmp_h765c7b9c__0;
    IData/*31:0*/ __VdfgTmp_h0eaf5fb2__0;
    IData/*31:0*/ __Vdly__W_reg;
    IData/*31:0*/ __Vdly__X_reg;
    // Body
    __Vdly__X_reg = vlSelf->__PVT__X_reg;
    __Vdly__W_reg = vlSelf->__PVT__W_reg;
    if (vlSymsp->TOP.rst) {
        __Vdly__X_reg = 0U;
        __Vdly__W_reg = 0U;
    } else if (vlSymsp->TOP.load_en) {
        __Vdly__X_reg = ((vlSelf->__PVT__X_reg << 8U) 
                         | (0xffU & vlSymsp->TOP.x_in_7));
        __Vdly__W_reg = ((vlSelf->__PVT__W_reg << 8U) 
                         | (0xffU & vlSymsp->TOP.w_in_7));
    }
    vlSelf->__PVT__X_reg = __Vdly__X_reg;
    vlSelf->__PVT__W_reg = __Vdly__W_reg;
    __VdfgTmp_hd178f696__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & vlSelf->__PVT__X_reg)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & vlSelf->__PVT__X_reg)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlSelf->__PVT__X_reg))));
    __VdfgTmp_h6bf8f47d__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (vlSelf->__PVT__X_reg 
                                                           >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__X_reg 
                                                                      >> 8U))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__X_reg 
                                                              >> 8U)))));
    __VdfgTmp_he9e6caf7__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (vlSelf->__PVT__X_reg 
                                                           >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__X_reg 
                                                                      >> 0x10U))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__X_reg 
                                                              >> 0x10U)))));
    __VdfgTmp_h0eaf5fb2__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (vlSelf->__PVT__X_reg 
                                                        >> 0x18U)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (vlSelf->__PVT__X_reg 
                                                                   >> 0x18U)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (vlSelf->__PVT__X_reg 
                                                           >> 0x18U))));
    __VdfgTmp_hda1c8e3e__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & vlSelf->__PVT__W_reg)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & vlSelf->__PVT__W_reg)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & vlSelf->__PVT__W_reg))));
    __VdfgTmp_hfd1bd6cd__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (vlSelf->__PVT__W_reg 
                                                           >> 8U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__W_reg 
                                                                      >> 8U))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__W_reg 
                                                              >> 8U)))));
    __VdfgTmp_h473dcb91__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (0xffU 
                                                        & (vlSelf->__PVT__W_reg 
                                                           >> 0x10U))))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (0xffU 
                                                                   & (vlSelf->__PVT__W_reg 
                                                                      >> 0x10U))))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__W_reg 
                                                              >> 0x10U)))));
    __VdfgTmp_h765c7b9c__0 = ((0x8000U & VL_EXTENDS_II(16,8, 
                                                       (vlSelf->__PVT__W_reg 
                                                        >> 0x18U)))
                               ? ((IData)(1U) + (~ 
                                                 (0xffffU 
                                                  & VL_EXTENDS_II(16,8, 
                                                                  (vlSelf->__PVT__W_reg 
                                                                   >> 0x18U)))))
                               : (0xffffU & VL_EXTENDS_II(16,8, 
                                                          (vlSelf->__PVT__W_reg 
                                                           >> 0x18U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_hd178f696__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hd178f696__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hd178f696__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_hd178f696__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_hd178f696__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_hd178f696__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_hd178f696__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_hd178f696__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_hd178f696__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h6bf8f47d__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h6bf8f47d__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h6bf8f47d__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h6bf8f47d__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h6bf8f47d__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h6bf8f47d__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h6bf8f47d__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h6bf8f47d__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_he9e6caf7__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_he9e6caf7__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_he9e6caf7__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_he9e6caf7__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_he9e6caf7__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_he9e6caf7__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_he9e6caf7__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_he9e6caf7__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_he9e6caf7__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x8000U & __VdfgTmp_h0eaf5fb2__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h0eaf5fb2__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                          >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x800U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x400U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x200U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x100U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x80U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x40U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x20U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((0x10U & __VdfgTmp_h0eaf5fb2__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                        >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((8U & __VdfgTmp_h0eaf5fb2__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((4U & __VdfgTmp_h0eaf5fb2__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | (((2U & __VdfgTmp_h0eaf5fb2__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w)) 
           | ((1U & __VdfgTmp_h0eaf5fb2__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w) 
                     >> 1U) & __VdfgTmp_h0eaf5fb2__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_hda1c8e3e__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hda1c8e3e__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hda1c8e3e__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hda1c8e3e__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hda1c8e3e__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hda1c8e3e__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hda1c8e3e__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hda1c8e3e__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_hfd1bd6cd__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_hfd1bd6cd__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_hfd1bd6cd__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_hfd1bd6cd__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_hfd1bd6cd__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_hfd1bd6cd__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_hfd1bd6cd__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_hfd1bd6cd__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h473dcb91__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h473dcb91__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h473dcb91__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h473dcb91__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h473dcb91__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h473dcb91__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h473dcb91__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h473dcb91__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h473dcb91__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x8000U & __VdfgTmp_h765c7b9c__0));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0x7fffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x8000U & __VdfgTmp_h765c7b9c__0) ? 0U
                : 1U) << 0xfU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x4000U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xfU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xbfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | ((IData)((((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 0xfU) & (__VdfgTmp_h765c7b9c__0 
                                    >> 0xeU))) << 0xeU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x2000U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xeU))) << 0xdU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xdfffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x2000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x1000U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xdU))) << 0xcU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xefffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x1000U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                          >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x800U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xcU))) << 0xbU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x800U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x400U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xbU))) << 0xaU));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfbffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x400U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x200U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 0xaU))) << 9U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfdffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x200U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x100U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 9U))) << 8U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfeffU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x100U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x80U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 8U))) << 7U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xff7fU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x80U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x40U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 7U))) << 6U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffbfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x40U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x20U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 6U))) << 5U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffdfU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x20U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((0x10U & __VdfgTmp_h765c7b9c__0) ? 0U
                : (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                         >> 5U))) << 4U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xffefU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (0x10U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                        >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((8U & __VdfgTmp_h765c7b9c__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 4U))) << 3U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfff7U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (8U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((4U & __VdfgTmp_h765c7b9c__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 3U))) << 2U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffbU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (4U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | (((2U & __VdfgTmp_h765c7b9c__0) ? 0U : 
               (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                      >> 2U))) << 1U));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffdU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (2U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h765c7b9c__0)));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w)) 
           | ((1U & __VdfgTmp_h765c7b9c__0) ? 0U : 
              (1U & ((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1 
        = ((0xfffeU & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1)) 
           | (1U & (((IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w) 
                     >> 1U) & __VdfgTmp_h765c7b9c__0)));
    __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    if ((0x8000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xfU;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xeU;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xdU;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xcU;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xbU;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0xaU;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 9U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 8U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 7U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 6U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 5U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 4U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 3U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 2U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1 = 0U;
    }
    __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_hd178f696__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h6bf8f47d__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_he9e6caf7__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m 
            = (0xfU & (__VdfgTmp_h0eaf5fb2__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hda1c8e3e__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_hfd1bd6cd__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h473dcb91__0 >> 0xbU));
    }
    __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n = 0U;
    if ((6U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 2U));
    }
    if ((7U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 3U));
    }
    if ((8U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 4U));
    }
    if ((9U == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 5U));
    }
    if ((0xaU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 6U));
    }
    if ((0xbU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 7U));
    }
    if ((0xcU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 8U));
    }
    if ((0xdU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 9U));
    }
    if ((0xeU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 0xaU));
    }
    if ((0xfU == (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))) {
        __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n 
            = (0xfU & (__VdfgTmp_h765c7b9c__0 >> 0xbU));
    }
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp 
        = ((0xfffU & ((0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                 ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                             << 1U))
                                 : __VdfgTmp_hda1c8e3e__0)) 
                      * (0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                   ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                               << 1U))
                                   : __VdfgTmp_hd178f696__0)))) 
           << (0x1fU & (((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(5U)))
                          : 0U) + ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(5U)))
                                    : 0U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp 
        = ((0xfffU & ((0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                 ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                             << 1U))
                                 : __VdfgTmp_hfd1bd6cd__0)) 
                      * (0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                   ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                               << 1U))
                                   : __VdfgTmp_h6bf8f47d__0)))) 
           << (0x1fU & (((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(5U)))
                          : 0U) + ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(5U)))
                                    : 0U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp 
        = ((0xfffU & ((0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                 ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                             << 1U))
                                 : __VdfgTmp_h473dcb91__0)) 
                      * (0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                   ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                               << 1U))
                                   : __VdfgTmp_he9e6caf7__0)))) 
           << (0x1fU & (((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(5U)))
                          : 0U) + ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(5U)))
                                    : 0U))));
    vlSelf->__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp 
        = ((0xfffU & ((0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                                 ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__n) 
                                             << 1U))
                                 : __VdfgTmp_h765c7b9c__0)) 
                      * (0x3fU & ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                   ? (0x21U | ((IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__m) 
                                               << 1U))
                                   : __VdfgTmp_h0eaf5fb2__0)))) 
           << (0x1fU & (((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1))
                          ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k1) 
                                     - (IData)(5U)))
                          : 0U) + ((5U < (IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2))
                                    ? (0xfU & ((IData)(__PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__k2) 
                                               - (IData)(5U)))
                                    : 0U))));
}
