// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See neuron_wrapper_8neurons_LOBA1s_4.h for the primary calling header

#ifndef VERILATED_SUB_LOBA1S__N10_H_
#define VERILATED_SUB_LOBA1S__N10_H_  // guard

#include "verilated.h"

class neuron_wrapper_8neurons_LOBA1s_4__Syms;

class sub_LOBA1s__N10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__u1__DOT__k1a;
    CData/*3:0*/ __PVT__u1__DOT__k1b;
    CData/*3:0*/ __PVT__u1__DOT__k2b;
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    SData/*15:0*/ __PVT__u1__DOT__u1__DOT__lobh;
    SData/*15:0*/ __PVT__u1__DOT__u1__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u1__DOT__u2__DOT__lobh;
    SData/*15:0*/ __PVT__u1__DOT__u2__DOT__lobl;
    SData/*15:0*/ __PVT__u1__DOT__u2__DOT__lower;
    SData/*15:0*/ __PVT__u1__DOT__u2__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u1__DOT__u2__DOT__u2__DOT__w;
    VL_OUT(r,31,0);
    IData/*31:0*/ __PVT__r_temp;

    // INTERNAL VARIABLES
    neuron_wrapper_8neurons_LOBA1s_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_LOBA1s__N10(neuron_wrapper_8neurons_LOBA1s_4__Syms* symsp, const char* name);
    ~sub_LOBA1s__N10();
    VL_UNCOPYABLE(sub_LOBA1s__N10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
