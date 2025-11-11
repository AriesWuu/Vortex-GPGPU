// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2.h"
#include "Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__final_add__DOT__s1_isInf;
    __PVT__final_add__DOT__s1_isInf = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isInfA;
    __PVT__final_add__DOT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__eqSigns;
    __PVT__final_add__DOT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__final_add__DOT__adder__DOT__sDiffExps;
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isMaxAlign;
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__closeSubMags;
    __PVT__final_add__DOT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sSigSum;
    __PVT__final_add__DOT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sigOut;
    __PVT__final_add__DOT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__final_add__DOT__adder__DOT__far_sigSum;
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__addZeros;
    __PVT__final_add__DOT__adder__DOT__addZeros = 0;
    SData/*9:0*/ final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2;
    final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    IData/*26:0*/ __VdfgRegularize_h87c494dc_7_0;
    __VdfgRegularize_h87c494dc_7_0 = 0;
    IData/*24:0*/ __VdfgRegularize_h87c494dc_7_1;
    __VdfgRegularize_h87c494dc_7_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h87c494dc_7_17;
    __VdfgRegularize_h87c494dc_7_17 = 0;
    // Body
    vlSelfRef.__PVT__red_in[1U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[1U][1U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[2U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                             >> 0x1dU))))
                                                      ? 
                                                     (0x1e0U 
                                                      | (0x1fU 
                                                         & (~ 
                                                            vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                            [0U])))
                                                      : 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                            >> 0x1dU)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                                >> 0x1dU))))
                                                         ? 2U
                                                         : 1U))));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_2 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_5 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_8 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_11 = (0x3ffU 
                                                 & ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    VL_SHIFTL_III(10,10,32, 
                                                                  (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 6U)) 
                                                                   << 
                                                                   vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                   [0U]), 1U)
                                                     : 
                                                    ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                      << 0x1aU) 
                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 6U))));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x1fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x20U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x21U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x22U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x19U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x23U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x18U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x24U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x17U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x25U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x16U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x26U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x15U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x27U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x14U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x28U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x13U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x29U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x12U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2aU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x11U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2bU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x10U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2cU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xfU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2dU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xeU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2eU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xdU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xcU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x30U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xbU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x31U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xaU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x32U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 9U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x33U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 8U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x34U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 7U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x35U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 6U));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__final_add__DOT__adder__DOT__addZeros = (
                                                   (0U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 6U)) 
                                                   & (0U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 6U)));
    __PVT__final_add__DOT__adder__DOT__isInfA = ((~ (IData)(
                                                            (vlSelfRef.__PVT__red_in
                                                             [2U]
                                                             [0U] 
                                                             >> 0x1dU))) 
                                                 & (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 7U)));
    __PVT__final_add__DOT__adder__DOT__eqSigns = ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__red_in
                                                              [2U]
                                                              [0U] 
                                                              >> 0x20U))) 
                                                  == 
                                                  (1U 
                                                   & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                      >> 9U)));
    __VdfgRegularize_h87c494dc_7_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__red_in
                                                                         [2U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSelfRef.__PVT__red_in
                                                            [2U]
                                                            [0U])));
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 
        (0x3ffU & ((0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                      [2U][0U] >> 0x17U))) 
                   - (0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_6 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_9 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    __PVT__final_add__DOT__s1_isInf = ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                       | (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_h87c494dc_7_1 = __VdfgRegularize_h87c494dc_7_17;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]) 
                         - (0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                              [2U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_h87c494dc_7_1 = vlSelfRef.__VdfgRegularize_h87c494dc_7_16;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps));
    }
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 
        ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
         & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
            | (0U == (0x1fU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))));
    __PVT__final_add__DOT__adder__DOT__close_sSigSum 
        = (0x7ffffffU & ((((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))) 
                            & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))
                            ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 2U)
                            : 0U) | ((((~ (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)) 
                                       & VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                       ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 1U)
                                       : 0U) | (VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                 ? __VdfgRegularize_h87c494dc_7_17
                                                 : 0U))) 
                         - VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h87c494dc_7_16, 1U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    __PVT__final_add__DOT__adder__DOT__closeSubMags 
        = ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
           & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)) 
              & (1U >= (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_h87c494dc_7_1 
                                          << 5U)) >> 
                          ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                            ? 0x1fU : (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_h87c494dc_7_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__final_add__DOT__adder__DOT__close_sSigSum)
                                        : __PVT__final_add__DOT__adder__DOT__close_sSigSum));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (__PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (__VdfgRegularize_h87c494dc_7_1 
                                                              >> 0x16U)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (__VdfgRegularize_h87c494dc_7_1 
                                                                 >> 0x12U)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (__VdfgRegularize_h87c494dc_7_1 
                                                                    >> 0xeU)))) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (__VdfgRegularize_h87c494dc_7_1 
                                                                       >> 0xaU)))) 
                                                          << 3U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (__VdfgRegularize_h87c494dc_7_1 
                                                                          >> 6U)))) 
                                                             << 2U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (__VdfgRegularize_h87c494dc_7_1 
                                                                             >> 2U)))) 
                                                                << 1U) 
                                                               | (0U 
                                                                  != 
                                                                  (3U 
                                                                   & __VdfgRegularize_h87c494dc_7_1)))))))) 
                                               & ((0x40U 
                                                   & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                     ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                       ? 7U
                                                                       : 
                                                                      (7U 
                                                                       & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                          >> 2U)))) 
                                                      << 5U)) 
                                                  | ((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                          ? 7U
                                                                          : 
                                                                         (7U 
                                                                          & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                             >> 2U)))) 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                             ? 7U
                                                                             : 
                                                                            (7U 
                                                                             & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                            << 1U)) 
                                                        | ((8U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                ? 7U
                                                                                : 
                                                                               (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                               >> 1U)) 
                                                           | ((4U 
                                                               & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                  >> 3U)) 
                                                              | ((2U 
                                                                  & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                     >> 5U)) 
                                                                 | (1U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 7U))))))))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_h87c494dc_7_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_h87c494dc_7_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_h87c494dc_7_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_h87c494dc_7_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_h87c494dc_7_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_h87c494dc_7_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_h87c494dc_7_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x18U)))))))))))))));
    vlSelfRef.g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5))))))) 
                                              << 3U))))));
    vlSelfRef.g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__3__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11))))))) 
                                              << 3U))))));
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 
        (0xfffffffU & (VL_SHIFTL_III(28,28,32, (0xffffffU 
                                                & (VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                    ? vlSelfRef.__VdfgRegularize_h87c494dc_7_16
                                                    : __VdfgRegularize_h87c494dc_7_17)), 3U) 
                       + (((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                            ? __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller)))) 
                          + (1U & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    __PVT__final_add__DOT__adder__DOT__close_sigOut 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,32, ((0x3ffffffU 
                                                  & __VdfgRegularize_h87c494dc_7_0) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.final_add__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ (IData)((vlSelfRef.__PVT__red_in
                                          [2U][0U] 
                                          >> 0x16U))) 
                              & (7U == (7U & (IData)(
                                                     (vlSelfRef.__PVT__red_in
                                                      [2U]
                                                      [0U] 
                                                      >> 0x1dU))))) 
                             | (((~ (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                     >> 0x1fU)) & (0x1c0U 
                                                   == 
                                                   (0x1c0U 
                                                    & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]))) 
                                | ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                   & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
                                      & (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB))))))) 
            << 0x2cU) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__red_in
                                                                       [2U]
                                                                       [0U] 
                                                                       >> 0x17U))), 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__red_in
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 7U)) 
                                              & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                 >> 6U))))) 
                          << 0x2bU) | (((QData)((IData)(__PVT__final_add__DOT__s1_isInf)) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         ((IData)(__PVT__final_add__DOT__adder__DOT__addZeros) 
                                                          | ((~ (IData)(__PVT__final_add__DOT__s1_isInf)) 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))))) 
                                                                & (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns) 
                                                                  | (IData)(__PVT__final_add__DOT__adder__DOT__isInfA)) 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__red_in
                                                                            [2U]
                                                                            [0U] 
                                                                            >> 0x20U))) 
                                                                | (((IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB) 
                                                                    & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                       >> 9U)) 
                                                                   | ((~ 
                                                                       ((IData)(__PVT__final_add__DOT__s1_isInf) 
                                                                        | (IData)(__PVT__final_add__DOT__adder__DOT__addZeros))) 
                                                                      & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                          & ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                             & ((IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))))) 
                                                                         | ((~ (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)) 
                                                                            & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                                                ? 
                                                                               (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                                >> 9U)
                                                                                : (IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x3ffU 
                                                                & ((((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                     | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])
                                                                     : 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                   - 
                                                                   ((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                     : 
                                                                    (1U 
                                                                     & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)))))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (0x3ffffff8U 
                                                                 & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                      ? __PVT__final_add__DOT__adder__DOT__close_sigOut
                                                                      : 
                                                                     (0xfffffffU 
                                                                      & ((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                                                                          ? 
                                                                         (VL_SHIFTR_III(28,28,32, __PVT__final_add__DOT__adder__DOT__far_sigSum, 1U) 
                                                                          | (1U 
                                                                             & __PVT__final_add__DOT__adder__DOT__far_sigSum))
                                                                          : __PVT__final_add__DOT__adder__DOT__far_sigSum))) 
                                                                    << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__final_add__DOT__s1_isInf;
    __PVT__final_add__DOT__s1_isInf = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isInfA;
    __PVT__final_add__DOT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__eqSigns;
    __PVT__final_add__DOT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__final_add__DOT__adder__DOT__sDiffExps;
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isMaxAlign;
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__closeSubMags;
    __PVT__final_add__DOT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sSigSum;
    __PVT__final_add__DOT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sigOut;
    __PVT__final_add__DOT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__final_add__DOT__adder__DOT__far_sigSum;
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__addZeros;
    __PVT__final_add__DOT__adder__DOT__addZeros = 0;
    SData/*9:0*/ final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2;
    final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    IData/*26:0*/ __VdfgRegularize_h87c494dc_7_0;
    __VdfgRegularize_h87c494dc_7_0 = 0;
    IData/*24:0*/ __VdfgRegularize_h87c494dc_7_1;
    __VdfgRegularize_h87c494dc_7_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h87c494dc_7_17;
    __VdfgRegularize_h87c494dc_7_17 = 0;
    // Body
    vlSelfRef.__PVT__red_in[1U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[1U][1U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[2U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                             >> 0x1dU))))
                                                      ? 
                                                     (0x1e0U 
                                                      | (0x1fU 
                                                         & (~ 
                                                            vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                            [0U])))
                                                      : 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                            >> 0x1dU)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                                >> 0x1dU))))
                                                         ? 2U
                                                         : 1U))));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_2 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_5 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_8 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_11 = (0x3ffU 
                                                 & ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    VL_SHIFTL_III(10,10,32, 
                                                                  (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 6U)) 
                                                                   << 
                                                                   vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                   [0U]), 1U)
                                                     : 
                                                    ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                      << 0x1aU) 
                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 6U))));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x1fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x20U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x21U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x22U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x19U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x23U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x18U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x24U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x17U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x25U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x16U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x26U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x15U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x27U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x14U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x28U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x13U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x29U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x12U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2aU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x11U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2bU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x10U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2cU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xfU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2dU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xeU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2eU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xdU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xcU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x30U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xbU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x31U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xaU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x32U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 9U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x33U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 8U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x34U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 7U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x35U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 6U));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__final_add__DOT__adder__DOT__addZeros = (
                                                   (0U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 6U)) 
                                                   & (0U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 6U)));
    __PVT__final_add__DOT__adder__DOT__isInfA = ((~ (IData)(
                                                            (vlSelfRef.__PVT__red_in
                                                             [2U]
                                                             [0U] 
                                                             >> 0x1dU))) 
                                                 & (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 7U)));
    __PVT__final_add__DOT__adder__DOT__eqSigns = ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__red_in
                                                              [2U]
                                                              [0U] 
                                                              >> 0x20U))) 
                                                  == 
                                                  (1U 
                                                   & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                      >> 9U)));
    __VdfgRegularize_h87c494dc_7_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__red_in
                                                                         [2U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSelfRef.__PVT__red_in
                                                            [2U]
                                                            [0U])));
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 
        (0x3ffU & ((0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                      [2U][0U] >> 0x17U))) 
                   - (0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_6 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_9 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    __PVT__final_add__DOT__s1_isInf = ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                       | (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_h87c494dc_7_1 = __VdfgRegularize_h87c494dc_7_17;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]) 
                         - (0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                              [2U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_h87c494dc_7_1 = vlSelfRef.__VdfgRegularize_h87c494dc_7_16;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps));
    }
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 
        ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
         & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
            | (0U == (0x1fU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))));
    __PVT__final_add__DOT__adder__DOT__close_sSigSum 
        = (0x7ffffffU & ((((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))) 
                            & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))
                            ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 2U)
                            : 0U) | ((((~ (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)) 
                                       & VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                       ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 1U)
                                       : 0U) | (VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                 ? __VdfgRegularize_h87c494dc_7_17
                                                 : 0U))) 
                         - VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h87c494dc_7_16, 1U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    __PVT__final_add__DOT__adder__DOT__closeSubMags 
        = ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
           & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)) 
              & (1U >= (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_h87c494dc_7_1 
                                          << 5U)) >> 
                          ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                            ? 0x1fU : (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_h87c494dc_7_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__final_add__DOT__adder__DOT__close_sSigSum)
                                        : __PVT__final_add__DOT__adder__DOT__close_sSigSum));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (__PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (__VdfgRegularize_h87c494dc_7_1 
                                                              >> 0x16U)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (__VdfgRegularize_h87c494dc_7_1 
                                                                 >> 0x12U)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (__VdfgRegularize_h87c494dc_7_1 
                                                                    >> 0xeU)))) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (__VdfgRegularize_h87c494dc_7_1 
                                                                       >> 0xaU)))) 
                                                          << 3U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (__VdfgRegularize_h87c494dc_7_1 
                                                                          >> 6U)))) 
                                                             << 2U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (__VdfgRegularize_h87c494dc_7_1 
                                                                             >> 2U)))) 
                                                                << 1U) 
                                                               | (0U 
                                                                  != 
                                                                  (3U 
                                                                   & __VdfgRegularize_h87c494dc_7_1)))))))) 
                                               & ((0x40U 
                                                   & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                     ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                       ? 7U
                                                                       : 
                                                                      (7U 
                                                                       & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                          >> 2U)))) 
                                                      << 5U)) 
                                                  | ((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                          ? 7U
                                                                          : 
                                                                         (7U 
                                                                          & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                             >> 2U)))) 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                             ? 7U
                                                                             : 
                                                                            (7U 
                                                                             & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                            << 1U)) 
                                                        | ((8U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                ? 7U
                                                                                : 
                                                                               (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                               >> 1U)) 
                                                           | ((4U 
                                                               & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                  >> 3U)) 
                                                              | ((2U 
                                                                  & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                     >> 5U)) 
                                                                 | (1U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 7U))))))))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_h87c494dc_7_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_h87c494dc_7_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_h87c494dc_7_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_h87c494dc_7_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_h87c494dc_7_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_h87c494dc_7_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_h87c494dc_7_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x18U)))))))))))))));
    vlSelfRef.g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5))))))) 
                                              << 3U))))));
    vlSelfRef.g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11))))))) 
                                              << 3U))))));
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 
        (0xfffffffU & (VL_SHIFTL_III(28,28,32, (0xffffffU 
                                                & (VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                    ? vlSelfRef.__VdfgRegularize_h87c494dc_7_16
                                                    : __VdfgRegularize_h87c494dc_7_17)), 3U) 
                       + (((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                            ? __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller)))) 
                          + (1U & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    __PVT__final_add__DOT__adder__DOT__close_sigOut 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,32, ((0x3ffffffU 
                                                  & __VdfgRegularize_h87c494dc_7_0) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.final_add__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ (IData)((vlSelfRef.__PVT__red_in
                                          [2U][0U] 
                                          >> 0x16U))) 
                              & (7U == (7U & (IData)(
                                                     (vlSelfRef.__PVT__red_in
                                                      [2U]
                                                      [0U] 
                                                      >> 0x1dU))))) 
                             | (((~ (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                     >> 0x1fU)) & (0x1c0U 
                                                   == 
                                                   (0x1c0U 
                                                    & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]))) 
                                | ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                   & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
                                      & (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB))))))) 
            << 0x2cU) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__red_in
                                                                       [2U]
                                                                       [0U] 
                                                                       >> 0x17U))), 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__red_in
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 7U)) 
                                              & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                 >> 6U))))) 
                          << 0x2bU) | (((QData)((IData)(__PVT__final_add__DOT__s1_isInf)) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         ((IData)(__PVT__final_add__DOT__adder__DOT__addZeros) 
                                                          | ((~ (IData)(__PVT__final_add__DOT__s1_isInf)) 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))))) 
                                                                & (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns) 
                                                                  | (IData)(__PVT__final_add__DOT__adder__DOT__isInfA)) 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__red_in
                                                                            [2U]
                                                                            [0U] 
                                                                            >> 0x20U))) 
                                                                | (((IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB) 
                                                                    & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                       >> 9U)) 
                                                                   | ((~ 
                                                                       ((IData)(__PVT__final_add__DOT__s1_isInf) 
                                                                        | (IData)(__PVT__final_add__DOT__adder__DOT__addZeros))) 
                                                                      & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                          & ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                             & ((IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))))) 
                                                                         | ((~ (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)) 
                                                                            & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                                                ? 
                                                                               (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                                >> 9U)
                                                                                : (IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x3ffU 
                                                                & ((((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                     | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])
                                                                     : 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                   - 
                                                                   ((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                     : 
                                                                    (1U 
                                                                     & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)))))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (0x3ffffff8U 
                                                                 & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                      ? __PVT__final_add__DOT__adder__DOT__close_sigOut
                                                                      : 
                                                                     (0xfffffffU 
                                                                      & ((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                                                                          ? 
                                                                         (VL_SHIFTR_III(28,28,32, __PVT__final_add__DOT__adder__DOT__far_sigSum, 1U) 
                                                                          | (1U 
                                                                             & __PVT__final_add__DOT__adder__DOT__far_sigSum))
                                                                          : __PVT__final_add__DOT__adder__DOT__far_sigSum))) 
                                                                    << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__final_add__DOT__s1_isInf;
    __PVT__final_add__DOT__s1_isInf = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isInfA;
    __PVT__final_add__DOT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__eqSigns;
    __PVT__final_add__DOT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__final_add__DOT__adder__DOT__sDiffExps;
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isMaxAlign;
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__closeSubMags;
    __PVT__final_add__DOT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sSigSum;
    __PVT__final_add__DOT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sigOut;
    __PVT__final_add__DOT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__final_add__DOT__adder__DOT__far_sigSum;
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__addZeros;
    __PVT__final_add__DOT__adder__DOT__addZeros = 0;
    SData/*9:0*/ final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2;
    final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    IData/*26:0*/ __VdfgRegularize_h87c494dc_7_0;
    __VdfgRegularize_h87c494dc_7_0 = 0;
    IData/*24:0*/ __VdfgRegularize_h87c494dc_7_1;
    __VdfgRegularize_h87c494dc_7_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h87c494dc_7_17;
    __VdfgRegularize_h87c494dc_7_17 = 0;
    // Body
    vlSelfRef.__PVT__red_in[1U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[1U][1U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[2U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                             >> 0x1dU))))
                                                      ? 
                                                     (0x1e0U 
                                                      | (0x1fU 
                                                         & (~ 
                                                            vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                            [0U])))
                                                      : 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                            >> 0x1dU)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                                >> 0x1dU))))
                                                         ? 2U
                                                         : 1U))));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_2 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_5 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_8 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_11 = (0x3ffU 
                                                 & ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    VL_SHIFTL_III(10,10,32, 
                                                                  (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 6U)) 
                                                                   << 
                                                                   vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                   [0U]), 1U)
                                                     : 
                                                    ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                      << 0x1aU) 
                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 6U))));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x1fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x20U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x21U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x22U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x19U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x23U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x18U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x24U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x17U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x25U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x16U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x26U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x15U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x27U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x14U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x28U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x13U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x29U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x12U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2aU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x11U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2bU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x10U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2cU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xfU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2dU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xeU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2eU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xdU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xcU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x30U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xbU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x31U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xaU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x32U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 9U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x33U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 8U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x34U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 7U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x35U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 6U));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__final_add__DOT__adder__DOT__addZeros = (
                                                   (0U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 6U)) 
                                                   & (0U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 6U)));
    __PVT__final_add__DOT__adder__DOT__isInfA = ((~ (IData)(
                                                            (vlSelfRef.__PVT__red_in
                                                             [2U]
                                                             [0U] 
                                                             >> 0x1dU))) 
                                                 & (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 7U)));
    __PVT__final_add__DOT__adder__DOT__eqSigns = ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__red_in
                                                              [2U]
                                                              [0U] 
                                                              >> 0x20U))) 
                                                  == 
                                                  (1U 
                                                   & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                      >> 9U)));
    __VdfgRegularize_h87c494dc_7_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__red_in
                                                                         [2U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSelfRef.__PVT__red_in
                                                            [2U]
                                                            [0U])));
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 
        (0x3ffU & ((0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                      [2U][0U] >> 0x17U))) 
                   - (0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_6 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_9 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    __PVT__final_add__DOT__s1_isInf = ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                       | (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_h87c494dc_7_1 = __VdfgRegularize_h87c494dc_7_17;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]) 
                         - (0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                              [2U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_h87c494dc_7_1 = vlSelfRef.__VdfgRegularize_h87c494dc_7_16;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps));
    }
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 
        ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
         & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
            | (0U == (0x1fU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))));
    __PVT__final_add__DOT__adder__DOT__close_sSigSum 
        = (0x7ffffffU & ((((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))) 
                            & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))
                            ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 2U)
                            : 0U) | ((((~ (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)) 
                                       & VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                       ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 1U)
                                       : 0U) | (VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                 ? __VdfgRegularize_h87c494dc_7_17
                                                 : 0U))) 
                         - VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h87c494dc_7_16, 1U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    __PVT__final_add__DOT__adder__DOT__closeSubMags 
        = ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
           & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)) 
              & (1U >= (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_h87c494dc_7_1 
                                          << 5U)) >> 
                          ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                            ? 0x1fU : (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_h87c494dc_7_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__final_add__DOT__adder__DOT__close_sSigSum)
                                        : __PVT__final_add__DOT__adder__DOT__close_sSigSum));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (__PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (__VdfgRegularize_h87c494dc_7_1 
                                                              >> 0x16U)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (__VdfgRegularize_h87c494dc_7_1 
                                                                 >> 0x12U)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (__VdfgRegularize_h87c494dc_7_1 
                                                                    >> 0xeU)))) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (__VdfgRegularize_h87c494dc_7_1 
                                                                       >> 0xaU)))) 
                                                          << 3U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (__VdfgRegularize_h87c494dc_7_1 
                                                                          >> 6U)))) 
                                                             << 2U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (__VdfgRegularize_h87c494dc_7_1 
                                                                             >> 2U)))) 
                                                                << 1U) 
                                                               | (0U 
                                                                  != 
                                                                  (3U 
                                                                   & __VdfgRegularize_h87c494dc_7_1)))))))) 
                                               & ((0x40U 
                                                   & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                     ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                       ? 7U
                                                                       : 
                                                                      (7U 
                                                                       & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                          >> 2U)))) 
                                                      << 5U)) 
                                                  | ((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                          ? 7U
                                                                          : 
                                                                         (7U 
                                                                          & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                             >> 2U)))) 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                             ? 7U
                                                                             : 
                                                                            (7U 
                                                                             & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                            << 1U)) 
                                                        | ((8U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                ? 7U
                                                                                : 
                                                                               (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                               >> 1U)) 
                                                           | ((4U 
                                                               & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                  >> 3U)) 
                                                              | ((2U 
                                                                  & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                     >> 5U)) 
                                                                 | (1U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 7U))))))))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_h87c494dc_7_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_h87c494dc_7_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_h87c494dc_7_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_h87c494dc_7_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_h87c494dc_7_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_h87c494dc_7_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_h87c494dc_7_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x18U)))))))))))))));
    vlSelfRef.g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5))))))) 
                                              << 3U))))));
    vlSelfRef.g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11))))))) 
                                              << 3U))))));
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 
        (0xfffffffU & (VL_SHIFTL_III(28,28,32, (0xffffffU 
                                                & (VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                    ? vlSelfRef.__VdfgRegularize_h87c494dc_7_16
                                                    : __VdfgRegularize_h87c494dc_7_17)), 3U) 
                       + (((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                            ? __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller)))) 
                          + (1U & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    __PVT__final_add__DOT__adder__DOT__close_sigOut 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,32, ((0x3ffffffU 
                                                  & __VdfgRegularize_h87c494dc_7_0) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.final_add__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ (IData)((vlSelfRef.__PVT__red_in
                                          [2U][0U] 
                                          >> 0x16U))) 
                              & (7U == (7U & (IData)(
                                                     (vlSelfRef.__PVT__red_in
                                                      [2U]
                                                      [0U] 
                                                      >> 0x1dU))))) 
                             | (((~ (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                     >> 0x1fU)) & (0x1c0U 
                                                   == 
                                                   (0x1c0U 
                                                    & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]))) 
                                | ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                   & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
                                      & (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB))))))) 
            << 0x2cU) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__red_in
                                                                       [2U]
                                                                       [0U] 
                                                                       >> 0x17U))), 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__red_in
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 7U)) 
                                              & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                 >> 6U))))) 
                          << 0x2bU) | (((QData)((IData)(__PVT__final_add__DOT__s1_isInf)) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         ((IData)(__PVT__final_add__DOT__adder__DOT__addZeros) 
                                                          | ((~ (IData)(__PVT__final_add__DOT__s1_isInf)) 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))))) 
                                                                & (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns) 
                                                                  | (IData)(__PVT__final_add__DOT__adder__DOT__isInfA)) 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__red_in
                                                                            [2U]
                                                                            [0U] 
                                                                            >> 0x20U))) 
                                                                | (((IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB) 
                                                                    & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                       >> 9U)) 
                                                                   | ((~ 
                                                                       ((IData)(__PVT__final_add__DOT__s1_isInf) 
                                                                        | (IData)(__PVT__final_add__DOT__adder__DOT__addZeros))) 
                                                                      & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                          & ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                             & ((IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))))) 
                                                                         | ((~ (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)) 
                                                                            & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                                                ? 
                                                                               (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                                >> 9U)
                                                                                : (IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x3ffU 
                                                                & ((((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                     | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])
                                                                     : 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                   - 
                                                                   ((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                     : 
                                                                    (1U 
                                                                     & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)))))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (0x3ffffff8U 
                                                                 & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                      ? __PVT__final_add__DOT__adder__DOT__close_sigOut
                                                                      : 
                                                                     (0xfffffffU 
                                                                      & ((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                                                                          ? 
                                                                         (VL_SHIFTR_III(28,28,32, __PVT__final_add__DOT__adder__DOT__far_sigSum, 1U) 
                                                                          | (1U 
                                                                             & __PVT__final_add__DOT__adder__DOT__far_sigSum))
                                                                          : __PVT__final_add__DOT__adder__DOT__far_sigSum))) 
                                                                    << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__final_add__DOT__s1_isInf;
    __PVT__final_add__DOT__s1_isInf = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isInfA;
    __PVT__final_add__DOT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__eqSigns;
    __PVT__final_add__DOT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__final_add__DOT__adder__DOT__sDiffExps;
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isMaxAlign;
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__closeSubMags;
    __PVT__final_add__DOT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sSigSum;
    __PVT__final_add__DOT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sigOut;
    __PVT__final_add__DOT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__final_add__DOT__adder__DOT__far_sigSum;
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__addZeros;
    __PVT__final_add__DOT__adder__DOT__addZeros = 0;
    SData/*9:0*/ final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2;
    final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    IData/*26:0*/ __VdfgRegularize_h87c494dc_7_0;
    __VdfgRegularize_h87c494dc_7_0 = 0;
    IData/*24:0*/ __VdfgRegularize_h87c494dc_7_1;
    __VdfgRegularize_h87c494dc_7_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h87c494dc_7_17;
    __VdfgRegularize_h87c494dc_7_17 = 0;
    // Body
    vlSelfRef.__PVT__red_in[1U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[1U][1U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[2U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                             >> 0x1dU))))
                                                      ? 
                                                     (0x1e0U 
                                                      | (0x1fU 
                                                         & (~ 
                                                            vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                            [0U])))
                                                      : 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                            >> 0x1dU)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                                >> 0x1dU))))
                                                         ? 2U
                                                         : 1U))));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_2 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_5 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_8 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_11 = (0x3ffU 
                                                 & ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    VL_SHIFTL_III(10,10,32, 
                                                                  (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 6U)) 
                                                                   << 
                                                                   vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                   [0U]), 1U)
                                                     : 
                                                    ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                      << 0x1aU) 
                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 6U))));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x1fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x20U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x21U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x22U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x19U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x23U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x18U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x24U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x17U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x25U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x16U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x26U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x15U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x27U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x14U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x28U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x13U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x29U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x12U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2aU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x11U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2bU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x10U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2cU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xfU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2dU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xeU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2eU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xdU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xcU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x30U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xbU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x31U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xaU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x32U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 9U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x33U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 8U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x34U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 7U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x35U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 6U));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__final_add__DOT__adder__DOT__addZeros = (
                                                   (0U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 6U)) 
                                                   & (0U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 6U)));
    __PVT__final_add__DOT__adder__DOT__isInfA = ((~ (IData)(
                                                            (vlSelfRef.__PVT__red_in
                                                             [2U]
                                                             [0U] 
                                                             >> 0x1dU))) 
                                                 & (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 7U)));
    __PVT__final_add__DOT__adder__DOT__eqSigns = ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__red_in
                                                              [2U]
                                                              [0U] 
                                                              >> 0x20U))) 
                                                  == 
                                                  (1U 
                                                   & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                      >> 9U)));
    __VdfgRegularize_h87c494dc_7_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__red_in
                                                                         [2U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSelfRef.__PVT__red_in
                                                            [2U]
                                                            [0U])));
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 
        (0x3ffU & ((0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                      [2U][0U] >> 0x17U))) 
                   - (0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_6 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_9 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    __PVT__final_add__DOT__s1_isInf = ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                       | (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_h87c494dc_7_1 = __VdfgRegularize_h87c494dc_7_17;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]) 
                         - (0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                              [2U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_h87c494dc_7_1 = vlSelfRef.__VdfgRegularize_h87c494dc_7_16;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps));
    }
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 
        ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
         & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
            | (0U == (0x1fU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))));
    __PVT__final_add__DOT__adder__DOT__close_sSigSum 
        = (0x7ffffffU & ((((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))) 
                            & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))
                            ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 2U)
                            : 0U) | ((((~ (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)) 
                                       & VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                       ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 1U)
                                       : 0U) | (VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                 ? __VdfgRegularize_h87c494dc_7_17
                                                 : 0U))) 
                         - VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h87c494dc_7_16, 1U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    __PVT__final_add__DOT__adder__DOT__closeSubMags 
        = ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
           & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)) 
              & (1U >= (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_h87c494dc_7_1 
                                          << 5U)) >> 
                          ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                            ? 0x1fU : (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_h87c494dc_7_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__final_add__DOT__adder__DOT__close_sSigSum)
                                        : __PVT__final_add__DOT__adder__DOT__close_sSigSum));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (__PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (__VdfgRegularize_h87c494dc_7_1 
                                                              >> 0x16U)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (__VdfgRegularize_h87c494dc_7_1 
                                                                 >> 0x12U)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (__VdfgRegularize_h87c494dc_7_1 
                                                                    >> 0xeU)))) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (__VdfgRegularize_h87c494dc_7_1 
                                                                       >> 0xaU)))) 
                                                          << 3U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (__VdfgRegularize_h87c494dc_7_1 
                                                                          >> 6U)))) 
                                                             << 2U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (__VdfgRegularize_h87c494dc_7_1 
                                                                             >> 2U)))) 
                                                                << 1U) 
                                                               | (0U 
                                                                  != 
                                                                  (3U 
                                                                   & __VdfgRegularize_h87c494dc_7_1)))))))) 
                                               & ((0x40U 
                                                   & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                     ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                       ? 7U
                                                                       : 
                                                                      (7U 
                                                                       & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                          >> 2U)))) 
                                                      << 5U)) 
                                                  | ((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                          ? 7U
                                                                          : 
                                                                         (7U 
                                                                          & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                             >> 2U)))) 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                             ? 7U
                                                                             : 
                                                                            (7U 
                                                                             & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                            << 1U)) 
                                                        | ((8U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                ? 7U
                                                                                : 
                                                                               (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                               >> 1U)) 
                                                           | ((4U 
                                                               & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                  >> 3U)) 
                                                              | ((2U 
                                                                  & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                     >> 5U)) 
                                                                 | (1U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 7U))))))))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_h87c494dc_7_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_h87c494dc_7_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_h87c494dc_7_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_h87c494dc_7_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_h87c494dc_7_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_h87c494dc_7_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_h87c494dc_7_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x18U)))))))))))))));
    vlSelfRef.g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5))))))) 
                                              << 3U))))));
    vlSelfRef.g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11))))))) 
                                              << 3U))))));
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 
        (0xfffffffU & (VL_SHIFTL_III(28,28,32, (0xffffffU 
                                                & (VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                    ? vlSelfRef.__VdfgRegularize_h87c494dc_7_16
                                                    : __VdfgRegularize_h87c494dc_7_17)), 3U) 
                       + (((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                            ? __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller)))) 
                          + (1U & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    __PVT__final_add__DOT__adder__DOT__close_sigOut 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,32, ((0x3ffffffU 
                                                  & __VdfgRegularize_h87c494dc_7_0) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.final_add__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ (IData)((vlSelfRef.__PVT__red_in
                                          [2U][0U] 
                                          >> 0x16U))) 
                              & (7U == (7U & (IData)(
                                                     (vlSelfRef.__PVT__red_in
                                                      [2U]
                                                      [0U] 
                                                      >> 0x1dU))))) 
                             | (((~ (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                     >> 0x1fU)) & (0x1c0U 
                                                   == 
                                                   (0x1c0U 
                                                    & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]))) 
                                | ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                   & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
                                      & (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB))))))) 
            << 0x2cU) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__red_in
                                                                       [2U]
                                                                       [0U] 
                                                                       >> 0x17U))), 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__red_in
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 7U)) 
                                              & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                 >> 6U))))) 
                          << 0x2bU) | (((QData)((IData)(__PVT__final_add__DOT__s1_isInf)) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         ((IData)(__PVT__final_add__DOT__adder__DOT__addZeros) 
                                                          | ((~ (IData)(__PVT__final_add__DOT__s1_isInf)) 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))))) 
                                                                & (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns) 
                                                                  | (IData)(__PVT__final_add__DOT__adder__DOT__isInfA)) 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__red_in
                                                                            [2U]
                                                                            [0U] 
                                                                            >> 0x20U))) 
                                                                | (((IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB) 
                                                                    & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                       >> 9U)) 
                                                                   | ((~ 
                                                                       ((IData)(__PVT__final_add__DOT__s1_isInf) 
                                                                        | (IData)(__PVT__final_add__DOT__adder__DOT__addZeros))) 
                                                                      & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                          & ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                             & ((IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))))) 
                                                                         | ((~ (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)) 
                                                                            & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                                                ? 
                                                                               (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                                >> 9U)
                                                                                : (IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x3ffU 
                                                                & ((((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                     | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])
                                                                     : 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                   - 
                                                                   ((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                     : 
                                                                    (1U 
                                                                     & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)))))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (0x3ffffff8U 
                                                                 & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                      ? __PVT__final_add__DOT__adder__DOT__close_sigOut
                                                                      : 
                                                                     (0xfffffffU 
                                                                      & ((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                                                                          ? 
                                                                         (VL_SHIFTR_III(28,28,32, __PVT__final_add__DOT__adder__DOT__far_sigSum, 1U) 
                                                                          | (1U 
                                                                             & __PVT__final_add__DOT__adder__DOT__far_sigSum))
                                                                          : __PVT__final_add__DOT__adder__DOT__far_sigSum))) 
                                                                    << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__final_add__DOT__s1_isInf;
    __PVT__final_add__DOT__s1_isInf = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isInfA;
    __PVT__final_add__DOT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__eqSigns;
    __PVT__final_add__DOT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__final_add__DOT__adder__DOT__sDiffExps;
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isMaxAlign;
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__closeSubMags;
    __PVT__final_add__DOT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sSigSum;
    __PVT__final_add__DOT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sigOut;
    __PVT__final_add__DOT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__final_add__DOT__adder__DOT__far_sigSum;
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__addZeros;
    __PVT__final_add__DOT__adder__DOT__addZeros = 0;
    SData/*9:0*/ final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2;
    final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    IData/*26:0*/ __VdfgRegularize_h87c494dc_7_0;
    __VdfgRegularize_h87c494dc_7_0 = 0;
    IData/*24:0*/ __VdfgRegularize_h87c494dc_7_1;
    __VdfgRegularize_h87c494dc_7_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h87c494dc_7_17;
    __VdfgRegularize_h87c494dc_7_17 = 0;
    // Body
    vlSelfRef.__PVT__red_in[1U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[1U][1U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[2U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                             >> 0x1dU))))
                                                      ? 
                                                     (0x1e0U 
                                                      | (0x1fU 
                                                         & (~ 
                                                            vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                            [0U])))
                                                      : 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                            >> 0x1dU)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                                >> 0x1dU))))
                                                         ? 2U
                                                         : 1U))));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_2 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_5 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_8 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_11 = (0x3ffU 
                                                 & ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    VL_SHIFTL_III(10,10,32, 
                                                                  (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 6U)) 
                                                                   << 
                                                                   vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                   [0U]), 1U)
                                                     : 
                                                    ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                      << 0x1aU) 
                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 6U))));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x1fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x20U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x21U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x22U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x19U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x23U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x18U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x24U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x17U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x25U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x16U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x26U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x15U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x27U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x14U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x28U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x13U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x29U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x12U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2aU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x11U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2bU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x10U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2cU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xfU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2dU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xeU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2eU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xdU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xcU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x30U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xbU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x31U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xaU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x32U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 9U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x33U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 8U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x34U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 7U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x35U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 6U));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__final_add__DOT__adder__DOT__addZeros = (
                                                   (0U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 6U)) 
                                                   & (0U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 6U)));
    __PVT__final_add__DOT__adder__DOT__isInfA = ((~ (IData)(
                                                            (vlSelfRef.__PVT__red_in
                                                             [2U]
                                                             [0U] 
                                                             >> 0x1dU))) 
                                                 & (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 7U)));
    __PVT__final_add__DOT__adder__DOT__eqSigns = ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__red_in
                                                              [2U]
                                                              [0U] 
                                                              >> 0x20U))) 
                                                  == 
                                                  (1U 
                                                   & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                      >> 9U)));
    __VdfgRegularize_h87c494dc_7_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__red_in
                                                                         [2U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSelfRef.__PVT__red_in
                                                            [2U]
                                                            [0U])));
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 
        (0x3ffU & ((0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                      [2U][0U] >> 0x17U))) 
                   - (0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_6 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_9 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    __PVT__final_add__DOT__s1_isInf = ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                       | (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_h87c494dc_7_1 = __VdfgRegularize_h87c494dc_7_17;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]) 
                         - (0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                              [2U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_h87c494dc_7_1 = vlSelfRef.__VdfgRegularize_h87c494dc_7_16;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps));
    }
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 
        ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
         & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
            | (0U == (0x1fU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))));
    __PVT__final_add__DOT__adder__DOT__close_sSigSum 
        = (0x7ffffffU & ((((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))) 
                            & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))
                            ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 2U)
                            : 0U) | ((((~ (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)) 
                                       & VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                       ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 1U)
                                       : 0U) | (VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                 ? __VdfgRegularize_h87c494dc_7_17
                                                 : 0U))) 
                         - VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h87c494dc_7_16, 1U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    __PVT__final_add__DOT__adder__DOT__closeSubMags 
        = ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
           & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)) 
              & (1U >= (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_h87c494dc_7_1 
                                          << 5U)) >> 
                          ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                            ? 0x1fU : (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_h87c494dc_7_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__final_add__DOT__adder__DOT__close_sSigSum)
                                        : __PVT__final_add__DOT__adder__DOT__close_sSigSum));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (__PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (__VdfgRegularize_h87c494dc_7_1 
                                                              >> 0x16U)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (__VdfgRegularize_h87c494dc_7_1 
                                                                 >> 0x12U)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (__VdfgRegularize_h87c494dc_7_1 
                                                                    >> 0xeU)))) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (__VdfgRegularize_h87c494dc_7_1 
                                                                       >> 0xaU)))) 
                                                          << 3U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (__VdfgRegularize_h87c494dc_7_1 
                                                                          >> 6U)))) 
                                                             << 2U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (__VdfgRegularize_h87c494dc_7_1 
                                                                             >> 2U)))) 
                                                                << 1U) 
                                                               | (0U 
                                                                  != 
                                                                  (3U 
                                                                   & __VdfgRegularize_h87c494dc_7_1)))))))) 
                                               & ((0x40U 
                                                   & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                     ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                       ? 7U
                                                                       : 
                                                                      (7U 
                                                                       & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                          >> 2U)))) 
                                                      << 5U)) 
                                                  | ((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                          ? 7U
                                                                          : 
                                                                         (7U 
                                                                          & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                             >> 2U)))) 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                             ? 7U
                                                                             : 
                                                                            (7U 
                                                                             & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                            << 1U)) 
                                                        | ((8U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                ? 7U
                                                                                : 
                                                                               (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                               >> 1U)) 
                                                           | ((4U 
                                                               & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                  >> 3U)) 
                                                              | ((2U 
                                                                  & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                     >> 5U)) 
                                                                 | (1U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 7U))))))))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_h87c494dc_7_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_h87c494dc_7_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_h87c494dc_7_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_h87c494dc_7_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_h87c494dc_7_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_h87c494dc_7_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_h87c494dc_7_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x18U)))))))))))))));
    vlSelfRef.g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5))))))) 
                                              << 3U))))));
    vlSelfRef.g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11))))))) 
                                              << 3U))))));
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 
        (0xfffffffU & (VL_SHIFTL_III(28,28,32, (0xffffffU 
                                                & (VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                    ? vlSelfRef.__VdfgRegularize_h87c494dc_7_16
                                                    : __VdfgRegularize_h87c494dc_7_17)), 3U) 
                       + (((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                            ? __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller)))) 
                          + (1U & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    __PVT__final_add__DOT__adder__DOT__close_sigOut 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,32, ((0x3ffffffU 
                                                  & __VdfgRegularize_h87c494dc_7_0) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.final_add__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ (IData)((vlSelfRef.__PVT__red_in
                                          [2U][0U] 
                                          >> 0x16U))) 
                              & (7U == (7U & (IData)(
                                                     (vlSelfRef.__PVT__red_in
                                                      [2U]
                                                      [0U] 
                                                      >> 0x1dU))))) 
                             | (((~ (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                     >> 0x1fU)) & (0x1c0U 
                                                   == 
                                                   (0x1c0U 
                                                    & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]))) 
                                | ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                   & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
                                      & (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB))))))) 
            << 0x2cU) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__red_in
                                                                       [2U]
                                                                       [0U] 
                                                                       >> 0x17U))), 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__red_in
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 7U)) 
                                              & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                 >> 6U))))) 
                          << 0x2bU) | (((QData)((IData)(__PVT__final_add__DOT__s1_isInf)) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         ((IData)(__PVT__final_add__DOT__adder__DOT__addZeros) 
                                                          | ((~ (IData)(__PVT__final_add__DOT__s1_isInf)) 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))))) 
                                                                & (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns) 
                                                                  | (IData)(__PVT__final_add__DOT__adder__DOT__isInfA)) 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__red_in
                                                                            [2U]
                                                                            [0U] 
                                                                            >> 0x20U))) 
                                                                | (((IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB) 
                                                                    & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                       >> 9U)) 
                                                                   | ((~ 
                                                                       ((IData)(__PVT__final_add__DOT__s1_isInf) 
                                                                        | (IData)(__PVT__final_add__DOT__adder__DOT__addZeros))) 
                                                                      & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                          & ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                             & ((IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))))) 
                                                                         | ((~ (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)) 
                                                                            & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                                                ? 
                                                                               (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                                >> 9U)
                                                                                : (IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x3ffU 
                                                                & ((((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                     | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])
                                                                     : 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                   - 
                                                                   ((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                     : 
                                                                    (1U 
                                                                     & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)))))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (0x3ffffff8U 
                                                                 & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                      ? __PVT__final_add__DOT__adder__DOT__close_sigOut
                                                                      : 
                                                                     (0xfffffffU 
                                                                      & ((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                                                                          ? 
                                                                         (VL_SHIFTR_III(28,28,32, __PVT__final_add__DOT__adder__DOT__far_sigSum, 1U) 
                                                                          | (1U 
                                                                             & __PVT__final_add__DOT__adder__DOT__far_sigSum))
                                                                          : __PVT__final_add__DOT__adder__DOT__far_sigSum))) 
                                                                    << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT__fedp__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__final_add__DOT__s1_isInf;
    __PVT__final_add__DOT__s1_isInf = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isInfA;
    __PVT__final_add__DOT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__eqSigns;
    __PVT__final_add__DOT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__final_add__DOT__adder__DOT__sDiffExps;
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isMaxAlign;
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__closeSubMags;
    __PVT__final_add__DOT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sSigSum;
    __PVT__final_add__DOT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sigOut;
    __PVT__final_add__DOT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__final_add__DOT__adder__DOT__far_sigSum;
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__addZeros;
    __PVT__final_add__DOT__adder__DOT__addZeros = 0;
    SData/*9:0*/ final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2;
    final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    IData/*26:0*/ __VdfgRegularize_h87c494dc_7_0;
    __VdfgRegularize_h87c494dc_7_0 = 0;
    IData/*24:0*/ __VdfgRegularize_h87c494dc_7_1;
    __VdfgRegularize_h87c494dc_7_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h87c494dc_7_17;
    __VdfgRegularize_h87c494dc_7_17 = 0;
    // Body
    vlSelfRef.__PVT__red_in[1U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[1U][1U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[2U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                             >> 0x1dU))))
                                                      ? 
                                                     (0x1e0U 
                                                      | (0x1fU 
                                                         & (~ 
                                                            vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                            [0U])))
                                                      : 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                            >> 0x1dU)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                                >> 0x1dU))))
                                                         ? 2U
                                                         : 1U))));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_2 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_5 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_8 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_11 = (0x3ffU 
                                                 & ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    VL_SHIFTL_III(10,10,32, 
                                                                  (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 6U)) 
                                                                   << 
                                                                   vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                   [0U]), 1U)
                                                     : 
                                                    ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                      << 0x1aU) 
                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 6U))));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x1fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x20U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x21U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x22U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x19U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x23U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x18U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x24U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x17U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x25U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x16U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x26U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x15U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x27U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x14U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x28U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x13U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x29U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x12U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2aU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x11U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2bU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x10U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2cU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xfU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2dU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xeU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2eU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xdU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xcU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x30U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xbU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x31U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xaU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x32U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 9U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x33U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 8U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x34U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 7U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x35U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 6U));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__final_add__DOT__adder__DOT__addZeros = (
                                                   (0U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 6U)) 
                                                   & (0U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 6U)));
    __PVT__final_add__DOT__adder__DOT__isInfA = ((~ (IData)(
                                                            (vlSelfRef.__PVT__red_in
                                                             [2U]
                                                             [0U] 
                                                             >> 0x1dU))) 
                                                 & (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 7U)));
    __PVT__final_add__DOT__adder__DOT__eqSigns = ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__red_in
                                                              [2U]
                                                              [0U] 
                                                              >> 0x20U))) 
                                                  == 
                                                  (1U 
                                                   & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                      >> 9U)));
    __VdfgRegularize_h87c494dc_7_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__red_in
                                                                         [2U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSelfRef.__PVT__red_in
                                                            [2U]
                                                            [0U])));
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 
        (0x3ffU & ((0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                      [2U][0U] >> 0x17U))) 
                   - (0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_6 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_9 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    __PVT__final_add__DOT__s1_isInf = ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                       | (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_h87c494dc_7_1 = __VdfgRegularize_h87c494dc_7_17;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]) 
                         - (0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                              [2U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_h87c494dc_7_1 = vlSelfRef.__VdfgRegularize_h87c494dc_7_16;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps));
    }
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 
        ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
         & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
            | (0U == (0x1fU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))));
    __PVT__final_add__DOT__adder__DOT__close_sSigSum 
        = (0x7ffffffU & ((((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))) 
                            & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))
                            ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 2U)
                            : 0U) | ((((~ (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)) 
                                       & VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                       ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 1U)
                                       : 0U) | (VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                 ? __VdfgRegularize_h87c494dc_7_17
                                                 : 0U))) 
                         - VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h87c494dc_7_16, 1U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    __PVT__final_add__DOT__adder__DOT__closeSubMags 
        = ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
           & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)) 
              & (1U >= (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_h87c494dc_7_1 
                                          << 5U)) >> 
                          ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                            ? 0x1fU : (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_h87c494dc_7_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__final_add__DOT__adder__DOT__close_sSigSum)
                                        : __PVT__final_add__DOT__adder__DOT__close_sSigSum));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (__PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (__VdfgRegularize_h87c494dc_7_1 
                                                              >> 0x16U)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (__VdfgRegularize_h87c494dc_7_1 
                                                                 >> 0x12U)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (__VdfgRegularize_h87c494dc_7_1 
                                                                    >> 0xeU)))) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (__VdfgRegularize_h87c494dc_7_1 
                                                                       >> 0xaU)))) 
                                                          << 3U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (__VdfgRegularize_h87c494dc_7_1 
                                                                          >> 6U)))) 
                                                             << 2U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (__VdfgRegularize_h87c494dc_7_1 
                                                                             >> 2U)))) 
                                                                << 1U) 
                                                               | (0U 
                                                                  != 
                                                                  (3U 
                                                                   & __VdfgRegularize_h87c494dc_7_1)))))))) 
                                               & ((0x40U 
                                                   & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                     ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                       ? 7U
                                                                       : 
                                                                      (7U 
                                                                       & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                          >> 2U)))) 
                                                      << 5U)) 
                                                  | ((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                          ? 7U
                                                                          : 
                                                                         (7U 
                                                                          & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                             >> 2U)))) 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                             ? 7U
                                                                             : 
                                                                            (7U 
                                                                             & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                            << 1U)) 
                                                        | ((8U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                ? 7U
                                                                                : 
                                                                               (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                               >> 1U)) 
                                                           | ((4U 
                                                               & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                  >> 3U)) 
                                                              | ((2U 
                                                                  & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                     >> 5U)) 
                                                                 | (1U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 7U))))))))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_h87c494dc_7_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_h87c494dc_7_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_h87c494dc_7_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_h87c494dc_7_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_h87c494dc_7_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_h87c494dc_7_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_h87c494dc_7_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x18U)))))))))))))));
    vlSelfRef.g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5))))))) 
                                              << 3U))))));
    vlSelfRef.g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__0__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11))))))) 
                                              << 3U))))));
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 
        (0xfffffffU & (VL_SHIFTL_III(28,28,32, (0xffffffU 
                                                & (VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                    ? vlSelfRef.__VdfgRegularize_h87c494dc_7_16
                                                    : __VdfgRegularize_h87c494dc_7_17)), 3U) 
                       + (((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                            ? __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller)))) 
                          + (1U & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    __PVT__final_add__DOT__adder__DOT__close_sigOut 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,32, ((0x3ffffffU 
                                                  & __VdfgRegularize_h87c494dc_7_0) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.final_add__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ (IData)((vlSelfRef.__PVT__red_in
                                          [2U][0U] 
                                          >> 0x16U))) 
                              & (7U == (7U & (IData)(
                                                     (vlSelfRef.__PVT__red_in
                                                      [2U]
                                                      [0U] 
                                                      >> 0x1dU))))) 
                             | (((~ (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                     >> 0x1fU)) & (0x1c0U 
                                                   == 
                                                   (0x1c0U 
                                                    & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]))) 
                                | ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                   & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
                                      & (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB))))))) 
            << 0x2cU) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__red_in
                                                                       [2U]
                                                                       [0U] 
                                                                       >> 0x17U))), 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__red_in
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 7U)) 
                                              & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                 >> 6U))))) 
                          << 0x2bU) | (((QData)((IData)(__PVT__final_add__DOT__s1_isInf)) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         ((IData)(__PVT__final_add__DOT__adder__DOT__addZeros) 
                                                          | ((~ (IData)(__PVT__final_add__DOT__s1_isInf)) 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))))) 
                                                                & (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns) 
                                                                  | (IData)(__PVT__final_add__DOT__adder__DOT__isInfA)) 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__red_in
                                                                            [2U]
                                                                            [0U] 
                                                                            >> 0x20U))) 
                                                                | (((IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB) 
                                                                    & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                       >> 9U)) 
                                                                   | ((~ 
                                                                       ((IData)(__PVT__final_add__DOT__s1_isInf) 
                                                                        | (IData)(__PVT__final_add__DOT__adder__DOT__addZeros))) 
                                                                      & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                          & ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                             & ((IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))))) 
                                                                         | ((~ (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)) 
                                                                            & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                                                ? 
                                                                               (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                                >> 9U)
                                                                                : (IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x3ffU 
                                                                & ((((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                     | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])
                                                                     : 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                   - 
                                                                   ((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                     : 
                                                                    (1U 
                                                                     & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)))))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (0x3ffffff8U 
                                                                 & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                      ? __PVT__final_add__DOT__adder__DOT__close_sigOut
                                                                      : 
                                                                     (0xfffffffU 
                                                                      & ((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                                                                          ? 
                                                                         (VL_SHIFTR_III(28,28,32, __PVT__final_add__DOT__adder__DOT__far_sigSum, 1U) 
                                                                          | (1U 
                                                                             & __PVT__final_add__DOT__adder__DOT__far_sigSum))
                                                                          : __PVT__final_add__DOT__adder__DOT__far_sigSum))) 
                                                                    << 3U))))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1(Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_tcu_fedp_bhf__Ld_N2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT__fedp__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__final_add__DOT__s1_isInf;
    __PVT__final_add__DOT__s1_isInf = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isInfA;
    __PVT__final_add__DOT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__eqSigns;
    __PVT__final_add__DOT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__final_add__DOT__adder__DOT__sDiffExps;
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__isMaxAlign;
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__closeSubMags;
    __PVT__final_add__DOT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sSigSum;
    __PVT__final_add__DOT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__close_sigOut;
    __PVT__final_add__DOT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller;
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__final_add__DOT__adder__DOT__far_sigSum;
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__final_add__DOT__adder__DOT__addZeros;
    __PVT__final_add__DOT__adder__DOT__addZeros = 0;
    SData/*9:0*/ final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2;
    final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp = 0;
    SData/*8:0*/ __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp;
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp = 0;
    IData/*26:0*/ __VdfgRegularize_h87c494dc_7_0;
    __VdfgRegularize_h87c494dc_7_0 = 0;
    IData/*24:0*/ __VdfgRegularize_h87c494dc_7_1;
    __VdfgRegularize_h87c494dc_7_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h87c494dc_7_17;
    __VdfgRegularize_h87c494dc_7_17 = 0;
    // Body
    vlSelfRef.__PVT__red_in[1U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[1U][1U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__red_in[2U][0U] = (0x1ffffffffULL 
                                       & (vlSelf->__PVT__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add->__PVT__pipe_rnd__DOT__g_shift_register__DOT__g_shift__DOT__pipe 
                                          >> 5U));
    vlSelfRef.__PVT__conv_c__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           << 3U) 
                                                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                             >> 0x1dU))))
                                                      ? 
                                                     (0x1e0U 
                                                      | (0x1fU 
                                                         & (~ 
                                                            vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                            [0U])))
                                                      : 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                          << 3U) 
                                                         | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                            >> 0x1dU)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                                                                >> 0x1dU))))
                                                         ? 2U
                                                         : 1U))));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                 >> 6U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0xfU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xfU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x10U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xeU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x11U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xdU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x12U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x13U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xbU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x14U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x15U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 9U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x16U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 8U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x17U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 7U));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x18U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                 >> 6U));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_2 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_5 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_8 = (0x3ffU 
                                                & ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   VL_SHIFTL_III(10,10,32, 
                                                                 (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                    << 0x1aU) 
                                                                   | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                      >> 6U)) 
                                                                  << 
                                                                  vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                  [0U]), 1U)
                                                    : 
                                                   ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                     << 0x1aU) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_11 = (0x3ffU 
                                                 & ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                         >> 0x10U)))
                                                     ? 
                                                    VL_SHIFTL_III(10,10,32, 
                                                                  (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                       >> 6U)) 
                                                                   << 
                                                                   vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                   [0U]), 1U)
                                                     : 
                                                    ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                      << 0x1aU) 
                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                        >> 6U))));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x1fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x20U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1bU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x21U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x22U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x19U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x23U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x18U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x24U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x17U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x25U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x16U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x26U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x15U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x27U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x14U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x28U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x13U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x29U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x12U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2aU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x11U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2bU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0x10U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2cU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xfU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2dU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xeU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2eU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xdU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x2fU] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xcU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x30U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xbU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x31U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 0xaU));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x32U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 9U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x33U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 8U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x34U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 7U));
    vlSelfRef.__PVT__conv_c__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0x35U] 
        = (1U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                 >> 6U));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x10U))) ? 
                      (0x1f0U | (0xfU & (~ vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__clz__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                         [0U]))) : 
                      (0xffU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                >> 0x10U))) + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x10U)))
                                                   ? 2U
                                                   : 1U))));
    __PVT__final_add__DOT__adder__DOT__addZeros = (
                                                   (0U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 6U)) 
                                                   & (0U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 6U)));
    __PVT__final_add__DOT__adder__DOT__isInfA = ((~ (IData)(
                                                            (vlSelfRef.__PVT__red_in
                                                             [2U]
                                                             [0U] 
                                                             >> 0x1dU))) 
                                                 & (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__red_in
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))), 7U)));
    __PVT__final_add__DOT__adder__DOT__eqSigns = ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__red_in
                                                              [2U]
                                                              [0U] 
                                                              >> 0x20U))) 
                                                  == 
                                                  (1U 
                                                   & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                      >> 9U)));
    __VdfgRegularize_h87c494dc_7_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__red_in
                                                                         [2U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSelfRef.__PVT__red_in
                                                            [2U]
                                                            [0U])));
    __PVT__final_add__DOT__adder__DOT__sDiffExps = 
        (0x3ffU & ((0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                      [2U][0U] >> 0x17U))) 
                   - (0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_0 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_3 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_6 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp) 
                                                     >> 6U))));
    vlSelfRef.__VdfgRegularize_h87c494dc_0_9 = (7U 
                                                & ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                        >> 7U)))
                                                    ? 
                                                   (6U 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                           >> 6U))))
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xffffc0U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])))
                                                     ? 0U
                                                     : 
                                                    ((IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp) 
                                                     >> 6U))));
    __PVT__final_add__DOT__s1_isInf = ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                       | (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_h87c494dc_7_1 = __VdfgRegularize_h87c494dc_7_17;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]) 
                         - (0x1ffU & (IData)((vlSelfRef.__PVT__red_in
                                              [2U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_h87c494dc_7_1 = vlSelfRef.__VdfgRegularize_h87c494dc_7_16;
        final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps));
    }
    __PVT__final_add__DOT__adder__DOT__isMaxAlign = 
        ((0U != VL_SHIFTRS_III(32,32,32, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
         & ((0xffffffffU != VL_SHIFTRS_III(32,32,32, 
                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)), 5U)) 
            | (0U == (0x1fU & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))));
    __PVT__final_add__DOT__adder__DOT__close_sSigSum 
        = (0x7ffffffU & ((((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))) 
                            & (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))
                            ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 2U)
                            : 0U) | ((((~ (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)) 
                                       & VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                       ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_h87c494dc_7_17, 1U)
                                       : 0U) | (VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                 ? __VdfgRegularize_h87c494dc_7_17
                                                 : 0U))) 
                         - VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h87c494dc_7_16, 1U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_a__DOT__adjustedExp)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp 
        = (((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9) 
            << 6U) | (0x3fU & (IData)(__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__g_in_ieee__DOT__from_ieee_b__DOT__adjustedExp)));
    __PVT__final_add__DOT__adder__DOT__closeSubMags 
        = ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
           & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)) 
              & (1U >= (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_h87c494dc_7_1 
                                          << 5U)) >> 
                          ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                            ? 0x1fU : (0x1fU & (IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_h87c494dc_7_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__final_add__DOT__adder__DOT__close_sSigSum)
                                        : __PVT__final_add__DOT__adder__DOT__close_sSigSum));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (__PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & __PVT__final_add__DOT__adder__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != ((((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & (__VdfgRegularize_h87c494dc_7_1 
                                                              >> 0x16U)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (__VdfgRegularize_h87c494dc_7_1 
                                                                 >> 0x12U)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (__VdfgRegularize_h87c494dc_7_1 
                                                                    >> 0xeU)))) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (__VdfgRegularize_h87c494dc_7_1 
                                                                       >> 0xaU)))) 
                                                          << 3U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (__VdfgRegularize_h87c494dc_7_1 
                                                                          >> 6U)))) 
                                                             << 2U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (__VdfgRegularize_h87c494dc_7_1 
                                                                             >> 2U)))) 
                                                                << 1U) 
                                                               | (0U 
                                                                  != 
                                                                  (3U 
                                                                   & __VdfgRegularize_h87c494dc_7_1)))))))) 
                                               & ((0x40U 
                                                   & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                     ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                       ? 7U
                                                                       : 
                                                                      (7U 
                                                                       & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                          >> 2U)))) 
                                                      << 5U)) 
                                                  | ((0x20U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                          ? 7U
                                                                          : 
                                                                         (7U 
                                                                          & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                             >> 2U)))) 
                                                         << 3U)) 
                                                     | ((0x10U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                             ? 7U
                                                                             : 
                                                                            (7U 
                                                                             & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                            << 1U)) 
                                                        | ((8U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                ? 7U
                                                                                : 
                                                                               (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                               >> 1U)) 
                                                           | ((4U 
                                                               & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                  >> 3U)) 
                                                              | ((2U 
                                                                  & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                     >> 5U)) 
                                                                 | (1U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__final_add__DOT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(final_add__DOT__adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 7U))))))))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_h87c494dc_7_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_h87c494dc_7_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_h87c494dc_7_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_h87c494dc_7_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_h87c494dc_7_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_h87c494dc_7_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_h87c494dc_7_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_h87c494dc_7_0 
                                                                                >> 0x18U)))))))))))))));
    vlSelfRef.g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_0)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_3))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_2)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__0__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_5))))))) 
                                              << 3U))))));
    vlSelfRef.g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8) 
                                  >> 9U)) & (7U == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6))) 
                             | (((~ ((IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11) 
                                     >> 9U)) & (7U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))) 
                                | (((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                    & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
                                   | ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB) 
                                      & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)))))))) 
            << 0x27U) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_6)) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_9))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfA) 
                                                         | (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__isInfB)))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         ((0U 
                                                           == 
                                                           VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                          | (0U 
                                                             == 
                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                                                 ^ 
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__2__KET____DOT__g_j__BRA__1__KET____DOT_____05Fbuffer_ex141__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U]) 
                                                                >> 0x18U)))) 
                                            << 0x23U) 
                                           | ((QData)((IData)(
                                                              ((((VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp)) 
                                                                  + 
                                                                  VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp))) 
                                                                 - (IData)(0x100U)) 
                                                                << 0x16U) 
                                                               | (0x3fffffU 
                                                                  & ((((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_8)) 
                                                                     * 
                                                                     (((0U 
                                                                        != 
                                                                        VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__g_prod__BRA__2__KET____DOT__g_tf32_mul__DOT__tf32_mul__DOT__multiplier__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                       << 0xaU) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h87c494dc_0_11))))))) 
                                              << 3U))))));
    __PVT__final_add__DOT__adder__DOT__far_sigSum = 
        (0xfffffffU & (VL_SHIFTL_III(28,28,32, (0xffffffU 
                                                & (VL_GTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                    ? vlSelfRef.__VdfgRegularize_h87c494dc_7_16
                                                    : __VdfgRegularize_h87c494dc_7_17)), 3U) 
                       + (((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                            ? __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller
                            : (0x8000000U | (0x7ffffffU 
                                             & (~ __PVT__final_add__DOT__adder__DOT__far_alignedSigSmaller)))) 
                          + (1U & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns))))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    __PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    __PVT__final_add__DOT__adder__DOT__close_sigOut 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,32, ((0x3ffffffU 
                                                  & __VdfgRegularize_h87c494dc_7_0) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.final_add__DOT____Vcellinp__pipe_add__data_in 
        = (((QData)((IData)((((~ (IData)((vlSelfRef.__PVT__red_in
                                          [2U][0U] 
                                          >> 0x16U))) 
                              & (7U == (7U & (IData)(
                                                     (vlSelfRef.__PVT__red_in
                                                      [2U]
                                                      [0U] 
                                                      >> 0x1dU))))) 
                             | (((~ (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[9U] 
                                     >> 0x1fU)) & (0x1c0U 
                                                   == 
                                                   (0x1c0U 
                                                    & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]))) 
                                | ((IData)(__PVT__final_add__DOT__adder__DOT__isInfA) 
                                   & ((~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)) 
                                      & (IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB))))))) 
            << 0x2cU) | (((QData)((IData)((((3U == 
                                             VL_SHIFTR_III(32,32,32, 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__red_in
                                                                       [2U]
                                                                       [0U] 
                                                                       >> 0x17U))), 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__red_in
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                           | ((3U == 
                                               VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU]), 7U)) 
                                              & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                 >> 6U))))) 
                          << 0x2bU) | (((QData)((IData)(__PVT__final_add__DOT__s1_isInf)) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         ((IData)(__PVT__final_add__DOT__adder__DOT__addZeros) 
                                                          | ((~ (IData)(__PVT__final_add__DOT__s1_isInf)) 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))))) 
                                                                & (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)))))) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns) 
                                                                  | (IData)(__PVT__final_add__DOT__adder__DOT__isInfA)) 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__red_in
                                                                            [2U]
                                                                            [0U] 
                                                                            >> 0x20U))) 
                                                                | (((IData)(vlSelfRef.__PVT__final_add__DOT__adder__DOT__isInfB) 
                                                                    & (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                       >> 9U)) 
                                                                   | ((~ 
                                                                       ((IData)(__PVT__final_add__DOT__s1_isInf) 
                                                                        | (IData)(__PVT__final_add__DOT__adder__DOT__addZeros))) 
                                                                      & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                          & ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__PVT__final_add__DOT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                             & ((IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__final_add__DOT__adder__DOT__close_sSigSum))))) 
                                                                         | ((~ (IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)) 
                                                                            & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps)))
                                                                                ? 
                                                                               (vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU] 
                                                                                >> 9U)
                                                                                : (IData)(
                                                                                (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x3ffU 
                                                                & ((((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags) 
                                                                     | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__final_add__DOT__adder__DOT__sDiffExps))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & vlSelfRef.__PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0xaU])
                                                                     : 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__red_in
                                                                                [2U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                   - 
                                                                   ((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                     ? 
                                                                    (0x1fU 
                                                                     & VL_SHIFTL_III(5,5,32, (IData)(__PVT__final_add__DOT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                     : 
                                                                    (1U 
                                                                     & (~ (IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)))))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                (0x3ffffff8U 
                                                                 & (((IData)(__PVT__final_add__DOT__adder__DOT__closeSubMags)
                                                                      ? __PVT__final_add__DOT__adder__DOT__close_sigOut
                                                                      : 
                                                                     (0xfffffffU 
                                                                      & ((IData)(__PVT__final_add__DOT__adder__DOT__eqSigns)
                                                                          ? 
                                                                         (VL_SHIFTR_III(28,28,32, __PVT__final_add__DOT__adder__DOT__far_sigSum, 1U) 
                                                                          | (1U 
                                                                             & __PVT__final_add__DOT__adder__DOT__far_sigSum))
                                                                          : __PVT__final_add__DOT__adder__DOT__far_sigSum))) 
                                                                    << 3U))))))))));
}
