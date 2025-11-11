// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_bhf_fmul__pi81.h"
#include "Vrtlsim_shim__Syms.h"

extern const VlWide<17>/*543:0*/ Vrtlsim_shim__ConstPool__CONST_h3dcda147_0;
extern const VlWide<17>/*543:0*/ Vrtlsim_shim__ConstPool__CONST_h00a543f7_0;

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x16U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x16U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x16U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x16U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x16U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x16U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x16U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x16U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__2__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0x16U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0x16U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[5U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_prod__BRA__3__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                         << 3U) 
                                                        | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 0x1dU))))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                    << 0xaU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      >> 0x16U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x16U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                        << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1dU))))
                       ? (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                          [0U]))) : 
                      (0xffU & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                 << 3U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           >> 0x1dU)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                     >> 0x1dU))))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 0x16U))))
                                                    : 
                                                   ((IData)(
                                                            ((0U 
                                                              == 
                                                              (0x1fc00000U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])) 
                                                             & (0U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 0x1dU))))))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_2 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfA = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_0)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__1(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__0__KET____DOT__bf16_mul__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hfce37e11_0_5 = (0x7fU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    __PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0xdU))) ? 
                      (0x1f8U | (7U & (~ vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                       [0U]))) : (0xffU 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0xdU))) 
                     + (0x80U | ((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU)))
                                  ? 2U : 1U))));
    vlSelfRef.__VdfgRegularize_hfce37e11_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1fffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__multiplier__DOT__isInfB = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfce37e11_0_3)) 
                                                & (3U 
                                                   == 
                                                   VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0(Vrtlsim_shim_VX_tcu_bhf_fmul__pi81* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fmul__pi81___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_prod__BRA__1__KET____DOT__bf16_mul__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__rounding__DOT__roundMagUp;
    __PVT__rounding__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__rounding__DOT__commonCase;
    __PVT__rounding__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow;
    __PVT__rounding__DOT__overflow = 0;
    CData/*0:0*/ __PVT__rounding__DOT__overflow_roundMagUp;
    __PVT__rounding__DOT__overflow_roundMagUp = 0;
    IData/*24:0*/ __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosMask;
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__roundPosBit;
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__rounding__DOT__genblk2__DOT__anyRound;
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 0;
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_1;
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_3;
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h8b7da927_0_4;
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 0;
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0x16U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[7U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[8U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[9U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xaU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x19U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xbU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x18U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xcU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x17U));
    vlSelfRef.__PVT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xdU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0x16U));
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h8b7da927_0_3 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 2U))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                >> 2U))));
    __PVT__rounding__DOT__roundMagUp = ((IData)((0x80000008U 
                                                 == 
                                                 (0x8000001cU 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))) 
                                        | (IData)((0xcU 
                                                   == 
                                                   (0x8000001cU 
                                                    & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0x15U))))));
    __PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_1[3U]) << 0xeU)) 
           | ((0x800000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_3[3U]) << 0xcU)) 
              | ((0x400000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | ((0x200000U & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                   & __Vtemp_7[3U]) 
                                  << 8U)) | ((0x100000U 
                                              & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_9[3U]) 
                                                 << 6U)) 
                                             | ((0x80000U 
                                                 & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_11[3U]) 
                                                    << 4U)) 
                                                | ((0x40000U 
                                                    & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U)) 
                                                   | ((0x20000U 
                                                       & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_15[3U])) 
                                                      | ((0x10000U 
                                                          & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                              & __Vtemp_17[3U]) 
                                                             >> 2U)) 
                                                         | ((0x8000U 
                                                             & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_19[3U]) 
                                                                >> 4U)) 
                                                            | ((0x4000U 
                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_21[3U]) 
                                                                   >> 6U)) 
                                                               | ((0x2000U 
                                                                   & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_23[3U]) 
                                                                      >> 8U)) 
                                                                  | ((0x1000U 
                                                                      & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_25[3U]) 
                                                                         >> 0xaU)) 
                                                                     | ((0x800U 
                                                                         & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_27[3U]) 
                                                                            >> 0xcU)) 
                                                                        | ((0x400U 
                                                                            & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_29[3U]) 
                                                                               >> 0xeU)) 
                                                                           | ((0x200U 
                                                                               & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_31[3U]) 
                                                                                >> 0x10U)) 
                                                                              | ((0x100U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_33[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_35[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_37[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_39[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_41[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_43[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_45[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_47[4U])) 
                                                                                | (1U 
                                                                                & ((Vrtlsim_shim__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_49[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __PVT__rounding__DOT__commonCase = (1U & ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                              & ((~ 
                                                  (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                   >> 1U)) 
                                                 & (~ 
                                                    vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]))));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h8b7da927_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (VL_SHIFTL_III(27,27,32, (0xffffU 
                                           & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 5U)), 0xbU) 
                  >> 0x1aU)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                >> 3U) & (VL_SHIFTR_III(27,27,32, 
                                                        (3U 
                                                         | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                            << 2U)), 1U) 
                                          >> 3U))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                    << 2U)));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = (0U != (0xffffffU & ((VL_SHIFTL_III(27,27,32, 
                                              (0xffffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 5U)), 0xbU) 
                                & __PVT__rounding__DOT__genblk2__DOT__roundPosMask) 
                               >> 3U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    rounding__DOT____VdfgRegularize_h8b7da927_0_4 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU)) 
                                                                 | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                 << 2U))) 
                                       & VL_SHIFTL_III(27,27,32, 
                                                       (0xffffU 
                                                        & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 5U)), 0xbU))), 2U) 
             | ((IData)(((0x18U == (0x1cU & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & VL_SHIFTL_III(27,27,32, 
                                                    (0xffffU 
                                                     & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 5U)), 0xbU))
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 1U)
                         : rounding__DOT____VdfgRegularize_h8b7da927_0_4));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             >> 0x15U))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h8b7da927_0_4), 0x18U))));
    vlSelfRef.rounding__DOT____VdfgRegularize_h8b7da927_0_9 
        = ((~ vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 2U))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 1U) | ((IData)(__PVT__rounding__DOT__overflow) 
                            & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            << 1U)) 
                                  | (((IData)(__PVT__rounding__DOT__overflow) 
                                      << 2U) | ((((IData)(__PVT__rounding__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | ((IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound) 
                                                        & (VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, 
                                                                                (0x3ffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x15U))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x4000000U 
                                                                   & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                   >> 1U))) 
                                                                & (((0x4000000U 
                                                                     & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h8b7da927_0_4 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h8b7da927_0_3) 
                                                                          & ((0x4000000U 
                                                                              & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                              ? 
                                                                             (0x1ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U))
                                                                              : 
                                                                             (0x3ffffffU 
                                                                              & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 1U)))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & ((VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 0x1aU) 
                                                                               & (VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU) 
                                                                                >> 2U)))))))) 
                                                              & ((0x4000000U 
                                                                  & VL_SHIFTL_III(27,27,32, 
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 5U)), 0xbU))
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h8b7da927_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h8b7da927_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
}
