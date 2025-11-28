// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_POLY1_LOBA0S_4_ETA1_3__SYMS_H_
#define VERILATED_POLY1_LOBA0S_4_ETA1_3__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "poly1_LOBA0s_4_eta1_3.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"

// SYMS CLASS (contains all model state)
class poly1_LOBA0s_4_eta1_3__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    poly1_LOBA0s_4_eta1_3* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;

    // CONSTRUCTORS
    poly1_LOBA0s_4_eta1_3__Syms(VerilatedContext* contextp, const char* namep, poly1_LOBA0s_4_eta1_3* modelp);
    ~poly1_LOBA0s_4_eta1_3__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
