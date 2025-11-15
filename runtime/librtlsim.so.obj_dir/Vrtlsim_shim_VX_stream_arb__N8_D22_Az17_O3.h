// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_STREAM_ARB__N8_D22_AZ17_O3_H_
#define VERILATED_VRTLSIM_SHIM_VX_STREAM_ARB__N8_D22_AZ17_O3_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,7,0);
    VL_OUT8(ready_in,7,0);
    VL_OUT8(valid_out,0,0);
    VL_IN8(ready_out,0,0);
    VL_OUT8(__PVT__sel_out,2,0);
    CData/*7:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*7:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    QData/*33:0*/ __Vxrand_h7c43bcce__0;
    VL_INW(data_in,271,0,9);
    VL_OUT64(data_out,33,0);
    QData/*36:0*/ __Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    QData/*36:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
    QData/*36:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
    VlUnpacked<CData/*0:0*/, 15> __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
    VlUnpacked<CData/*2:0*/, 15> __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
