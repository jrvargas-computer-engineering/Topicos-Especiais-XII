// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See neuron_intra_Nbits_LOBA0s_8.h for the primary calling header

#ifndef VERILATED_SUB_LOBA0S__N10_K8_H_
#define VERILATED_SUB_LOBA0S__N10_K8_H_  // guard

#include "verilated.h"

class neuron_intra_Nbits_LOBA0s_8__Syms;

class sub_LOBA0s__N10_K8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__u1__DOT__k1a;
    CData/*3:0*/ __PVT__u1__DOT__k1b;
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    SData/*15:0*/ __PVT__u1__DOT__u1__DOT__lobh;
    SData/*15:0*/ __PVT__u1__DOT__u1__DOT__u1__DOT__w;
    SData/*15:0*/ __PVT__u1__DOT__u2__DOT__lobh;
    SData/*15:0*/ __PVT__u1__DOT__u2__DOT__u1__DOT__w;
    VL_OUT(r,31,0);
    IData/*31:0*/ __PVT__r_temp;

    // INTERNAL VARIABLES
    neuron_intra_Nbits_LOBA0s_8__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_LOBA0s__N10_K8(neuron_intra_Nbits_LOBA0s_8__Syms* symsp, const char* name);
    ~sub_LOBA0s__N10_K8();
    VL_UNCOPYABLE(sub_LOBA0s__N10_K8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
