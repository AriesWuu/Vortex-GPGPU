// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_STREAM_ARB__N4_D69_AZ207_O3_H_
#define VERILATED_VRTLSIM_SHIM_VX_STREAM_ARB__N4_D69_AZ207_O3_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,3,0);
    VL_OUT8(ready_in,3,0);
    VL_OUT8(valid_out,0,0);
    VL_IN8(ready_out,0,0);
    VL_OUT8(sel_out,1,0);
    CData/*1:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arb_index;
    CData/*3:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*1:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_index_r;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__is_hit;
    CData/*3:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    VlWide<4>/*104:0*/ __Vxrand_hd6bb386b__0;
    VL_INW(data_in,419,0,14);
    VL_OUTW(data_out,104,0,4);
    VlWide<4>/*106:0*/ __Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    VlWide<4>/*106:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
    VlWide<4>/*106:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
    VlUnpacked<CData/*0:0*/, 7> __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
    VlUnpacked<CData/*1:0*/, 7> __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_cyclic__DOT__cyclic_arbiter__DOT__g_arbiter__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_stream_arb__N4_D69_Az207_O3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
