// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_TCU_FEDP_BHF__LD_N2_H_
#define VERILATED_VRTLSIM_SHIM_VX_TCU_FEDP_BHF__LD_N2_H_  // guard

#include "verilated.h"
class Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2;
class Vrtlsim_shim_VX_tcu_bhf_fmul__pi83;
class Vrtlsim_shim_VX_tcu_bhf_fmul__pi84;


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2 final : public VerilatedModule {
  public:
    // CELLS
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi83* __PVT__g_prod__BRA__0__KET____DOT__fp16_mul;
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi84* __PVT__g_prod__BRA__0__KET____DOT__bf16_mul;
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi83* __PVT__g_prod__BRA__1__KET____DOT__fp16_mul;
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi84* __PVT__g_prod__BRA__1__KET____DOT__bf16_mul;
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi83* __PVT__g_prod__BRA__2__KET____DOT__fp16_mul;
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi84* __PVT__g_prod__BRA__2__KET____DOT__bf16_mul;
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi83* __PVT__g_prod__BRA__3__KET____DOT__fp16_mul;
    Vrtlsim_shim_VX_tcu_bhf_fmul__pi84* __PVT__g_prod__BRA__3__KET____DOT__bf16_mul;
    Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add;
    Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add;
    Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* __PVT__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(enable,0,0);
        VL_IN8(fmt_s,2,0);
        VL_IN8(fmt_d,2,0);
        SData/*8:0*/ __PVT__pipe_fmt_s__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        CData/*4:0*/ __PVT__final_add__DOT__s2_fflags;
        CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isInfB;
        CData/*0:0*/ __PVT__final_add__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__final_add__DOT__g_out_ieee__DOT__to_ieee__DOT__isInf;
        CData/*0:0*/ __PVT__final_add__DOT__g_out_ieee__DOT__to_ieee__DOT__isSubnormal;
        CData/*4:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__s2_fflags;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__pegMinNonzeroMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__pegMaxFiniteMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__notNaN_isInfOut;
        CData/*0:0*/ g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT____VdfgRegularize_h79c64222_0_9;
        CData/*4:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__s2_fflags;
        CData/*0:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA;
        CData/*0:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB;
        CData/*0:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__pegMinNonzeroMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__pegMaxFiniteMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__notNaN_isInfOut;
        CData/*0:0*/ g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT____VdfgRegularize_h79c64222_0_9;
        CData/*2:0*/ __VdfgRegularize_h87c494dc_0_0;
        CData/*2:0*/ __VdfgRegularize_h87c494dc_0_3;
        CData/*2:0*/ __VdfgRegularize_h87c494dc_0_6;
        CData/*2:0*/ __VdfgRegularize_h87c494dc_0_9;
        SData/*8:0*/ __PVT__conv_c__DOT__adjustedExp;
        SData/*8:0*/ __PVT__final_add__DOT__g_out_ieee__DOT__to_ieee__DOT__recFNToRawFN__DOT__exp;
        SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
        SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
        SData/*10:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__genblk2__DOT__sRoundedExp;
        SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
        SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
        SData/*10:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__genblk2__DOT__sRoundedExp;
        SData/*9:0*/ __VdfgRegularize_h87c494dc_0_2;
        SData/*9:0*/ __VdfgRegularize_h87c494dc_0_5;
        SData/*9:0*/ __VdfgRegularize_h87c494dc_0_8;
        SData/*9:0*/ __VdfgRegularize_h87c494dc_0_11;
        VL_IN64(a_row,63,0);
        VL_IN64(b_col,63,0);
        VL_IN(c_val,31,0);
        VL_OUT(d_val,31,0);
        IData/*22:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__common_fractOut;
        IData/*22:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__common_fractOut;
        IData/*23:0*/ __VdfgRegularize_h87c494dc_7_16;
        IData/*31:0*/ __VdfgRegularize_h87c494dc_8_3;
        IData/*23:0*/ __VdfgRegularize_h87c494dc_8_4;
        QData/*32:0*/ __Vxrand_h7c437464__3;
        QData/*32:0*/ __Vxrand_h7c437464__2;
        QData/*32:0*/ __Vxrand_h7c437464__1;
        QData/*32:0*/ __Vxrand_h7c437464__0;
        VlWide<11>/*329:0*/ __PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*44:0*/ final_add__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*89:0*/ __PVT__final_add__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*36:0*/ __PVT__final_add__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*39:0*/ g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*79:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*37:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*32:0*/ __PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
    };
    struct {
        QData/*32:0*/ __PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*39:0*/ g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*79:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*37:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*32:0*/ __PVT__g_prod__BRA__2__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*32:0*/ __PVT__g_prod__BRA__3__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        VlUnpacked<QData/*32:0*/, 4> __PVT__mult_result;
        VlUnpacked<VlUnpacked<QData/*32:0*/, 4>, 3> __PVT__red_in;
        VlUnpacked<CData/*0:0*/, 63> __PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*4:0*/, 63> __PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
    };

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
