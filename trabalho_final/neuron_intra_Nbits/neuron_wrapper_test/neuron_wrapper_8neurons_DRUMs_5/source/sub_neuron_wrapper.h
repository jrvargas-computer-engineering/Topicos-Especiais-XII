// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See neuron_wrapper_8neurons_DRUMs_5.h for the primary calling header

#ifndef VERILATED_SUB_NEURON_WRAPPER_H_
#define VERILATED_SUB_NEURON_WRAPPER_H_  // guard

#include "verilated.h"

class neuron_wrapper_8neurons_DRUMs_5__Syms;

class sub_neuron_wrapper final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(load_en,0,0);
    CData/*7:0*/ __PVT__neuron_out;
    SData/*15:0*/ __PVT__u_neuron__DOT__acc;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l1;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__l2;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l1;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__l2;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l1;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__l2;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l1;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__l2;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__U1__DOT__u2__DOT__w;
    VL_IN(w_in,31,0);
    VL_IN(x_in,31,0);
    VL_OUT(out_safe,31,0);
    IData/*31:0*/ __PVT__W_reg;
    IData/*31:0*/ __PVT__X_reg;
    IData/*31:0*/ __PVT__u_neuron__DOT__ADDER_TREE__BRA__0__KET____DOT__sum_stage;
    IData/*31:0*/ __PVT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i__DOT__r_temp;
    IData/*31:0*/ __PVT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i__DOT__r_temp;
    IData/*31:0*/ __PVT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i__DOT__r_temp;
    IData/*31:0*/ __PVT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i__DOT__r_temp;

    // INTERNAL VARIABLES
    neuron_wrapper_8neurons_DRUMs_5__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_neuron_wrapper(neuron_wrapper_8neurons_DRUMs_5__Syms* symsp, const char* name);
    ~sub_neuron_wrapper();
    VL_UNCOPYABLE(sub_neuron_wrapper);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
