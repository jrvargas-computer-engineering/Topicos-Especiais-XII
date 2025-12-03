// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See neuron_wrapper_8neurons_DRUMs_8.h for the primary calling header

#ifndef VERILATED_SUB___024ROOT_H_
#define VERILATED_SUB___024ROOT_H_  // guard

#include "verilated.h"

class neuron_wrapper_8neurons_DRUMs_8__Syms;
class sub_neuron_wrapper;


class sub___024root final : public VerilatedModule {
  public:
    // CELLS
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron0;
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron1;
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron2;
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron3;
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron4;
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron5;
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron6;
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron7;
    sub_neuron_wrapper* __PVT__neuron_wrapper_8neurons__DOT__neuron8;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(load_en,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_IN(w_in_0,31,0);
    VL_IN(x_in_0,31,0);
    VL_IN(w_in_1,31,0);
    VL_IN(x_in_1,31,0);
    VL_IN(w_in_2,31,0);
    VL_IN(x_in_2,31,0);
    VL_IN(w_in_3,31,0);
    VL_IN(x_in_3,31,0);
    VL_IN(w_in_4,31,0);
    VL_IN(x_in_4,31,0);
    VL_IN(w_in_5,31,0);
    VL_IN(x_in_5,31,0);
    VL_IN(w_in_6,31,0);
    VL_IN(x_in_6,31,0);
    VL_IN(w_in_7,31,0);
    VL_IN(x_in_7,31,0);
    VL_OUT(out_safe_0,31,0);
    VL_OUT(out_safe_1,31,0);
    VL_OUT(out_safe_2,31,0);
    VL_OUT(out_safe_3,31,0);
    VL_OUT(out_safe_4,31,0);
    VL_OUT(out_safe_5,31,0);
    VL_OUT(out_safe_6,31,0);
    VL_OUT(out_safe_7,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    neuron_wrapper_8neurons_DRUMs_8__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub___024root(neuron_wrapper_8neurons_DRUMs_8__Syms* symsp, const char* name);
    ~sub___024root();
    VL_UNCOPYABLE(sub___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
