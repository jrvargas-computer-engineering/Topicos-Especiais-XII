// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "neuron_wrapper_8neurons_DRUMs_5.h"
#include "neuron_wrapper_8neurons_DRUMs_5__Syms.h"

//============================================================
// Constructors

neuron_wrapper_8neurons_DRUMs_5::neuron_wrapper_8neurons_DRUMs_5(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new neuron_wrapper_8neurons_DRUMs_5__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , load_en{vlSymsp->TOP.load_en}
    , w_in_0{vlSymsp->TOP.w_in_0}
    , x_in_0{vlSymsp->TOP.x_in_0}
    , w_in_1{vlSymsp->TOP.w_in_1}
    , x_in_1{vlSymsp->TOP.x_in_1}
    , w_in_2{vlSymsp->TOP.w_in_2}
    , x_in_2{vlSymsp->TOP.x_in_2}
    , w_in_3{vlSymsp->TOP.w_in_3}
    , x_in_3{vlSymsp->TOP.x_in_3}
    , w_in_4{vlSymsp->TOP.w_in_4}
    , x_in_4{vlSymsp->TOP.x_in_4}
    , w_in_5{vlSymsp->TOP.w_in_5}
    , x_in_5{vlSymsp->TOP.x_in_5}
    , w_in_6{vlSymsp->TOP.w_in_6}
    , x_in_6{vlSymsp->TOP.x_in_6}
    , w_in_7{vlSymsp->TOP.w_in_7}
    , x_in_7{vlSymsp->TOP.x_in_7}
    , out_safe_0{vlSymsp->TOP.out_safe_0}
    , out_safe_1{vlSymsp->TOP.out_safe_1}
    , out_safe_2{vlSymsp->TOP.out_safe_2}
    , out_safe_3{vlSymsp->TOP.out_safe_3}
    , out_safe_4{vlSymsp->TOP.out_safe_4}
    , out_safe_5{vlSymsp->TOP.out_safe_5}
    , out_safe_6{vlSymsp->TOP.out_safe_6}
    , out_safe_7{vlSymsp->TOP.out_safe_7}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron0{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron0}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron1{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron1}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron2{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron2}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron3{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron3}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron4{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron4}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron5{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron5}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron6{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron6}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron7{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron7}
    , __PVT__neuron_wrapper_8neurons__DOT__neuron8{vlSymsp->TOP.__PVT__neuron_wrapper_8neurons__DOT__neuron8}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

neuron_wrapper_8neurons_DRUMs_5::neuron_wrapper_8neurons_DRUMs_5(const char* _vcname__)
    : neuron_wrapper_8neurons_DRUMs_5(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

neuron_wrapper_8neurons_DRUMs_5::~neuron_wrapper_8neurons_DRUMs_5() {
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

void neuron_wrapper_8neurons_DRUMs_5::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate neuron_wrapper_8neurons_DRUMs_5::eval_step\n"); );
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
bool neuron_wrapper_8neurons_DRUMs_5::eventsPending() { return false; }

uint64_t neuron_wrapper_8neurons_DRUMs_5::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* neuron_wrapper_8neurons_DRUMs_5::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void sub___024root___eval_final(sub___024root* vlSelf);

VL_ATTR_COLD void neuron_wrapper_8neurons_DRUMs_5::final() {
    sub___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* neuron_wrapper_8neurons_DRUMs_5::hierName() const { return vlSymsp->name(); }
const char* neuron_wrapper_8neurons_DRUMs_5::modelName() const { return "neuron_wrapper_8neurons_DRUMs_5"; }
unsigned neuron_wrapper_8neurons_DRUMs_5::threads() const { return 1; }
