// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_NEURON_INTRA_NBITS_LOBA0S_4__SYMS_H_
#define VERILATED_NEURON_INTRA_NBITS_LOBA0S_4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "neuron_intra_Nbits_LOBA0s_4.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"
#include "sub_LOBA0s.h"
#include "sub_LOBA0s__N8.h"

// SYMS CLASS (contains all model state)
class neuron_intra_Nbits_LOBA0s_4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    neuron_intra_Nbits_LOBA0s_4* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;
    sub_LOBA0s                     TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1;
    sub_LOBA0s__N8                 TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i;
    sub_LOBA0s                     TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1;
    sub_LOBA0s__N8                 TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i;
    sub_LOBA0s                     TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1;
    sub_LOBA0s__N8                 TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i;
    sub_LOBA0s                     TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1;
    sub_LOBA0s__N8                 TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i;
    sub_LOBA0s                     TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1;
    sub_LOBA0s__N8                 TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i;
    sub_LOBA0s                     TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1;
    sub_LOBA0s__N8                 TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i;
    sub_LOBA0s                     TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1;
    sub_LOBA0s__N8                 TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i;
    sub_LOBA0s                     TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1;
    sub_LOBA0s__N8                 TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i;

    // CONSTRUCTORS
    neuron_intra_Nbits_LOBA0s_4__Syms(VerilatedContext* contextp, const char* namep, neuron_intra_Nbits_LOBA0s_4* modelp);
    ~neuron_intra_Nbits_LOBA0s_4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
