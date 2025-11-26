// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_POLY1_DRUMS_6_COPYA_2__SYMS_H_
#define VERILATED_POLY1_DRUMS_6_COPYA_2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "poly1_DRUMs_6_copyA_2.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"

// SYMS CLASS (contains all model state)
class poly1_DRUMs_6_copyA_2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    poly1_DRUMs_6_copyA_2* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;

    // CONSTRUCTORS
    poly1_DRUMs_6_copyA_2__Syms(VerilatedContext* contextp, const char* namep, poly1_DRUMs_6_copyA_2* modelp);
    ~poly1_DRUMs_6_copyA_2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
