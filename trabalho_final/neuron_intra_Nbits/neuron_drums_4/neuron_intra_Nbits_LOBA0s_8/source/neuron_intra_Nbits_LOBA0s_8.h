// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_NEURON_INTRA_NBITS_LOBA0S_8_H_
#define VERILATED_NEURON_INTRA_NBITS_LOBA0S_8_H_  // guard

#include "verilated.h"

class neuron_intra_Nbits_LOBA0s_8__Syms;
class sub___024root;
class sub_LOBA0s__N10_K8;
class sub_LOBA0s__K8;


// This class is the main interface to the Verilated model
class neuron_intra_Nbits_LOBA0s_8 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    neuron_intra_Nbits_LOBA0s_8__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&en,0,0);
    VL_OUT8(&Out,7,0);
    VL_IN64(&W,63,0);
    VL_IN64(&X_N,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    sub_LOBA0s__N10_K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult_i;
    sub_LOBA0s__K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__0__KET____DOT__mult1;
    sub_LOBA0s__N10_K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult_i;
    sub_LOBA0s__K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__1__KET____DOT__mult1;
    sub_LOBA0s__N10_K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult_i;
    sub_LOBA0s__K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__2__KET____DOT__mult1;
    sub_LOBA0s__N10_K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult_i;
    sub_LOBA0s__K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__3__KET____DOT__mult1;
    sub_LOBA0s__N10_K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult_i;
    sub_LOBA0s__K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__4__KET____DOT__mult1;
    sub_LOBA0s__N10_K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult_i;
    sub_LOBA0s__K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__5__KET____DOT__mult1;
    sub_LOBA0s__N10_K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult_i;
    sub_LOBA0s__K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__6__KET____DOT__mult1;
    sub_LOBA0s__N10_K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult_i;
    sub_LOBA0s__K8* const __PVT__neuron_intra_Nbits__DOT__mults__BRA__7__KET____DOT__mult1;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    sub___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit neuron_intra_Nbits_LOBA0s_8(VerilatedContext* contextp, const char* name = "TOP");
    explicit neuron_intra_Nbits_LOBA0s_8(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~neuron_intra_Nbits_LOBA0s_8();
  private:
    VL_UNCOPYABLE(neuron_intra_Nbits_LOBA0s_8);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
