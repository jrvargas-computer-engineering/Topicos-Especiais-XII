// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See poly1_DRUMs_5_eta1_2.h for the primary calling header

#ifndef VERILATED_SUB___024ROOT_H_
#define VERILATED_SUB___024ROOT_H_  // guard

#include "verilated.h"

class poly1_DRUMs_5_eta1_2__Syms;

class sub___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(x,7,0);
    CData/*1:0*/ poly1__DOT__sum1__DOT__genblk1__DOT__SET_CMD;
    CData/*0:0*/ poly1__DOT__sum1__DOT____VdfgTmp_h99057765__0;
    CData/*0:0*/ poly1__DOT__sum1__DOT____VdfgTmp_h969f8589__0;
    CData/*1:0*/ __Vtrigrprev__TOP__poly1__DOT__sum1__DOT__genblk1__DOT__SET_CMD;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(y,15,0);
    SData/*15:0*/ poly1__DOT__mult1__DOT__U1__DOT__l1;
    SData/*15:0*/ poly1__DOT__mult1__DOT__U1__DOT__l2;
    SData/*15:0*/ poly1__DOT__mult1__DOT__U1__DOT__u1__DOT__w;
    SData/*15:0*/ poly1__DOT__mult1__DOT__U1__DOT__u2__DOT__w;
    IData/*31:0*/ poly1__DOT____Vcellout__mult1____pinNumber3;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    poly1_DRUMs_5_eta1_2__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub___024root(poly1_DRUMs_5_eta1_2__Syms* symsp, const char* name);
    ~sub___024root();
    VL_UNCOPYABLE(sub___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
