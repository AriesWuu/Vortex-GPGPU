// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_TCU_FEDP_INT__L3_H_
#define VERILATED_VRTLSIM_SHIM_VX_TCU_FEDP_INT__L3_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_tcu_fedp_int__L3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(fmt_s,2,0);
    VL_IN8(fmt_d,2,0);
    CData/*2:0*/ __PVT__pipe_fmt_s__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    SData/*9:0*/ __PVT__g_prod__BRA__0__KET____DOT__prod_i4_1a;
    SData/*9:0*/ __PVT__g_prod__BRA__0__KET____DOT__prod_i4_1b;
    SData/*9:0*/ __PVT__g_prod__BRA__0__KET____DOT__prod_u4_1a;
    SData/*9:0*/ __PVT__g_prod__BRA__0__KET____DOT__prod_u4_1b;
    IData/*18:0*/ __Vxrand_h877b71b9__0;
    VL_IN(a_row,31,0);
    VL_IN(b_col,31,0);
    VL_IN(c_val,31,0);
    VL_OUT(d_val,31,0);
    IData/*16:0*/ __PVT__g_prod__BRA__0__KET____DOT__prod_i8_1a;
    IData/*16:0*/ __PVT__g_prod__BRA__0__KET____DOT__prod_i8_1b;
    IData/*16:0*/ __PVT__g_prod__BRA__0__KET____DOT__prod_u8_1a;
    IData/*16:0*/ __PVT__g_prod__BRA__0__KET____DOT__prod_u8_1b;
    QData/*63:0*/ __PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    IData/*31:0*/ __PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    IData/*18:0*/ __PVT__g_prod__BRA__0__KET____DOT__pipe_sel__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    VlUnpacked<IData/*18:0*/, 1> __PVT__mult_result;
    VlUnpacked<VlUnpacked<IData/*18:0*/, 1>, 1> __PVT__red_in;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_tcu_fedp_int__L3(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_tcu_fedp_int__L3();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_tcu_fedp_int__L3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
