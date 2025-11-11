// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_ELASTIC_BUFFER__D1D7_S2_O1_H_
#define VERILATED_VRTLSIM_SHIM_VX_ELASTIC_BUFFER__D1D7_S2_O1_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_elastic_buffer__D1d7_S2_O1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,0,0);
    VL_OUT8(ready_in,0,0);
    VL_IN8(ready_out,0,0);
    VL_OUT8(valid_out,0,0);
    CData/*0:0*/ __PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    CData/*0:0*/ __PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    CData/*0:0*/ __PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    VL_INW(data_in,470,0,15);
    VL_OUTW(data_out,470,0,15);
    VlWide<15>/*470:0*/ __PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
    VlWide<15>/*470:0*/ __PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_elastic_buffer__D1d7_S2_O1(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_elastic_buffer__D1d7_S2_O1();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_elastic_buffer__D1d7_S2_O1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
