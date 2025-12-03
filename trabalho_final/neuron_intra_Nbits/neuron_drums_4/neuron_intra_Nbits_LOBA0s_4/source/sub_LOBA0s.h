// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See neuron_intra_Nbits_LOBA0s_4.h for the primary calling header

#ifndef VERILATED_SUB_LOBA0S_H_
#define VERILATED_SUB_LOBA0S_H_  // guard

#include "verilated.h"

class neuron_intra_Nbits_LOBA0s_4__Syms;

class sub_LOBA0s final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    VL_OUT(__PVT__r,31,0);

    // INTERNAL VARIABLES
    neuron_intra_Nbits_LOBA0s_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    sub_LOBA0s(neuron_intra_Nbits_LOBA0s_4__Syms* symsp, const char* name);
    ~sub_LOBA0s();
    VL_UNCOPYABLE(sub_LOBA0s);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
