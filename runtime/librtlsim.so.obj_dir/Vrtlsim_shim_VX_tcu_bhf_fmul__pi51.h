// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_TCU_BHF_FMUL__PI51_H_
#define VERILATED_VRTLSIM_SHIM_VX_TCU_BHF_FMUL__PI51_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_tcu_bhf_fmul__pi51 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__enable,0,0);
    VL_IN8(__PVT__frm,2,0);
    VL_OUT8(__PVT__fflags,4,0);
    CData/*4:0*/ __PVT__s2_fflags;
    CData/*0:0*/ __PVT__multiplier__DOT__isInfA;
    CData/*0:0*/ __PVT__multiplier__DOT__isInfB;
    CData/*0:0*/ __PVT__rounding__DOT__isNaNOut;
    CData/*0:0*/ __PVT__rounding__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ __PVT__rounding__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ __PVT__rounding__DOT__notNaN_isInfOut;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h6064379e_0_9;
    CData/*2:0*/ __VdfgRegularize_h786164b7_0_0;
    CData/*6:0*/ __VdfgRegularize_h786164b7_0_2;
    CData/*2:0*/ __VdfgRegularize_h786164b7_0_3;
    CData/*6:0*/ __VdfgRegularize_h786164b7_0_5;
    VL_IN16(__PVT__a,15,0);
    VL_IN16(__PVT__b,15,0);
    SData/*8:0*/ __PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
    SData/*8:0*/ __PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
    SData/*10:0*/ __PVT__rounding__DOT__genblk2__DOT__sRoundedExp;
    IData/*22:0*/ __PVT__rounding__DOT__common_fractOut;
    VL_OUT64(__PVT__y,32,0);
    QData/*33:0*/ __Vcellinp__pipe_add__data_in;
    VlWide<3>/*67:0*/ __PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    QData/*37:0*/ __PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    VlUnpacked<CData/*0:0*/, 15> __PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
    VlUnpacked<CData/*2:0*/, 15> __PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
    VlUnpacked<CData/*0:0*/, 15> __PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
    VlUnpacked<CData/*2:0*/, 15> __PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi51(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_tcu_bhf_fmul__pi51();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_tcu_bhf_fmul__pi51);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
