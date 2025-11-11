// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_TCU_BHF_FADD__IC1_OC1_A2_H_
#define VERILATED_VRTLSIM_SHIM_VX_TCU_BHF_FADD__IC1_OC1_A2_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__enable,0,0);
    VL_IN8(__PVT__frm,2,0);
    VL_OUT8(__PVT__fflags,4,0);
    CData/*4:0*/ __PVT__s2_fflags;
    CData/*0:0*/ __PVT__rounding__DOT__isNaNOut;
    CData/*0:0*/ __PVT__rounding__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ __PVT__rounding__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ __PVT__rounding__DOT__notNaN_isInfOut;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_10;
    SData/*10:0*/ __PVT__rounding__DOT__genblk2__DOT__sRoundedExp;
    IData/*22:0*/ __PVT__rounding__DOT__common_fractOut;
    VL_IN64(__PVT__a,32,0);
    VL_IN64(__PVT__b,32,0);
    VL_OUT64(__PVT__y,32,0);
    QData/*44:0*/ __Vcellinp__pipe_add__data_in;
    VlWide<3>/*89:0*/ __PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    QData/*37:0*/ __PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
