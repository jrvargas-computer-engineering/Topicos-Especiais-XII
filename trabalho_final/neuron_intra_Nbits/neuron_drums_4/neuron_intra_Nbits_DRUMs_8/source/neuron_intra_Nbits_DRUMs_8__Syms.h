// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_NEURON_INTRA_NBITS_DRUMS_8__SYMS_H_
#define VERILATED_NEURON_INTRA_NBITS_DRUMS_8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "neuron_intra_Nbits_DRUMs_8.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"

// SYMS CLASS (contains all model state)
class neuron_intra_Nbits_DRUMs_8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    neuron_intra_Nbits_DRUMs_8* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;

    // CONSTRUCTORS
    neuron_intra_Nbits_DRUMs_8__Syms(VerilatedContext* contextp, const char* namep, neuron_intra_Nbits_DRUMs_8* modelp);
    ~neuron_intra_Nbits_DRUMs_8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
