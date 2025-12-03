// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_NEURON_WRAPPER_2NEURONS_LOBA1S_4__SYMS_H_
#define VERILATED_NEURON_WRAPPER_2NEURONS_LOBA1S_4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "neuron_wrapper_2neurons_LOBA1s_4.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"
#include "sub_LOBA1s__N10.h"

// SYMS CLASS (contains all model state)
class neuron_wrapper_2neurons_LOBA1s_4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    neuron_wrapper_2neurons_LOBA1s_4* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;
    sub_LOBA1s__N10                TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i;
    sub_LOBA1s__N10                TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i;
    sub_LOBA1s__N10                TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i;
    sub_LOBA1s__N10                TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i;
    sub_LOBA1s__N10                TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i;
    sub_LOBA1s__N10                TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i;
    sub_LOBA1s__N10                TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i;
    sub_LOBA1s__N10                TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i;

    // CONSTRUCTORS
    neuron_wrapper_2neurons_LOBA1s_4__Syms(VerilatedContext* contextp, const char* namep, neuron_wrapper_2neurons_LOBA1s_4* modelp);
    ~neuron_wrapper_2neurons_LOBA1s_4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
