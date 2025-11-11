// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_LSU_ADAPTER__PI18_H_
#define VERILATED_VRTLSIM_SHIM_VX_LSU_ADAPTER__PI18_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_lsu_adapter__pi18 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*7:0*/ __PVT__req_valid_out;
        CData/*0:0*/ __Vcellout__stream_unpack__ready_in;
        CData/*7:0*/ __PVT__rsp_valid_out;
        SData/*15:0*/ __PVT__rsp_tag_out;
        CData/*7:0*/ __PVT__rsp_ready_out;
        CData/*1:0*/ __Vcellout__stream_pack__tag_out;
        CData/*7:0*/ __Vcellout__stream_pack__mask_out;
        CData/*7:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r;
        CData/*7:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*7:0*/ __PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__higher_pri_regs;
        VlWide<18>/*559:0*/ __PVT__req_data_in;
        VlWide<8>/*255:0*/ __PVT__rsp_data_out;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
    };
    struct {
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlUnpacked<CData/*0:0*/, 15> __PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*2:0*/, 15> __PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
    };

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_lsu_adapter__pi18(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_lsu_adapter__pi18();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_lsu_adapter__pi18);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
