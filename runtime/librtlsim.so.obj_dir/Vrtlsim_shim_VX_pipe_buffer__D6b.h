// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_PIPE_BUFFER__D6B_H_
#define VERILATED_VRTLSIM_SHIM_VX_PIPE_BUFFER__D6B_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_pipe_buffer__D6b final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,0,0);
    VL_OUT8(ready_in,0,0);
    VL_IN8(ready_out,0,0);
    VL_OUT8(valid_out,0,0);
    VL_INW(data_in,106,0,4);
    VL_OUTW(data_out,106,0,4);
    VlWide<4>/*107:0*/ __Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in;
    VlWide<4>/*107:0*/ __PVT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    VlUnpacked<CData/*0:0*/, 2> __PVT__g_register__DOT__ready;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_pipe_buffer__D6b(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_pipe_buffer__D6b();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_pipe_buffer__D6b);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
