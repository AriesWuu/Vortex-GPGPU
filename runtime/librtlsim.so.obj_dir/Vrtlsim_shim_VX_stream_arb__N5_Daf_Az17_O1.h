// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_STREAM_ARB__N5_DAF_AZ17_O1_H_
#define VERILATED_VRTLSIM_SHIM_VX_STREAM_ARB__N5_DAF_AZ17_O1_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_stream_arb__N5_Daf_Az17_O1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,4,0);
    VL_OUT8(ready_in,4,0);
    VL_OUT8(valid_out,0,0);
    VL_IN8(ready_out,0,0);
    VL_OUT8(__PVT__sel_out,2,0);
    CData/*4:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand_h8d96407a__0;
    CData/*4:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs;
    VlWide<6>/*174:0*/ __Vxrand_h409e3401__0;
    VL_INW(data_in,874,0,28);
    VL_OUTW(data_out,174,0,6);
    VlWide<6>/*178:0*/ g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in;
    VlWide<6>/*178:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    VlUnpacked<CData/*0:0*/, 15> __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
    VlUnpacked<CData/*2:0*/, 15> __PVT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
    VlUnpacked<CData/*0:0*/, 2> __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_stream_arb__N5_Daf_Az17_O1(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_stream_arb__N5_Daf_Az17_O1();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_stream_arb__N5_Daf_Az17_O1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
