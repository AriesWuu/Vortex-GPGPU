// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_ELASTIC_BUFFER__D6F_S4_O1_H_
#define VERILATED_VRTLSIM_SHIM_VX_ELASTIC_BUFFER__D6F_S4_O1_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_elastic_buffer__D6f_S4_O1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,0,0);
    VL_OUT8(ready_in,0,0);
    VL_IN8(ready_out,0,0);
    VL_OUT8(valid_out,0,0);
    CData/*0:0*/ __PVT__g_ebN__DOT__push;
    CData/*0:0*/ __PVT__g_ebN__DOT__pop;
    CData/*1:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    CData/*1:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r;
    CData/*0:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r;
    CData/*0:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r;
    CData/*1:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    VL_INW(data_in,110,0,4);
    VL_OUTW(data_out,110,0,4);
    VlWide<4>/*110:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r;
    VlUnpacked<VlWide<4>/*110:0*/, 4> __PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_elastic_buffer__D6f_S4_O1(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_elastic_buffer__D6f_S4_O1();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_elastic_buffer__D6f_S4_O1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
