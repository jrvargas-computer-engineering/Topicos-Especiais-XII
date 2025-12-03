// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See neuron_intra_Nbits_LOBA0s_4.h for the primary calling header

#ifndef VERILATED_SUB___024ROOT_H_
#define VERILATED_SUB___024ROOT_H_  // guard

#include "verilated.h"

class neuron_intra_Nbits_LOBA0s_4__Syms;
class sub_LOBA0s__N8;
class sub_LOBA0s;


class sub___024root final : public VerilatedModule {
  public:
    // CELLS
    sub_LOBA0s__N8* __PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i;
    sub_LOBA0s* __PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1;
    sub_LOBA0s__N8* __PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i;
    sub_LOBA0s* __PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1;
    sub_LOBA0s__N8* __PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i;
    sub_LOBA0s* __PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1;
    sub_LOBA0s__N8* __PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i;
    sub_LOBA0s* __PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1;
    sub_LOBA0s__N8* __PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i;
    sub_LOBA0s* __PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1;
    sub_LOBA0s__N8* __PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i;
    sub_LOBA0s* __PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1;
    sub_LOBA0s__N8* __PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i;
    sub_LOBA0s* __PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1;
    sub_LOBA0s__N8* __PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i;
    sub_LOBA0s* __PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(Out,3,0);
    CData/*7:0*/ neuron_intra_Nbits__DOT__acc;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ neuron_intra_Nbits__DOT__ADDER_TREE__BRA__1__KET____DOT__sum_stage;
    VL_IN(W,31,0);
    VL_IN(X_N,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    neuron_intra_Nbits_LOBA0s_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub___024root(neuron_intra_Nbits_LOBA0s_4__Syms* symsp, const char* name);
    ~sub___024root();
    VL_UNCOPYABLE(sub___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
