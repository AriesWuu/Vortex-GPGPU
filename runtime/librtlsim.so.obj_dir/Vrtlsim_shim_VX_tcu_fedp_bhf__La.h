// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_TCU_FEDP_BHF__LA_H_
#define VERILATED_VRTLSIM_SHIM_VX_TCU_FEDP_BHF__LA_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_tcu_fedp_bhf__La final : public VerilatedModule {
  public:

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
        CData/*0:0*/ __PVT__final_add__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__final_add__DOT__g_out_ieee__DOT__to_ieee__DOT__isInf;
        CData/*0:0*/ __PVT__final_add__DOT__g_out_ieee__DOT__to_ieee__DOT__isSubnormal;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__multiplier__DOT__isInfA;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__multiplier__DOT__isInfB;
        CData/*5:0*/ __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
        CData/*5:0*/ __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__s1_sign;
        CData/*4:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__s2_fflags;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__multiplier__DOT__isInfA;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__multiplier__DOT__isInfB;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__rounding__DOT__pegMinNonzeroMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__rounding__DOT__pegMaxFiniteMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__rounding__DOT__notNaN_isInfOut;
        CData/*0:0*/ g_prod__BRA__0__KET____DOT__bf16_mul__DOT__rounding__DOT____VdfgRegularize_h8b7da927_0_9;
        CData/*4:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__s2_fflags;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__pegMinNonzeroMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__pegMaxFiniteMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__notNaN_isInfOut;
        CData/*0:0*/ g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT____VdfgRegularize_h5fd51a52_0_9;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__multiplier__DOT__isInfA;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__multiplier__DOT__isInfB;
        CData/*5:0*/ __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
        CData/*5:0*/ __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__s1_sign;
        CData/*4:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__s2_fflags;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__multiplier__DOT__isInfA;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__multiplier__DOT__isInfB;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__rounding__DOT__pegMinNonzeroMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__rounding__DOT__pegMaxFiniteMagOut;
        CData/*0:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__rounding__DOT__notNaN_isInfOut;
        CData/*0:0*/ g_prod__BRA__1__KET____DOT__bf16_mul__DOT__rounding__DOT____VdfgRegularize_h8b7da927_0_9;
        CData/*4:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__s2_fflags;
        CData/*0:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__rounding__DOT__isNaNOut;
        CData/*0:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__rounding__DOT__pegMinNonzeroMagOut;
        CData/*0:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__rounding__DOT__pegMaxFiniteMagOut;
        CData/*0:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__rounding__DOT__notNaN_isInfOut;
        CData/*0:0*/ g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__rounding__DOT____VdfgRegularize_h6b751c40_0_10;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_1;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_5;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_8;
        CData/*6:0*/ __VdfgRegularize_hf9aea9d2_0_10;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_11;
        CData/*6:0*/ __VdfgRegularize_hf9aea9d2_0_13;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_14;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_17;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_20;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_23;
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_26;
        CData/*6:0*/ __VdfgRegularize_hf9aea9d2_0_28;
    };
    struct {
        CData/*2:0*/ __VdfgRegularize_hf9aea9d2_0_29;
        CData/*6:0*/ __VdfgRegularize_hf9aea9d2_0_31;
        SData/*8:0*/ __PVT__conv_c__DOT__adjustedExp;
        SData/*8:0*/ __PVT__final_add__DOT__g_out_ieee__DOT__to_ieee__DOT__recFNToRawFN__DOT__exp;
        SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
        SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
        SData/*10:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__rounding__DOT__genblk2__DOT__sRoundedExp;
        SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
        SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
        SData/*10:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__genblk2__DOT__sRoundedExp;
        SData/*8:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp;
        SData/*8:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp;
        SData/*10:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__rounding__DOT__genblk2__DOT__sRoundedExp;
        SData/*10:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__rounding__DOT__genblk2__DOT__sRoundedExp;
        SData/*9:0*/ __VdfgRegularize_hf9aea9d2_0_3;
        SData/*9:0*/ __VdfgRegularize_hf9aea9d2_0_7;
        SData/*9:0*/ __VdfgRegularize_hf9aea9d2_0_16;
        SData/*9:0*/ __VdfgRegularize_hf9aea9d2_0_19;
        SData/*9:0*/ __VdfgRegularize_hf9aea9d2_0_22;
        SData/*9:0*/ __VdfgRegularize_hf9aea9d2_0_25;
        VL_IN(a_row,31,0);
        VL_IN(b_col,31,0);
        VL_IN(c_val,31,0);
        VL_OUT(d_val,31,0);
        IData/*22:0*/ __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__rounding__DOT__common_fractOut;
        IData/*22:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__rounding__DOT__common_fractOut;
        IData/*22:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__rounding__DOT__common_fractOut;
        IData/*22:0*/ __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__rounding__DOT__common_fractOut;
        IData/*22:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__rounding__DOT__common_fractOut;
        IData/*22:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__rounding__DOT__common_fractOut;
        IData/*31:0*/ __VdfgRegularize_hf9aea9d2_13_3;
        IData/*23:0*/ __VdfgRegularize_hf9aea9d2_13_4;
        QData/*32:0*/ __Vxrand_h7c437464__1;
        QData/*32:0*/ __Vxrand_h7c437464__0;
        VlWide<8>/*230:0*/ __PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*44:0*/ final_add__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*89:0*/ __PVT__final_add__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*36:0*/ __PVT__final_add__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*36:0*/ g_prod__BRA__0__KET____DOT__fp16_mul__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*73:0*/ __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*37:0*/ __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*33:0*/ g_prod__BRA__0__KET____DOT__bf16_mul__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*67:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*37:0*/ __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*39:0*/ g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*79:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*37:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*32:0*/ __PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*36:0*/ g_prod__BRA__1__KET____DOT__fp16_mul__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*73:0*/ __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*37:0*/ __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*33:0*/ g_prod__BRA__1__KET____DOT__bf16_mul__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*67:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*37:0*/ __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*32:0*/ __PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*44:0*/ g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT____Vcellinp__pipe_add__data_in;
        VlWide<3>/*89:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*37:0*/ __PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__DOT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        VlUnpacked<QData/*32:0*/, 2> __PVT__mult_result;
        VlUnpacked<VlUnpacked<QData/*32:0*/, 2>, 2> __PVT__red_in;
        VlUnpacked<CData/*0:0*/, 63> __PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*4:0*/, 63> __PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__fp16_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 15> __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*2:0*/, 15> __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 15> __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*2:0*/, 15> __PVT__g_prod__BRA__0__KET____DOT__bf16_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 31> __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*3:0*/, 31> __PVT__g_prod__BRA__1__KET____DOT__fp16_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 15> __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*2:0*/, 15> __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
        VlUnpacked<CData/*0:0*/, 15> __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n;
        VlUnpacked<CData/*2:0*/, 15> __PVT__g_prod__BRA__1__KET____DOT__bf16_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n;
    };

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_tcu_fedp_bhf__La(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_tcu_fedp_bhf__La();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_tcu_fedp_bhf__La);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
