// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "neuron_intra_Nbits_LOBA0s_8.h"
#include "neuron_intra_Nbits_LOBA0s_8__Syms.h"

//============================================================
// Constructors

neuron_intra_Nbits_LOBA0s_8::neuron_intra_Nbits_LOBA0s_8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new neuron_intra_Nbits_LOBA0s_8__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , Out{vlSymsp->TOP.Out}
    , W{vlSymsp->TOP.W}
    , X_N{vlSymsp->TOP.X_N}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i}
    , __PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1{vlSymsp->TOP.__PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

neuron_intra_Nbits_LOBA0s_8::neuron_intra_Nbits_LOBA0s_8(const char* _vcname__)
    : neuron_intra_Nbits_LOBA0s_8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

neuron_intra_Nbits_LOBA0s_8::~neuron_intra_Nbits_LOBA0s_8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void sub___024root___eval_debug_assertions(sub___024root* vlSelf);
#endif  // VL_DEBUG
void sub___024root___eval_static(sub___024root* vlSelf);
void sub___024root___eval_initial(sub___024root* vlSelf);
void sub___024root___eval_settle(sub___024root* vlSelf);
void sub___024root___eval(sub___024root* vlSelf);

void neuron_intra_Nbits_LOBA0s_8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate neuron_intra_Nbits_LOBA0s_8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    sub___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        sub___024root___eval_static(&(vlSymsp->TOP));
        sub___024root___eval_initial(&(vlSymsp->TOP));
        sub___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    sub___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

//============================================================
// Events and timing
bool neuron_intra_Nbits_LOBA0s_8::eventsPending() { return false; }

uint64_t neuron_intra_Nbits_LOBA0s_8::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* neuron_intra_Nbits_LOBA0s_8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void sub___024root___eval_final(sub___024root* vlSelf);

VL_ATTR_COLD void neuron_intra_Nbits_LOBA0s_8::final() {
    sub___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* neuron_intra_Nbits_LOBA0s_8::hierName() const { return vlSymsp->name(); }
const char* neuron_intra_Nbits_LOBA0s_8::modelName() const { return "neuron_intra_Nbits_LOBA0s_8"; }
unsigned neuron_intra_Nbits_LOBA0s_8::threads() const { return 1; }
