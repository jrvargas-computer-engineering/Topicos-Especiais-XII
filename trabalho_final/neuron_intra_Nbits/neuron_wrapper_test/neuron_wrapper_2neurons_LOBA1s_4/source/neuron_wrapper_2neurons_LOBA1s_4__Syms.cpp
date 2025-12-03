// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "neuron_wrapper_2neurons_LOBA1s_4__Syms.h"
#include "neuron_wrapper_2neurons_LOBA1s_4.h"
#include "sub___024root.h"
#include "sub_LOBA1s__N10.h"

// FUNCTIONS
neuron_wrapper_2neurons_LOBA1s_4__Syms::~neuron_wrapper_2neurons_LOBA1s_4__Syms()
{
}

neuron_wrapper_2neurons_LOBA1s_4__Syms::neuron_wrapper_2neurons_LOBA1s_4__Syms(VerilatedContext* contextp, const char* namep, neuron_wrapper_2neurons_LOBA1s_4* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_wrapper_2neurons.neuron0.u_neuron.mults[0].mult_i")}
    , TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_wrapper_2neurons.neuron0.u_neuron.mults[1].mult_i")}
    , TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_wrapper_2neurons.neuron0.u_neuron.mults[2].mult_i")}
    , TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_wrapper_2neurons.neuron0.u_neuron.mults[3].mult_i")}
    , TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_wrapper_2neurons.neuron1.u_neuron.mults[0].mult_i")}
    , TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_wrapper_2neurons.neuron1.u_neuron.mults[1].mult_i")}
    , TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_wrapper_2neurons.neuron1.u_neuron.mults[2].mult_i")}
    , TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_wrapper_2neurons.neuron1.u_neuron.mults[3].mult_i")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i = &TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i;
    TOP.__PVT__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i = &TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i;
    TOP.__PVT__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i = &TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i;
    TOP.__PVT__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i = &TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i;
    TOP.__PVT__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i = &TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i;
    TOP.__PVT__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i = &TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i;
    TOP.__PVT__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i = &TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i;
    TOP.__PVT__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i = &TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__Vconfigure(true);
    TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_wrapper_2neurons__DOT__neuron0__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__0__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__1__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__2__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_wrapper_2neurons__DOT__neuron1__DOT__u_neuron__DOT__mults__BRA__3__KET____DOT__mult_i.__Vconfigure(false);
}
