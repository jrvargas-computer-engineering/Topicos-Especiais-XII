// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See poly1_LOBA0s_6_copyA_3.h for the primary calling header

#ifndef VERILATED_SUB___024ROOT_H_
#define VERILATED_SUB___024ROOT_H_  // guard

#include "verilated.h"

class poly1_LOBA0s_6_copyA_3__Syms;

class sub___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(x,7,0);
    CData/*3:0*/ poly1__DOT__mult1__DOT__u1__DOT__k1a;
    CData/*3:0*/ poly1__DOT__mult1__DOT__u1__DOT__k1b;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(y,15,0);
    SData/*15:0*/ poly1__DOT__mult1__DOT__u1__DOT__u1__DOT__lobh;
    SData/*15:0*/ poly1__DOT__mult1__DOT__u1__DOT__u1__DOT__u1__DOT__w;
    SData/*15:0*/ poly1__DOT__mult1__DOT__u1__DOT__u2__DOT__lobh;
    SData/*15:0*/ poly1__DOT__mult1__DOT__u1__DOT__u2__DOT__u1__DOT__w;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    poly1_LOBA0s_6_copyA_3__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub___024root(poly1_LOBA0s_6_copyA_3__Syms* symsp, const char* name);
    ~sub___024root();
    VL_UNCOPYABLE(sub___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
