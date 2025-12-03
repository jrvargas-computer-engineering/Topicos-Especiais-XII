// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_NEURON_WRAPPER_8NEURONS_DRUMS_4__SYMS_H_
#define VERILATED_NEURON_WRAPPER_8NEURONS_DRUMS_4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "neuron_wrapper_8neurons_DRUMs_4.h"

// INCLUDE MODULE CLASSES
#include "sub___024root.h"
#include "sub_neuron_wrapper.h"

// SYMS CLASS (contains all model state)
class neuron_wrapper_8neurons_DRUMs_4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    neuron_wrapper_8neurons_DRUMs_4* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    sub___024root                  TOP;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron0;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron1;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron2;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron3;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron4;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron5;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron6;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron7;
    sub_neuron_wrapper             TOP__neuron_wrapper_8neurons__DOT__neuron8;

    // CONSTRUCTORS
    neuron_wrapper_8neurons_DRUMs_4__Syms(VerilatedContext* contextp, const char* namep, neuron_wrapper_8neurons_DRUMs_4* modelp);
    ~neuron_wrapper_8neurons_DRUMs_4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
