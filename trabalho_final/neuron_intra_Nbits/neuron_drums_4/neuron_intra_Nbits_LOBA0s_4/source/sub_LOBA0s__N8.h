// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See neuron_intra_Nbits_LOBA0s_4.h for the primary calling header

#ifndef VERILATED_SUB_LOBA0S__N8_H_
#define VERILATED_SUB_LOBA0S__N8_H_  // guard

#include "verilated.h"

class neuron_intra_Nbits_LOBA0s_4__Syms;

class sub_LOBA0s__N8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    CData/*2:0*/ __PVT__u1__DOT__k1a;
    CData/*2:0*/ __PVT__u1__DOT__k1b;
    CData/*7:0*/ __PVT__u1__DOT__u1__DOT__lobh;
    CData/*7:0*/ __PVT__u1__DOT__u1__DOT__u1__DOT__w;
    CData/*7:0*/ __PVT__u1__DOT__u2__DOT__lobh;
    CData/*7:0*/ __PVT__u1__DOT__u2__DOT__u1__DOT__w;
    VL_OUT16(r,15,0);
    SData/*15:0*/ __PVT__r_temp;

    // INTERNAL VARIABLES
    neuron_intra_Nbits_LOBA0s_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_LOBA0s__N8(neuron_intra_Nbits_LOBA0s_4__Syms* symsp, const char* name);
    ~sub_LOBA0s__N8();
    VL_UNCOPYABLE(sub_LOBA0s__N8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
