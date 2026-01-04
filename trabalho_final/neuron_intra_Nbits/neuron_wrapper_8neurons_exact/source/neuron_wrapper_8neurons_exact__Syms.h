// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_NEURON_WRAPPER_8NEURONS_EXACT__SYMS_H_
#define VERILATED_NEURON_WRAPPER_8NEURONS_EXACT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "neuron_wrapper_8neurons_exact.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"

// SYMS CLASS (contains all model state)
class neuron_wrapper_8neurons_exact__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    neuron_wrapper_8neurons_exact* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;

    // CONSTRUCTORS
    neuron_wrapper_8neurons_exact__Syms(VerilatedContext* contextp, const char* namep, neuron_wrapper_8neurons_exact* modelp);
    ~neuron_wrapper_8neurons_exact__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
