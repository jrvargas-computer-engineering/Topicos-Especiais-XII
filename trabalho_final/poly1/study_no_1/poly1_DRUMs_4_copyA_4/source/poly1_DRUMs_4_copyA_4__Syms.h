// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_POLY1_DRUMS_4_COPYA_4__SYMS_H_
#define VERILATED_POLY1_DRUMS_4_COPYA_4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "poly1_DRUMs_4_copyA_4.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"

// SYMS CLASS (contains all model state)
class poly1_DRUMs_4_copyA_4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    poly1_DRUMs_4_copyA_4* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;

    // CONSTRUCTORS
    poly1_DRUMs_4_copyA_4__Syms(VerilatedContext* contextp, const char* namep, poly1_DRUMs_4_copyA_4* modelp);
    ~poly1_DRUMs_4_copyA_4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
