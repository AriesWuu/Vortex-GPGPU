// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_STREAM_XBAR__PI48_H_
#define VERILATED_VRTLSIM_SHIM_VX_STREAM_XBAR__PI48_H_  // guard

#include "verilated.h"
class Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3;


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_stream_xbar__pi48 final : public VerilatedModule {
  public:
    // CELLS
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb;
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb;
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb;
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb;
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb;
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb;
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb;
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,7,0);
    VL_IN(sel_in,23,0);
    VL_OUT8(ready_in,7,0);
    VL_OUT8(valid_out,7,0);
    VL_OUT(sel_out,23,0);
    VL_IN8(ready_out,7,0);
    CData/*7:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_in;
    CData/*7:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_in;
    CData/*7:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_in;
    CData/*7:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_in;
    CData/*7:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__valid_in;
    CData/*7:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__valid_in;
    CData/*7:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__valid_in;
    CData/*7:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__valid_in;
    VL_INW(data_in,383,0,12);
    VL_OUTW(data_out,383,0,12);
    VL_OUT64(__PVT__collisions,43,0);

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_stream_xbar__pi48(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_stream_xbar__pi48();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_stream_xbar__pi48);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
