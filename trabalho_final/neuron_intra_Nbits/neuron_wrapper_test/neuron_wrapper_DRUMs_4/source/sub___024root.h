// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See neuron_wrapper_DRUMs_4.h for the primary calling header

#ifndef VERILATED_SUB___024ROOT_H_
#define VERILATED_SUB___024ROOT_H_  // guard

#include "verilated.h"

class neuron_wrapper_DRUMs_4__Syms;

class sub___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(load_en,0,0);
    CData/*3:0*/ neuron_wrapper__DOT__neuron_out;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__acc;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l1;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__l2;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__4__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l1;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__l2;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__5__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l1;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__l2;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__6__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l1;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__l2;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    CData/*7:0*/ neuron_wrapper__DOT__u_neuron__DOT__mults__BRA__7__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage;
    VL_IN(w_in,31,0);
    VL_IN(x_in,31,0);
    VL_OUT(out_safe,31,0);
    IData/*31:0*/ neuron_wrapper__DOT__W_reg;
    IData/*31:0*/ neuron_wrapper__DOT__X_reg;
    IData/*31:0*/ neuron_wrapper__DOT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    neuron_wrapper_DRUMs_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub___024root(neuron_wrapper_DRUMs_4__Syms* symsp, const char* name);
    ~sub___024root();
    VL_UNCOPYABLE(sub___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
