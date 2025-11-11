// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_IPDOM_STACK__W22_D3_H_
#define VERILATED_VRTLSIM_SHIM_VX_IPDOM_STACK__W22_D3_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_ipdom_stack__W22_D3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(wid,2,0);
    VL_IN8(rd_ptr,1,0);
    VL_IN8(push,0,0);
    VL_IN8(pop,0,0);
    VL_OUT8(q_idx,0,0);
    VL_OUT16(wr_ptr,15,0);
    VL_OUT8(__PVT__empty,0,0);
    VL_OUT8(__PVT__full,0,0);
    CData/*4:0*/ __PVT__waddr;
    CData/*0:0*/ __Vcellinp__ipdom_store__write;
    CData/*1:0*/ __PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__0__KET____DOT__empty_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__0__KET____DOT__full_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__0__KET____DOT__push_s;
    CData/*0:0*/ __PVT__g_addressing__BRA__0__KET____DOT__pop_s;
    CData/*1:0*/ __PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__1__KET____DOT__empty_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__1__KET____DOT__full_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__1__KET____DOT__push_s;
    CData/*0:0*/ __PVT__g_addressing__BRA__1__KET____DOT__pop_s;
    CData/*1:0*/ __PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__2__KET____DOT__empty_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__2__KET____DOT__full_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__2__KET____DOT__push_s;
    CData/*0:0*/ __PVT__g_addressing__BRA__2__KET____DOT__pop_s;
    CData/*1:0*/ __PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__3__KET____DOT__empty_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__3__KET____DOT__full_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__3__KET____DOT__push_s;
    CData/*0:0*/ __PVT__g_addressing__BRA__3__KET____DOT__pop_s;
    CData/*1:0*/ __PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__4__KET____DOT__empty_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__4__KET____DOT__full_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__4__KET____DOT__push_s;
    CData/*0:0*/ __PVT__g_addressing__BRA__4__KET____DOT__pop_s;
    CData/*1:0*/ __PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__5__KET____DOT__empty_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__5__KET____DOT__full_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__5__KET____DOT__push_s;
    CData/*0:0*/ __PVT__g_addressing__BRA__5__KET____DOT__pop_s;
    CData/*1:0*/ __PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__6__KET____DOT__empty_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__6__KET____DOT__full_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__6__KET____DOT__push_s;
    CData/*0:0*/ __PVT__g_addressing__BRA__6__KET____DOT__pop_s;
    CData/*1:0*/ __PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__7__KET____DOT__empty_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__7__KET____DOT__full_r;
    CData/*0:0*/ __PVT__g_addressing__BRA__7__KET____DOT__push_s;
    CData/*0:0*/ __PVT__g_addressing__BRA__7__KET____DOT__pop_s;
    CData/*4:0*/ __PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr;
    CData/*0:0*/ __PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write;
    VlWide<3>/*68:0*/ __Vcellout__ipdom_store__rdata;
    VlWide<3>/*68:0*/ ipdom_store__DOT____Vxrand_h91116ad2__1;
    VlWide<3>/*68:0*/ ipdom_store__DOT____Vxrand_h91116ad2__0;
    VlWide<3>/*68:0*/ __PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data;
    VlWide<3>/*68:0*/ ipdom_store__DOT____Vlvbound_hf546616b__0;
    VL_IN64(d0,33,0);
    VL_IN64(d1,33,0);
    VL_OUT64(q_val,33,0);
    VlUnpacked<VlWide<3>/*68:0*/, 24> __PVT__ipdom_store__DOT__ram;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_ipdom_stack__W22_D3(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_ipdom_stack__W22_D3();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_ipdom_stack__W22_D3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
