// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "neuron_intra_Nbits_LOBA0s_8__Syms.h"
#include "neuron_intra_Nbits_LOBA0s_8.h"
#include "sub___024root.h"
#include "sub_LOBA0s__N10_K8.h"
#include "sub_LOBA0s__K8.h"

// FUNCTIONS
neuron_intra_Nbits_LOBA0s_8__Syms::~neuron_intra_Nbits_LOBA0s_8__Syms()
{
}

neuron_intra_Nbits_LOBA0s_8__Syms::neuron_intra_Nbits_LOBA0s_8__Syms(VerilatedContext* contextp, const char* namep, neuron_intra_Nbits_LOBA0s_8* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[0].mult1")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[0].mult_i")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[1].mult1")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[1].mult_i")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[2].mult1")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[2].mult_i")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[3].mult1")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[3].mult_i")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[4].mult1")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[4].mult_i")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[5].mult1")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[5].mult_i")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[6].mult1")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[6].mult_i")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[7].mult1")}
    , TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i{this, Verilated::catName(namep, "neuron_intra_Nbits.mults[7].mult_i")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1 = &TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i = &TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1 = &TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i = &TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1 = &TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i = &TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1 = &TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i = &TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1 = &TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i = &TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1 = &TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i = &TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1 = &TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i = &TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1 = &TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1;
    TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i = &TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1.__Vconfigure(true);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i.__Vconfigure(true);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1.__Vconfigure(false);
    TOP__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i.__Vconfigure(false);
}
