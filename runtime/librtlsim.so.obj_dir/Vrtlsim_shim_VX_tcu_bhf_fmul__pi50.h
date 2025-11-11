// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_TCU_BHF_FMUL__PI50_H_
#define VERILATED_VRTLSIM_SHIM_VX_TCU_BHF_FMUL__PI50_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_tcu_bhf_fmul__pi50 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__enable,0,0);
    VL_IN8(__PVT__frm,2,0);
    VL_OUT8(__PVT__fflags,4,0);
    CData/*0:0*/ __PVT__multiplier__DOT__isInfA;
    CData/*0:0*/ __PVT__multiplier__DOT__isInfB;
    CData/*5:0*/ __PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
    CData/*5:0*/ __PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
    CData/*0:0*/ __PVT__rounding__DOT__isNaNOut;
    CData/*2:0*/ __VdfgRegularize_h36ee862e_0_0;
    CData/*2:0*/ __VdfgRegularize_h36ee862e_0_3;
    VL_IN16(__PVT__a,15,0);
    VL_IN16(__PVT__b,15,0);
    SData/*9:0*/ __VdfgRegularize_h36ee862e_0_2;
    SData/*9:0*/ __VdfgRegularize_h36ee862e_0_5;
    IData/*22:0*/ __PVT__rounding__DOT__common_fractOut;
    VL_OUT64(__PVT__y,32,0);
    QData/*36:0*/ __Vcellinp__pipe_add__data_in;
    VlWide<3>/*73:0*/ __PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    QData/*37:0*/ __PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    VlWide<3>/*73:0*/ __Vdly__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    VlUnpacked<CData/*0:0*/, 31> __PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
    VlUnpacked<CData/*3:0*/, 31> __PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
    VlUnpacked<CData/*0:0*/, 31> __PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
    VlUnpacked<CData/*3:0*/, 31> __PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi50(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_tcu_bhf_fmul__pi50();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_tcu_bhf_fmul__pi50);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
