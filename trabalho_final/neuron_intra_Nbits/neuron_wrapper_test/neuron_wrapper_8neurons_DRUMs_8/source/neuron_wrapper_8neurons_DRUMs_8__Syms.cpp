// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "neuron_wrapper_8neurons_DRUMs_8__Syms.h"
#include "neuron_wrapper_8neurons_DRUMs_8.h"
#include "sub___024root.h"
#include "sub_neuron_wrapper.h"

// FUNCTIONS
neuron_wrapper_8neurons_DRUMs_8__Syms::~neuron_wrapper_8neurons_DRUMs_8__Syms()
{
}

neuron_wrapper_8neurons_DRUMs_8__Syms::neuron_wrapper_8neurons_DRUMs_8__Syms(VerilatedContext* contextp, const char* namep, neuron_wrapper_8neurons_DRUMs_8* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__neuron_wrapper_8neurons__DOT__neuron0{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron0")}
    , TOP__neuron_wrapper_8neurons__DOT__neuron1{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron1")}
    , TOP__neuron_wrapper_8neurons__DOT__neuron2{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron2")}
    , TOP__neuron_wrapper_8neurons__DOT__neuron3{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron3")}
    , TOP__neuron_wrapper_8neurons__DOT__neuron4{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron4")}
    , TOP__neuron_wrapper_8neurons__DOT__neuron5{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron5")}
    , TOP__neuron_wrapper_8neurons__DOT__neuron6{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron6")}
    , TOP__neuron_wrapper_8neurons__DOT__neuron7{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron7")}
    , TOP__neuron_wrapper_8neurons__DOT__neuron8{this, Verilated::catName(namep, "neuron_wrapper_8neurons.neuron8")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron0 = &TOP__neuron_wrapper_8neurons__DOT__neuron0;
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron1 = &TOP__neuron_wrapper_8neurons__DOT__neuron1;
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron2 = &TOP__neuron_wrapper_8neurons__DOT__neuron2;
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron3 = &TOP__neuron_wrapper_8neurons__DOT__neuron3;
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron4 = &TOP__neuron_wrapper_8neurons__DOT__neuron4;
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron5 = &TOP__neuron_wrapper_8neurons__DOT__neuron5;
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron6 = &TOP__neuron_wrapper_8neurons__DOT__neuron6;
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron7 = &TOP__neuron_wrapper_8neurons__DOT__neuron7;
    TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron8 = &TOP__neuron_wrapper_8neurons__DOT__neuron8;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__neuron_wrapper_8neurons__DOT__neuron0.__Vconfigure(true);
    TOP__neuron_wrapper_8neurons__DOT__neuron1.__Vconfigure(false);
    TOP__neuron_wrapper_8neurons__DOT__neuron2.__Vconfigure(false);
    TOP__neuron_wrapper_8neurons__DOT__neuron3.__Vconfigure(false);
    TOP__neuron_wrapper_8neurons__DOT__neuron4.__Vconfigure(false);
    TOP__neuron_wrapper_8neurons__DOT__neuron5.__Vconfigure(false);
    TOP__neuron_wrapper_8neurons__DOT__neuron6.__Vconfigure(false);
    TOP__neuron_wrapper_8neurons__DOT__neuron7.__Vconfigure(false);
    TOP__neuron_wrapper_8neurons__DOT__neuron8.__Vconfigure(false);
}
