// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_des.h for the primary calling header

#ifndef VERILATED_VF1_DES___024ROOT_H_
#define VERILATED_VF1_DES___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_des__Syms;

class Vf1_des___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ f1_des__DOT__tick;
    CData/*7:0*/ f1_des__DOT__f1__DOT__current_state;
    CData/*7:0*/ f1_des__DOT__f1__DOT__next_state;
    CData/*7:0*/ f1_des__DOT__f1__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(N,15,0);
    SData/*15:0*/ f1_des__DOT__clocktick__DOT__count;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_des__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_des___024root(Vf1_des__Syms* symsp, const char* name);
    ~Vf1_des___024root();
    VL_UNCOPYABLE(Vf1_des___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
