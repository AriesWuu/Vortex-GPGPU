// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_PE_SWITCH__PI44_H_
#define VERILATED_VRTLSIM_SHIM_VX_PE_SWITCH__PI44_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_pe_switch__pi44 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(pe_sel,0,0);
    CData/*1:0*/ __PVT__pe_req_valid;
    CData/*1:0*/ __PVT__pe_req_ready;
    CData/*1:0*/ __PVT__pe_rsp_valid;
    CData/*1:0*/ __PVT__pe_rsp_ready;
    CData/*1:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*1:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
    CData/*1:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
    CData/*1:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask;
    CData/*1:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs;
    CData/*0:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    CData/*0:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    CData/*0:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    VlWide<20>/*613:0*/ __PVT__pe_rsp_data;
    VlWide<10>/*306:0*/ rsp_arb__DOT____Vxrand_hfda1d030__0;
    VlWide<10>/*307:0*/ rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    VlWide<10>/*307:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
    VlWide<10>/*307:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_pe_switch__pi44(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_pe_switch__pi44();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_pe_switch__pi44);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
