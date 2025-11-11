// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2.h"
#include "Vrtlsim_shim__Syms.h"

extern const VlWide<17>/*543:0*/ Vrtlsim_shim__ConstPool__CONST_h3dcda147_0;
extern const VlWide<17>/*543:0*/ Vrtlsim_shim__ConstPool__CONST_h00a543f7_0;

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__s1_isInf;
    __PVT__s1_isInf = 0;
    CData/*0:0*/ __PVT__s1_isZero;
    __PVT__s1_isZero = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfA;
    __PVT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfB;
    __PVT__adder__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__adder__DOT__eqSigns;
    __PVT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__adder__DOT__sDiffExps;
    __PVT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__adder__DOT__isMaxAlign;
    __PVT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__adder__DOT__closeSubMags;
    __PVT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sSigSum;
    __PVT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sigOut;
    __PVT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__adder__DOT__far_alignedSigSmaller;
    __PVT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__adder__DOT__far_sigSum;
    __PVT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__adder__DOT__addZeros;
    __PVT__adder__DOT__addZeros = 0;
    SData/*9:0*/ adder__DOT____VdfgRegularize_h930a94f0_0_2;
    adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
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
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_1;
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_4;
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_5;
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 0;
    IData/*26:0*/ __VdfgRegularize_hd8e410d4_0_0;
    __VdfgRegularize_hd8e410d4_0_0 = 0;
    IData/*24:0*/ __VdfgRegularize_hd8e410d4_0_1;
    __VdfgRegularize_hd8e410d4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_16;
    __VdfgRegularize_hd8e410d4_0_16 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_17;
    __VdfgRegularize_hd8e410d4_0_17 = 0;
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
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 0xdU))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU))));
    __PVT__rounding__DOT__roundMagUp = ((IData)(((0x4000U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                 & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x15U))) 
                                        | (IData)((
                                                   (0x6000U 
                                                    == 
                                                    (0xe000U 
                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x15U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
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
    __PVT__adder__DOT__addZeros = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [0U] 
                                                                    >> 0x17U))), 6U)) 
                                   & (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                      [0U]
                                                                      [1U] 
                                                                      >> 0x17U))), 6U)));
    __PVT__adder__DOT__isInfA = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [0U][0U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [0U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__isInfB = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [0U][1U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [1U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__eqSigns = ((1U & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                 [0U]
                                                 [0U] 
                                                 >> 0x20U))) 
                                  == (1U & (IData)(
                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                    [0U]
                                                    [1U] 
                                                    >> 0x20U))));
    __VdfgRegularize_hd8e410d4_0_16 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [1U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [1U])));
    __VdfgRegularize_hd8e410d4_0_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [0U])));
    __PVT__adder__DOT__sDiffExps = (0x3ffU & ((0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                          [0U]
                                                          [0U] 
                                                          >> 0x17U))) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [1U] 
                                                            >> 0x17U)))));
    __PVT__rounding__DOT__commonCase = ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                        & (0U == (0xc00000U 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0xaU)));
    __PVT__s1_isInf = ((IData)(__PVT__adder__DOT__isInfA) 
                       | (IData)(__PVT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_17;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                            [0U][1U] 
                                            >> 0x17U))) 
                         - (0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                              [0U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_16;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__adder__DOT__sDiffExps));
    }
    __PVT__adder__DOT__isMaxAlign = ((0U != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                     & ((0xffffffffU 
                                         != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                        | (0U == (0x1fU 
                                                  & (IData)(__PVT__adder__DOT__sDiffExps)))));
    __PVT__adder__DOT__close_sSigSum = (0x7ffffffU 
                                        & ((((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))) 
                                              & (IData)(__PVT__adder__DOT__sDiffExps))
                                              ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 2U)
                                              : 0U) 
                                            | ((((~ (IData)(__PVT__adder__DOT__sDiffExps)) 
                                                 & VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                 ? 
                                                VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 1U)
                                                 : 0U) 
                                               | (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                   ? __VdfgRegularize_hd8e410d4_0_17
                                                   : 0U))) 
                                           - VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_16, 1U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (VL_SHIFTR_III(27,27,32, 
                                                 (3U 
                                                  | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                     << 2U)), 1U) 
                                   >> 3U)))) | (0U 
                                                != 
                                                (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)) 
                                                 & (1U 
                                                    | (6U 
                                                       & (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                          << 1U))))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                    << 2U)));
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 
        (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_hd8e410d4_0_1 
                                        << 5U)) >> 
                        ((IData)(__PVT__adder__DOT__isMaxAlign)
                          ? 0x1fU : (0x1fU & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__adder__DOT__closeSubMags = ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                       & ((~ (IData)(__PVT__adder__DOT__isMaxAlign)) 
                                          & (1U >= 
                                             (0x1fU 
                                              & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_hd8e410d4_0_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__adder__DOT__close_sSigSum)
                                        : __PVT__adder__DOT__close_sSigSum));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (__PVT__rounding__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                (7U 
                                                 & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)) 
                                                    & __PVT__rounding__DOT__genblk2__DOT__roundPosMask))));
    __PVT__adder__DOT__far_alignedSigSmaller = ((0x7fffffeU 
                                                 & (__PVT__adder__DOT__far_mainAlignedSigSmaller 
                                                    >> 2U)) 
                                                | ((0U 
                                                    != 
                                                    (7U 
                                                     & __PVT__adder__DOT__far_mainAlignedSigSmaller)) 
                                                   | (0U 
                                                      != 
                                                      ((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_1 
                                                                      >> 0x16U)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (__VdfgRegularize_hd8e410d4_0_1 
                                                                         >> 0x12U)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfU 
                                                                         & (__VdfgRegularize_hd8e410d4_0_1 
                                                                            >> 0xeU)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xfU 
                                                                            & (__VdfgRegularize_hd8e410d4_0_1 
                                                                               >> 0xaU)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xfU 
                                                                               & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 6U)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 2U)))) 
                                                                        << 1U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & __VdfgRegularize_hd8e410d4_0_1)))))))) 
                                                       & ((0x40U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                               ? 7U
                                                                               : 
                                                                              (7U 
                                                                               & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                 << 3U)) 
                                                             | ((0x10U 
                                                                 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 1U)) 
                                                                   | ((4U 
                                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                          >> 3U)) 
                                                                      | ((2U 
                                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                             >> 5U)) 
                                                                         | (1U 
                                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                               >> 7U))))))))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_hd8e410d4_0_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_hd8e410d4_0_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_hd8e410d4_0_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_hd8e410d4_0_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_hd8e410d4_0_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_hd8e410d4_0_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x18U)))))))))))))));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__adder__DOT__far_sigSum = (0xfffffffU & (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 (0xffffffU 
                                                                  & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                      ? __VdfgRegularize_hd8e410d4_0_16
                                                                      : __VdfgRegularize_hd8e410d4_0_17)), 3U) 
                                                   + 
                                                   (((IData)(__PVT__adder__DOT__eqSigns)
                                                      ? __PVT__adder__DOT__far_alignedSigSmaller
                                                      : 
                                                     (0x8000000U 
                                                      | (0x7ffffffU 
                                                         & (~ __PVT__adder__DOT__far_alignedSigSmaller)))) 
                                                    + 
                                                    (1U 
                                                     & (~ (IData)(__PVT__adder__DOT__eqSigns))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                        >> 0x10U))) 
                                                                 | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                 << 2U))) 
                                       & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           << 0x10U) 
                                          | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                             >> 0x10U)))), 2U) 
             | ((IData)(((0xc000U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x400U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 1U)
                         : rounding__DOT____VdfgRegularize_h4299fe10_0_5));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                             >> 0xbU))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 0x18U))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlSelfRef.rounding__DOT____VdfgRegularize_h4299fe10_0_10 
        = ((~ (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
               >> 0x16U)) & VL_LTES_III(32, 0x6bU, 
                                        VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 0xdU))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    __PVT__adder__DOT__close_sigOut = (0x7ffffffU & 
                                       VL_SHIFTL_III(27,27,32, 
                                                     ((0x3ffffffU 
                                                       & __VdfgRegularize_hd8e410d4_0_0) 
                                                      << 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0x17U) | ((IData)(__PVT__rounding__DOT__overflow) 
                               & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            >> 0x15U)) 
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
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xbU))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x400U 
                                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 1U))) 
                                                                & (((0x400U 
                                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                                          & ((0x400U 
                                                                              & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x12U)
                                                                              : 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x11U))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xaU) 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x12U)) 
                                                                               | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x10U)))))))))) 
                                                              & ((0x400U 
                                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h4299fe10_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
    __PVT__s1_isZero = ((IData)(__PVT__adder__DOT__addZeros) 
                        | ((~ (IData)(__PVT__s1_isInf)) 
                           & ((~ (IData)((0U != (3U 
                                                 & (__PVT__adder__DOT__close_sigOut 
                                                    >> 0x19U))))) 
                              & (IData)(__PVT__adder__DOT__closeSubMags))));
    vlSelfRef.__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                                (((~ (IData)(
                                                                             (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x16U))) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x1dU))))) 
                                                                 | (((~ (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x16U))) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x1dU))))) 
                                                                    | ((IData)(__PVT__adder__DOT__isInfA) 
                                                                       & ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                                                          & (IData)(__PVT__adder__DOT__isInfB))))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x1dU))) 
                                                                    | ((3U 
                                                                        == 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x1dU)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(__PVT__s1_isInf)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(__PVT__s1_isZero)) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(__PVT__adder__DOT__eqSigns) 
                                                                                | (IData)(__PVT__adder__DOT__isInfA)) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U))) 
                                                                                | (((IData)(__PVT__adder__DOT__isInfB) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x20U))) 
                                                                                | ((~ 
                                                                                ((IData)(__PVT__s1_isInf) 
                                                                                | (IData)(__PVT__adder__DOT__addZeros))) 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__PVT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))))) 
                                                                                | ((~ (IData)(__PVT__adder__DOT__closeSubMags)) 
                                                                                & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                                 ? (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & ((((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                                                 ? 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x17U)))
                                                                                 : 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                                - 
                                                                                ((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                                 : 
                                                                                (1U 
                                                                                & (~ (IData)(__PVT__adder__DOT__eqSigns)))))))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (0x3ffffff8U 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? __PVT__adder__DOT__close_sigOut
                                                                                 : 
                                                                                (0xfffffffU 
                                                                                & ((IData)(__PVT__adder__DOT__eqSigns)
                                                                                 ? 
                                                                                (VL_SHIFTR_III(28,28,32, __PVT__adder__DOT__far_sigSum, 1U) 
                                                                                | (1U 
                                                                                & __PVT__adder__DOT__far_sigSum))
                                                                                 : __PVT__adder__DOT__far_sigSum))) 
                                                                                << 3U))))))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add__0(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__s1_isInf;
    __PVT__s1_isInf = 0;
    CData/*0:0*/ __PVT__s1_isZero;
    __PVT__s1_isZero = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfA;
    __PVT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfB;
    __PVT__adder__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__adder__DOT__eqSigns;
    __PVT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__adder__DOT__sDiffExps;
    __PVT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__adder__DOT__isMaxAlign;
    __PVT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__adder__DOT__closeSubMags;
    __PVT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sSigSum;
    __PVT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sigOut;
    __PVT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__adder__DOT__far_alignedSigSmaller;
    __PVT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__adder__DOT__far_sigSum;
    __PVT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__adder__DOT__addZeros;
    __PVT__adder__DOT__addZeros = 0;
    SData/*9:0*/ adder__DOT____VdfgRegularize_h930a94f0_0_2;
    adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
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
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_1;
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_4;
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_5;
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 0;
    IData/*26:0*/ __VdfgRegularize_hd8e410d4_0_0;
    __VdfgRegularize_hd8e410d4_0_0 = 0;
    IData/*24:0*/ __VdfgRegularize_hd8e410d4_0_1;
    __VdfgRegularize_hd8e410d4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_16;
    __VdfgRegularize_hd8e410d4_0_16 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_17;
    __VdfgRegularize_hd8e410d4_0_17 = 0;
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
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 0xdU))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU))));
    __PVT__rounding__DOT__roundMagUp = ((IData)(((0x4000U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                 & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x15U))) 
                                        | (IData)((
                                                   (0x6000U 
                                                    == 
                                                    (0xe000U 
                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x15U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
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
    __PVT__adder__DOT__addZeros = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [2U] 
                                                                    >> 0x17U))), 6U)) 
                                   & (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                      [0U]
                                                                      [3U] 
                                                                      >> 0x17U))), 6U)));
    __PVT__adder__DOT__isInfA = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [0U][2U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [2U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__isInfB = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [0U][3U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [3U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__eqSigns = ((1U & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                 [0U]
                                                 [2U] 
                                                 >> 0x20U))) 
                                  == (1U & (IData)(
                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                    [0U]
                                                    [3U] 
                                                    >> 0x20U))));
    __VdfgRegularize_hd8e410d4_0_16 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [3U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [3U])));
    __VdfgRegularize_hd8e410d4_0_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [2U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [2U])));
    __PVT__adder__DOT__sDiffExps = (0x3ffU & ((0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                          [0U]
                                                          [2U] 
                                                          >> 0x17U))) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [3U] 
                                                            >> 0x17U)))));
    __PVT__rounding__DOT__commonCase = ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                        & (0U == (0xc00000U 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0xaU)));
    __PVT__s1_isInf = ((IData)(__PVT__adder__DOT__isInfA) 
                       | (IData)(__PVT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_17;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                            [0U][3U] 
                                            >> 0x17U))) 
                         - (0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                              [0U][2U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_16;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__adder__DOT__sDiffExps));
    }
    __PVT__adder__DOT__isMaxAlign = ((0U != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                     & ((0xffffffffU 
                                         != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                        | (0U == (0x1fU 
                                                  & (IData)(__PVT__adder__DOT__sDiffExps)))));
    __PVT__adder__DOT__close_sSigSum = (0x7ffffffU 
                                        & ((((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))) 
                                              & (IData)(__PVT__adder__DOT__sDiffExps))
                                              ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 2U)
                                              : 0U) 
                                            | ((((~ (IData)(__PVT__adder__DOT__sDiffExps)) 
                                                 & VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                 ? 
                                                VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 1U)
                                                 : 0U) 
                                               | (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                   ? __VdfgRegularize_hd8e410d4_0_17
                                                   : 0U))) 
                                           - VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_16, 1U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (VL_SHIFTR_III(27,27,32, 
                                                 (3U 
                                                  | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                     << 2U)), 1U) 
                                   >> 3U)))) | (0U 
                                                != 
                                                (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)) 
                                                 & (1U 
                                                    | (6U 
                                                       & (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                          << 1U))))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                    << 2U)));
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 
        (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_hd8e410d4_0_1 
                                        << 5U)) >> 
                        ((IData)(__PVT__adder__DOT__isMaxAlign)
                          ? 0x1fU : (0x1fU & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__adder__DOT__closeSubMags = ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                       & ((~ (IData)(__PVT__adder__DOT__isMaxAlign)) 
                                          & (1U >= 
                                             (0x1fU 
                                              & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_hd8e410d4_0_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__adder__DOT__close_sSigSum)
                                        : __PVT__adder__DOT__close_sSigSum));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (__PVT__rounding__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                (7U 
                                                 & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)) 
                                                    & __PVT__rounding__DOT__genblk2__DOT__roundPosMask))));
    __PVT__adder__DOT__far_alignedSigSmaller = ((0x7fffffeU 
                                                 & (__PVT__adder__DOT__far_mainAlignedSigSmaller 
                                                    >> 2U)) 
                                                | ((0U 
                                                    != 
                                                    (7U 
                                                     & __PVT__adder__DOT__far_mainAlignedSigSmaller)) 
                                                   | (0U 
                                                      != 
                                                      ((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_1 
                                                                      >> 0x16U)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (__VdfgRegularize_hd8e410d4_0_1 
                                                                         >> 0x12U)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfU 
                                                                         & (__VdfgRegularize_hd8e410d4_0_1 
                                                                            >> 0xeU)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xfU 
                                                                            & (__VdfgRegularize_hd8e410d4_0_1 
                                                                               >> 0xaU)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xfU 
                                                                               & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 6U)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 2U)))) 
                                                                        << 1U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & __VdfgRegularize_hd8e410d4_0_1)))))))) 
                                                       & ((0x40U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                               ? 7U
                                                                               : 
                                                                              (7U 
                                                                               & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                 << 3U)) 
                                                             | ((0x10U 
                                                                 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 1U)) 
                                                                   | ((4U 
                                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                          >> 3U)) 
                                                                      | ((2U 
                                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                             >> 5U)) 
                                                                         | (1U 
                                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                               >> 7U))))))))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_hd8e410d4_0_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_hd8e410d4_0_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_hd8e410d4_0_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_hd8e410d4_0_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_hd8e410d4_0_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_hd8e410d4_0_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x18U)))))))))))))));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__adder__DOT__far_sigSum = (0xfffffffU & (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 (0xffffffU 
                                                                  & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                      ? __VdfgRegularize_hd8e410d4_0_16
                                                                      : __VdfgRegularize_hd8e410d4_0_17)), 3U) 
                                                   + 
                                                   (((IData)(__PVT__adder__DOT__eqSigns)
                                                      ? __PVT__adder__DOT__far_alignedSigSmaller
                                                      : 
                                                     (0x8000000U 
                                                      | (0x7ffffffU 
                                                         & (~ __PVT__adder__DOT__far_alignedSigSmaller)))) 
                                                    + 
                                                    (1U 
                                                     & (~ (IData)(__PVT__adder__DOT__eqSigns))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                        >> 0x10U))) 
                                                                 | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                 << 2U))) 
                                       & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           << 0x10U) 
                                          | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                             >> 0x10U)))), 2U) 
             | ((IData)(((0xc000U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x400U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 1U)
                         : rounding__DOT____VdfgRegularize_h4299fe10_0_5));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                             >> 0xbU))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 0x18U))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlSelfRef.rounding__DOT____VdfgRegularize_h4299fe10_0_10 
        = ((~ (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
               >> 0x16U)) & VL_LTES_III(32, 0x6bU, 
                                        VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 0xdU))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    __PVT__adder__DOT__close_sigOut = (0x7ffffffU & 
                                       VL_SHIFTL_III(27,27,32, 
                                                     ((0x3ffffffU 
                                                       & __VdfgRegularize_hd8e410d4_0_0) 
                                                      << 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0x17U) | ((IData)(__PVT__rounding__DOT__overflow) 
                               & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            >> 0x15U)) 
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
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xbU))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x400U 
                                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 1U))) 
                                                                & (((0x400U 
                                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                                          & ((0x400U 
                                                                              & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x12U)
                                                                              : 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x11U))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xaU) 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x12U)) 
                                                                               | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x10U)))))))))) 
                                                              & ((0x400U 
                                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h4299fe10_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
    __PVT__s1_isZero = ((IData)(__PVT__adder__DOT__addZeros) 
                        | ((~ (IData)(__PVT__s1_isInf)) 
                           & ((~ (IData)((0U != (3U 
                                                 & (__PVT__adder__DOT__close_sigOut 
                                                    >> 0x19U))))) 
                              & (IData)(__PVT__adder__DOT__closeSubMags))));
    vlSelfRef.__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                                (((~ (IData)(
                                                                             (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x16U))) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x1dU))))) 
                                                                 | (((~ (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x16U))) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU))))) 
                                                                    | ((IData)(__PVT__adder__DOT__isInfA) 
                                                                       & ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                                                          & (IData)(__PVT__adder__DOT__isInfB))))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x17U))), 7U)) 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x1dU))) 
                                                                    | ((3U 
                                                                        == 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U))), 7U)) 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(__PVT__s1_isInf)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(__PVT__s1_isZero)) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(__PVT__adder__DOT__eqSigns) 
                                                                                | (IData)(__PVT__adder__DOT__isInfA)) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U))) 
                                                                                | (((IData)(__PVT__adder__DOT__isInfB) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x20U))) 
                                                                                | ((~ 
                                                                                ((IData)(__PVT__s1_isInf) 
                                                                                | (IData)(__PVT__adder__DOT__addZeros))) 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__PVT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))))) 
                                                                                | ((~ (IData)(__PVT__adder__DOT__closeSubMags)) 
                                                                                & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                                 ? (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U))))))))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & ((((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                                                 ? 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U)))
                                                                                 : 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x17U)))) 
                                                                                - 
                                                                                ((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                                 : 
                                                                                (1U 
                                                                                & (~ (IData)(__PVT__adder__DOT__eqSigns)))))))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (0x3ffffff8U 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? __PVT__adder__DOT__close_sigOut
                                                                                 : 
                                                                                (0xfffffffU 
                                                                                & ((IData)(__PVT__adder__DOT__eqSigns)
                                                                                 ? 
                                                                                (VL_SHIFTR_III(28,28,32, __PVT__adder__DOT__far_sigSum, 1U) 
                                                                                | (1U 
                                                                                & __PVT__adder__DOT__far_sigSum))
                                                                                 : __PVT__adder__DOT__far_sigSum))) 
                                                                                << 3U))))))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__s1_isInf;
    __PVT__s1_isInf = 0;
    CData/*0:0*/ __PVT__s1_isZero;
    __PVT__s1_isZero = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfA;
    __PVT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfB;
    __PVT__adder__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__adder__DOT__eqSigns;
    __PVT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__adder__DOT__sDiffExps;
    __PVT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__adder__DOT__isMaxAlign;
    __PVT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__adder__DOT__closeSubMags;
    __PVT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sSigSum;
    __PVT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sigOut;
    __PVT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__adder__DOT__far_alignedSigSmaller;
    __PVT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__adder__DOT__far_sigSum;
    __PVT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__adder__DOT__addZeros;
    __PVT__adder__DOT__addZeros = 0;
    SData/*9:0*/ adder__DOT____VdfgRegularize_h930a94f0_0_2;
    adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
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
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_1;
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_4;
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_5;
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 0;
    IData/*26:0*/ __VdfgRegularize_hd8e410d4_0_0;
    __VdfgRegularize_hd8e410d4_0_0 = 0;
    IData/*24:0*/ __VdfgRegularize_hd8e410d4_0_1;
    __VdfgRegularize_hd8e410d4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_16;
    __VdfgRegularize_hd8e410d4_0_16 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_17;
    __VdfgRegularize_hd8e410d4_0_17 = 0;
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
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 0xdU))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU))));
    __PVT__rounding__DOT__roundMagUp = ((IData)(((0x4000U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                 & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x15U))) 
                                        | (IData)((
                                                   (0x6000U 
                                                    == 
                                                    (0xe000U 
                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x15U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
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
    __PVT__adder__DOT__addZeros = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [1U]
                                                                    [0U] 
                                                                    >> 0x17U))), 6U)) 
                                   & (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                      [1U]
                                                                      [1U] 
                                                                      >> 0x17U))), 6U)));
    __PVT__adder__DOT__isInfA = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [1U][0U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [1U]
                                                                    [0U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__isInfB = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [1U][1U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [1U]
                                                                    [1U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__eqSigns = ((1U & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                 [1U]
                                                 [0U] 
                                                 >> 0x20U))) 
                                  == (1U & (IData)(
                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                    [1U]
                                                    [1U] 
                                                    >> 0x20U))));
    __VdfgRegularize_hd8e410d4_0_16 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [1U]
                                                                         [1U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [1U]
                                                            [1U])));
    __VdfgRegularize_hd8e410d4_0_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [1U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [1U]
                                                            [0U])));
    __PVT__adder__DOT__sDiffExps = (0x3ffU & ((0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                          [1U]
                                                          [0U] 
                                                          >> 0x17U))) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [1U]
                                                            [1U] 
                                                            >> 0x17U)))));
    __PVT__rounding__DOT__commonCase = ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                        & (0U == (0xc00000U 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0xaU)));
    __PVT__s1_isInf = ((IData)(__PVT__adder__DOT__isInfA) 
                       | (IData)(__PVT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_17;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                            [1U][1U] 
                                            >> 0x17U))) 
                         - (0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                              [1U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_16;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__adder__DOT__sDiffExps));
    }
    __PVT__adder__DOT__isMaxAlign = ((0U != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                     & ((0xffffffffU 
                                         != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                        | (0U == (0x1fU 
                                                  & (IData)(__PVT__adder__DOT__sDiffExps)))));
    __PVT__adder__DOT__close_sSigSum = (0x7ffffffU 
                                        & ((((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))) 
                                              & (IData)(__PVT__adder__DOT__sDiffExps))
                                              ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 2U)
                                              : 0U) 
                                            | ((((~ (IData)(__PVT__adder__DOT__sDiffExps)) 
                                                 & VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                 ? 
                                                VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 1U)
                                                 : 0U) 
                                               | (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                   ? __VdfgRegularize_hd8e410d4_0_17
                                                   : 0U))) 
                                           - VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_16, 1U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (VL_SHIFTR_III(27,27,32, 
                                                 (3U 
                                                  | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                     << 2U)), 1U) 
                                   >> 3U)))) | (0U 
                                                != 
                                                (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)) 
                                                 & (1U 
                                                    | (6U 
                                                       & (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                          << 1U))))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                    << 2U)));
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 
        (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_hd8e410d4_0_1 
                                        << 5U)) >> 
                        ((IData)(__PVT__adder__DOT__isMaxAlign)
                          ? 0x1fU : (0x1fU & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__adder__DOT__closeSubMags = ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                       & ((~ (IData)(__PVT__adder__DOT__isMaxAlign)) 
                                          & (1U >= 
                                             (0x1fU 
                                              & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_hd8e410d4_0_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__adder__DOT__close_sSigSum)
                                        : __PVT__adder__DOT__close_sSigSum));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (__PVT__rounding__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                (7U 
                                                 & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)) 
                                                    & __PVT__rounding__DOT__genblk2__DOT__roundPosMask))));
    __PVT__adder__DOT__far_alignedSigSmaller = ((0x7fffffeU 
                                                 & (__PVT__adder__DOT__far_mainAlignedSigSmaller 
                                                    >> 2U)) 
                                                | ((0U 
                                                    != 
                                                    (7U 
                                                     & __PVT__adder__DOT__far_mainAlignedSigSmaller)) 
                                                   | (0U 
                                                      != 
                                                      ((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_1 
                                                                      >> 0x16U)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (__VdfgRegularize_hd8e410d4_0_1 
                                                                         >> 0x12U)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfU 
                                                                         & (__VdfgRegularize_hd8e410d4_0_1 
                                                                            >> 0xeU)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xfU 
                                                                            & (__VdfgRegularize_hd8e410d4_0_1 
                                                                               >> 0xaU)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xfU 
                                                                               & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 6U)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 2U)))) 
                                                                        << 1U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & __VdfgRegularize_hd8e410d4_0_1)))))))) 
                                                       & ((0x40U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                               ? 7U
                                                                               : 
                                                                              (7U 
                                                                               & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                 << 3U)) 
                                                             | ((0x10U 
                                                                 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 1U)) 
                                                                   | ((4U 
                                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                          >> 3U)) 
                                                                      | ((2U 
                                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                             >> 5U)) 
                                                                         | (1U 
                                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                               >> 7U))))))))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_hd8e410d4_0_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_hd8e410d4_0_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_hd8e410d4_0_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_hd8e410d4_0_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_hd8e410d4_0_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_hd8e410d4_0_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x18U)))))))))))))));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__adder__DOT__far_sigSum = (0xfffffffU & (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 (0xffffffU 
                                                                  & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                      ? __VdfgRegularize_hd8e410d4_0_16
                                                                      : __VdfgRegularize_hd8e410d4_0_17)), 3U) 
                                                   + 
                                                   (((IData)(__PVT__adder__DOT__eqSigns)
                                                      ? __PVT__adder__DOT__far_alignedSigSmaller
                                                      : 
                                                     (0x8000000U 
                                                      | (0x7ffffffU 
                                                         & (~ __PVT__adder__DOT__far_alignedSigSmaller)))) 
                                                    + 
                                                    (1U 
                                                     & (~ (IData)(__PVT__adder__DOT__eqSigns))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                        >> 0x10U))) 
                                                                 | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                 << 2U))) 
                                       & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           << 0x10U) 
                                          | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                             >> 0x10U)))), 2U) 
             | ((IData)(((0xc000U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x400U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 1U)
                         : rounding__DOT____VdfgRegularize_h4299fe10_0_5));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                             >> 0xbU))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 0x18U))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlSelfRef.rounding__DOT____VdfgRegularize_h4299fe10_0_10 
        = ((~ (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
               >> 0x16U)) & VL_LTES_III(32, 0x6bU, 
                                        VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 0xdU))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    __PVT__adder__DOT__close_sigOut = (0x7ffffffU & 
                                       VL_SHIFTL_III(27,27,32, 
                                                     ((0x3ffffffU 
                                                       & __VdfgRegularize_hd8e410d4_0_0) 
                                                      << 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0x17U) | ((IData)(__PVT__rounding__DOT__overflow) 
                               & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            >> 0x15U)) 
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
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xbU))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x400U 
                                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 1U))) 
                                                                & (((0x400U 
                                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                                          & ((0x400U 
                                                                              & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x12U)
                                                                              : 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x11U))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xaU) 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x12U)) 
                                                                               | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x10U)))))))))) 
                                                              & ((0x400U 
                                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h4299fe10_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
    __PVT__s1_isZero = ((IData)(__PVT__adder__DOT__addZeros) 
                        | ((~ (IData)(__PVT__s1_isInf)) 
                           & ((~ (IData)((0U != (3U 
                                                 & (__PVT__adder__DOT__close_sigOut 
                                                    >> 0x19U))))) 
                              & (IData)(__PVT__adder__DOT__closeSubMags))));
    vlSelfRef.__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                                (((~ (IData)(
                                                                             (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x16U))) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x1dU))))) 
                                                                 | (((~ (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x16U))) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x1dU))))) 
                                                                    | ((IData)(__PVT__adder__DOT__isInfA) 
                                                                       & ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                                                          & (IData)(__PVT__adder__DOT__isInfB))))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x1dU))) 
                                                                    | ((3U 
                                                                        == 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x1dU)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(__PVT__s1_isInf)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(__PVT__s1_isZero)) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(__PVT__adder__DOT__eqSigns) 
                                                                                | (IData)(__PVT__adder__DOT__isInfA)) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x20U))) 
                                                                                | (((IData)(__PVT__adder__DOT__isInfB) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x20U))) 
                                                                                | ((~ 
                                                                                ((IData)(__PVT__s1_isInf) 
                                                                                | (IData)(__PVT__adder__DOT__addZeros))) 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__PVT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))))) 
                                                                                | ((~ (IData)(__PVT__adder__DOT__closeSubMags)) 
                                                                                & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                                 ? (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & ((((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                                                 ? 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x17U)))
                                                                                 : 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                                - 
                                                                                ((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                                 : 
                                                                                (1U 
                                                                                & (~ (IData)(__PVT__adder__DOT__eqSigns)))))))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (0x3ffffff8U 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? __PVT__adder__DOT__close_sigOut
                                                                                 : 
                                                                                (0xfffffffU 
                                                                                & ((IData)(__PVT__adder__DOT__eqSigns)
                                                                                 ? 
                                                                                (VL_SHIFTR_III(28,28,32, __PVT__adder__DOT__far_sigSum, 1U) 
                                                                                | (1U 
                                                                                & __PVT__adder__DOT__far_sigSum))
                                                                                 : __PVT__adder__DOT__far_sigSum))) 
                                                                                << 3U))))))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__s1_isInf;
    __PVT__s1_isInf = 0;
    CData/*0:0*/ __PVT__s1_isZero;
    __PVT__s1_isZero = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfA;
    __PVT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfB;
    __PVT__adder__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__adder__DOT__eqSigns;
    __PVT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__adder__DOT__sDiffExps;
    __PVT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__adder__DOT__isMaxAlign;
    __PVT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__adder__DOT__closeSubMags;
    __PVT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sSigSum;
    __PVT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sigOut;
    __PVT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__adder__DOT__far_alignedSigSmaller;
    __PVT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__adder__DOT__far_sigSum;
    __PVT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__adder__DOT__addZeros;
    __PVT__adder__DOT__addZeros = 0;
    SData/*9:0*/ adder__DOT____VdfgRegularize_h930a94f0_0_2;
    adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
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
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_1;
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_4;
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_5;
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 0;
    IData/*26:0*/ __VdfgRegularize_hd8e410d4_0_0;
    __VdfgRegularize_hd8e410d4_0_0 = 0;
    IData/*24:0*/ __VdfgRegularize_hd8e410d4_0_1;
    __VdfgRegularize_hd8e410d4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_16;
    __VdfgRegularize_hd8e410d4_0_16 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_17;
    __VdfgRegularize_hd8e410d4_0_17 = 0;
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
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 0xdU))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU))));
    __PVT__rounding__DOT__roundMagUp = ((IData)(((0x4000U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                 & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x15U))) 
                                        | (IData)((
                                                   (0x6000U 
                                                    == 
                                                    (0xe000U 
                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x15U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
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
    __PVT__adder__DOT__addZeros = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [0U] 
                                                                    >> 0x17U))), 6U)) 
                                   & (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                      [0U]
                                                                      [1U] 
                                                                      >> 0x17U))), 6U)));
    __PVT__adder__DOT__isInfA = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                             [0U][0U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [0U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__isInfB = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                             [0U][1U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [1U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__eqSigns = ((1U & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                 [0U]
                                                 [0U] 
                                                 >> 0x20U))) 
                                  == (1U & (IData)(
                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                    [0U]
                                                    [1U] 
                                                    >> 0x20U))));
    __VdfgRegularize_hd8e410d4_0_16 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [1U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [1U])));
    __VdfgRegularize_hd8e410d4_0_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [0U])));
    __PVT__adder__DOT__sDiffExps = (0x3ffU & ((0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                          [0U]
                                                          [0U] 
                                                          >> 0x17U))) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [1U] 
                                                            >> 0x17U)))));
    __PVT__rounding__DOT__commonCase = ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                        & (0U == (0xc00000U 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0xaU)));
    __PVT__s1_isInf = ((IData)(__PVT__adder__DOT__isInfA) 
                       | (IData)(__PVT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_17;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                            [0U][1U] 
                                            >> 0x17U))) 
                         - (0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                              [0U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_16;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__adder__DOT__sDiffExps));
    }
    __PVT__adder__DOT__isMaxAlign = ((0U != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                     & ((0xffffffffU 
                                         != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                        | (0U == (0x1fU 
                                                  & (IData)(__PVT__adder__DOT__sDiffExps)))));
    __PVT__adder__DOT__close_sSigSum = (0x7ffffffU 
                                        & ((((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))) 
                                              & (IData)(__PVT__adder__DOT__sDiffExps))
                                              ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 2U)
                                              : 0U) 
                                            | ((((~ (IData)(__PVT__adder__DOT__sDiffExps)) 
                                                 & VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                 ? 
                                                VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 1U)
                                                 : 0U) 
                                               | (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                   ? __VdfgRegularize_hd8e410d4_0_17
                                                   : 0U))) 
                                           - VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_16, 1U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (VL_SHIFTR_III(27,27,32, 
                                                 (3U 
                                                  | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                     << 2U)), 1U) 
                                   >> 3U)))) | (0U 
                                                != 
                                                (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)) 
                                                 & (1U 
                                                    | (6U 
                                                       & (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                          << 1U))))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                    << 2U)));
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 
        (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_hd8e410d4_0_1 
                                        << 5U)) >> 
                        ((IData)(__PVT__adder__DOT__isMaxAlign)
                          ? 0x1fU : (0x1fU & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__adder__DOT__closeSubMags = ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                       & ((~ (IData)(__PVT__adder__DOT__isMaxAlign)) 
                                          & (1U >= 
                                             (0x1fU 
                                              & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_hd8e410d4_0_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__adder__DOT__close_sSigSum)
                                        : __PVT__adder__DOT__close_sSigSum));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (__PVT__rounding__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                (7U 
                                                 & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)) 
                                                    & __PVT__rounding__DOT__genblk2__DOT__roundPosMask))));
    __PVT__adder__DOT__far_alignedSigSmaller = ((0x7fffffeU 
                                                 & (__PVT__adder__DOT__far_mainAlignedSigSmaller 
                                                    >> 2U)) 
                                                | ((0U 
                                                    != 
                                                    (7U 
                                                     & __PVT__adder__DOT__far_mainAlignedSigSmaller)) 
                                                   | (0U 
                                                      != 
                                                      ((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_1 
                                                                      >> 0x16U)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (__VdfgRegularize_hd8e410d4_0_1 
                                                                         >> 0x12U)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfU 
                                                                         & (__VdfgRegularize_hd8e410d4_0_1 
                                                                            >> 0xeU)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xfU 
                                                                            & (__VdfgRegularize_hd8e410d4_0_1 
                                                                               >> 0xaU)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xfU 
                                                                               & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 6U)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 2U)))) 
                                                                        << 1U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & __VdfgRegularize_hd8e410d4_0_1)))))))) 
                                                       & ((0x40U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                               ? 7U
                                                                               : 
                                                                              (7U 
                                                                               & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                 << 3U)) 
                                                             | ((0x10U 
                                                                 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 1U)) 
                                                                   | ((4U 
                                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                          >> 3U)) 
                                                                      | ((2U 
                                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                             >> 5U)) 
                                                                         | (1U 
                                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                               >> 7U))))))))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_hd8e410d4_0_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_hd8e410d4_0_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_hd8e410d4_0_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_hd8e410d4_0_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_hd8e410d4_0_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_hd8e410d4_0_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x18U)))))))))))))));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__adder__DOT__far_sigSum = (0xfffffffU & (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 (0xffffffU 
                                                                  & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                      ? __VdfgRegularize_hd8e410d4_0_16
                                                                      : __VdfgRegularize_hd8e410d4_0_17)), 3U) 
                                                   + 
                                                   (((IData)(__PVT__adder__DOT__eqSigns)
                                                      ? __PVT__adder__DOT__far_alignedSigSmaller
                                                      : 
                                                     (0x8000000U 
                                                      | (0x7ffffffU 
                                                         & (~ __PVT__adder__DOT__far_alignedSigSmaller)))) 
                                                    + 
                                                    (1U 
                                                     & (~ (IData)(__PVT__adder__DOT__eqSigns))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                        >> 0x10U))) 
                                                                 | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                 << 2U))) 
                                       & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           << 0x10U) 
                                          | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                             >> 0x10U)))), 2U) 
             | ((IData)(((0xc000U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x400U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 1U)
                         : rounding__DOT____VdfgRegularize_h4299fe10_0_5));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                             >> 0xbU))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 0x18U))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlSelfRef.rounding__DOT____VdfgRegularize_h4299fe10_0_10 
        = ((~ (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
               >> 0x16U)) & VL_LTES_III(32, 0x6bU, 
                                        VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 0xdU))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    __PVT__adder__DOT__close_sigOut = (0x7ffffffU & 
                                       VL_SHIFTL_III(27,27,32, 
                                                     ((0x3ffffffU 
                                                       & __VdfgRegularize_hd8e410d4_0_0) 
                                                      << 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0x17U) | ((IData)(__PVT__rounding__DOT__overflow) 
                               & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            >> 0x15U)) 
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
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xbU))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x400U 
                                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 1U))) 
                                                                & (((0x400U 
                                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                                          & ((0x400U 
                                                                              & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x12U)
                                                                              : 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x11U))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xaU) 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x12U)) 
                                                                               | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x10U)))))))))) 
                                                              & ((0x400U 
                                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h4299fe10_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
    __PVT__s1_isZero = ((IData)(__PVT__adder__DOT__addZeros) 
                        | ((~ (IData)(__PVT__s1_isInf)) 
                           & ((~ (IData)((0U != (3U 
                                                 & (__PVT__adder__DOT__close_sigOut 
                                                    >> 0x19U))))) 
                              & (IData)(__PVT__adder__DOT__closeSubMags))));
    vlSelfRef.__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                                (((~ (IData)(
                                                                             (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x16U))) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x1dU))))) 
                                                                 | (((~ (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x16U))) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x1dU))))) 
                                                                    | ((IData)(__PVT__adder__DOT__isInfA) 
                                                                       & ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                                                          & (IData)(__PVT__adder__DOT__isInfB))))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x1dU))) 
                                                                    | ((3U 
                                                                        == 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x1dU)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(__PVT__s1_isInf)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(__PVT__s1_isZero)) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(__PVT__adder__DOT__eqSigns) 
                                                                                | (IData)(__PVT__adder__DOT__isInfA)) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U))) 
                                                                                | (((IData)(__PVT__adder__DOT__isInfB) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x20U))) 
                                                                                | ((~ 
                                                                                ((IData)(__PVT__s1_isInf) 
                                                                                | (IData)(__PVT__adder__DOT__addZeros))) 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__PVT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))))) 
                                                                                | ((~ (IData)(__PVT__adder__DOT__closeSubMags)) 
                                                                                & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                                 ? (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & ((((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                                                 ? 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x17U)))
                                                                                 : 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                                - 
                                                                                ((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                                 : 
                                                                                (1U 
                                                                                & (~ (IData)(__PVT__adder__DOT__eqSigns)))))))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (0x3ffffff8U 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? __PVT__adder__DOT__close_sigOut
                                                                                 : 
                                                                                (0xfffffffU 
                                                                                & ((IData)(__PVT__adder__DOT__eqSigns)
                                                                                 ? 
                                                                                (VL_SHIFTR_III(28,28,32, __PVT__adder__DOT__far_sigSum, 1U) 
                                                                                | (1U 
                                                                                & __PVT__adder__DOT__far_sigSum))
                                                                                 : __PVT__adder__DOT__far_sigSum))) 
                                                                                << 3U))))))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add__0(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__s1_isInf;
    __PVT__s1_isInf = 0;
    CData/*0:0*/ __PVT__s1_isZero;
    __PVT__s1_isZero = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfA;
    __PVT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfB;
    __PVT__adder__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__adder__DOT__eqSigns;
    __PVT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__adder__DOT__sDiffExps;
    __PVT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__adder__DOT__isMaxAlign;
    __PVT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__adder__DOT__closeSubMags;
    __PVT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sSigSum;
    __PVT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sigOut;
    __PVT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__adder__DOT__far_alignedSigSmaller;
    __PVT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__adder__DOT__far_sigSum;
    __PVT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__adder__DOT__addZeros;
    __PVT__adder__DOT__addZeros = 0;
    SData/*9:0*/ adder__DOT____VdfgRegularize_h930a94f0_0_2;
    adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
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
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_1;
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_4;
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_5;
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 0;
    IData/*26:0*/ __VdfgRegularize_hd8e410d4_0_0;
    __VdfgRegularize_hd8e410d4_0_0 = 0;
    IData/*24:0*/ __VdfgRegularize_hd8e410d4_0_1;
    __VdfgRegularize_hd8e410d4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_16;
    __VdfgRegularize_hd8e410d4_0_16 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_17;
    __VdfgRegularize_hd8e410d4_0_17 = 0;
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
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 0xdU))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU))));
    __PVT__rounding__DOT__roundMagUp = ((IData)(((0x4000U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                 & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x15U))) 
                                        | (IData)((
                                                   (0x6000U 
                                                    == 
                                                    (0xe000U 
                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x15U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
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
    __PVT__adder__DOT__addZeros = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [2U] 
                                                                    >> 0x17U))), 6U)) 
                                   & (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                      [0U]
                                                                      [3U] 
                                                                      >> 0x17U))), 6U)));
    __PVT__adder__DOT__isInfA = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                             [0U][2U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [2U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__isInfB = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                             [0U][3U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [3U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__eqSigns = ((1U & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                 [0U]
                                                 [2U] 
                                                 >> 0x20U))) 
                                  == (1U & (IData)(
                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                    [0U]
                                                    [3U] 
                                                    >> 0x20U))));
    __VdfgRegularize_hd8e410d4_0_16 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [3U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [3U])));
    __VdfgRegularize_hd8e410d4_0_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [2U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [2U])));
    __PVT__adder__DOT__sDiffExps = (0x3ffU & ((0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                          [0U]
                                                          [2U] 
                                                          >> 0x17U))) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [3U] 
                                                            >> 0x17U)))));
    __PVT__rounding__DOT__commonCase = ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                        & (0U == (0xc00000U 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0xaU)));
    __PVT__s1_isInf = ((IData)(__PVT__adder__DOT__isInfA) 
                       | (IData)(__PVT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_17;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                            [0U][3U] 
                                            >> 0x17U))) 
                         - (0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                              [0U][2U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_16;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__adder__DOT__sDiffExps));
    }
    __PVT__adder__DOT__isMaxAlign = ((0U != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                     & ((0xffffffffU 
                                         != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                        | (0U == (0x1fU 
                                                  & (IData)(__PVT__adder__DOT__sDiffExps)))));
    __PVT__adder__DOT__close_sSigSum = (0x7ffffffU 
                                        & ((((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))) 
                                              & (IData)(__PVT__adder__DOT__sDiffExps))
                                              ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 2U)
                                              : 0U) 
                                            | ((((~ (IData)(__PVT__adder__DOT__sDiffExps)) 
                                                 & VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                 ? 
                                                VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 1U)
                                                 : 0U) 
                                               | (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                   ? __VdfgRegularize_hd8e410d4_0_17
                                                   : 0U))) 
                                           - VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_16, 1U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (VL_SHIFTR_III(27,27,32, 
                                                 (3U 
                                                  | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                     << 2U)), 1U) 
                                   >> 3U)))) | (0U 
                                                != 
                                                (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)) 
                                                 & (1U 
                                                    | (6U 
                                                       & (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                          << 1U))))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                    << 2U)));
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 
        (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_hd8e410d4_0_1 
                                        << 5U)) >> 
                        ((IData)(__PVT__adder__DOT__isMaxAlign)
                          ? 0x1fU : (0x1fU & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__adder__DOT__closeSubMags = ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                       & ((~ (IData)(__PVT__adder__DOT__isMaxAlign)) 
                                          & (1U >= 
                                             (0x1fU 
                                              & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_hd8e410d4_0_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__adder__DOT__close_sSigSum)
                                        : __PVT__adder__DOT__close_sSigSum));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (__PVT__rounding__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                (7U 
                                                 & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)) 
                                                    & __PVT__rounding__DOT__genblk2__DOT__roundPosMask))));
    __PVT__adder__DOT__far_alignedSigSmaller = ((0x7fffffeU 
                                                 & (__PVT__adder__DOT__far_mainAlignedSigSmaller 
                                                    >> 2U)) 
                                                | ((0U 
                                                    != 
                                                    (7U 
                                                     & __PVT__adder__DOT__far_mainAlignedSigSmaller)) 
                                                   | (0U 
                                                      != 
                                                      ((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_1 
                                                                      >> 0x16U)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (__VdfgRegularize_hd8e410d4_0_1 
                                                                         >> 0x12U)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfU 
                                                                         & (__VdfgRegularize_hd8e410d4_0_1 
                                                                            >> 0xeU)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xfU 
                                                                            & (__VdfgRegularize_hd8e410d4_0_1 
                                                                               >> 0xaU)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xfU 
                                                                               & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 6U)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 2U)))) 
                                                                        << 1U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & __VdfgRegularize_hd8e410d4_0_1)))))))) 
                                                       & ((0x40U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                               ? 7U
                                                                               : 
                                                                              (7U 
                                                                               & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                 << 3U)) 
                                                             | ((0x10U 
                                                                 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 1U)) 
                                                                   | ((4U 
                                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                          >> 3U)) 
                                                                      | ((2U 
                                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                             >> 5U)) 
                                                                         | (1U 
                                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                               >> 7U))))))))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_hd8e410d4_0_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_hd8e410d4_0_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_hd8e410d4_0_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_hd8e410d4_0_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_hd8e410d4_0_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_hd8e410d4_0_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x18U)))))))))))))));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__adder__DOT__far_sigSum = (0xfffffffU & (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 (0xffffffU 
                                                                  & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                      ? __VdfgRegularize_hd8e410d4_0_16
                                                                      : __VdfgRegularize_hd8e410d4_0_17)), 3U) 
                                                   + 
                                                   (((IData)(__PVT__adder__DOT__eqSigns)
                                                      ? __PVT__adder__DOT__far_alignedSigSmaller
                                                      : 
                                                     (0x8000000U 
                                                      | (0x7ffffffU 
                                                         & (~ __PVT__adder__DOT__far_alignedSigSmaller)))) 
                                                    + 
                                                    (1U 
                                                     & (~ (IData)(__PVT__adder__DOT__eqSigns))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                        >> 0x10U))) 
                                                                 | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                 << 2U))) 
                                       & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           << 0x10U) 
                                          | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                             >> 0x10U)))), 2U) 
             | ((IData)(((0xc000U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x400U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 1U)
                         : rounding__DOT____VdfgRegularize_h4299fe10_0_5));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                             >> 0xbU))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 0x18U))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlSelfRef.rounding__DOT____VdfgRegularize_h4299fe10_0_10 
        = ((~ (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
               >> 0x16U)) & VL_LTES_III(32, 0x6bU, 
                                        VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 0xdU))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    __PVT__adder__DOT__close_sigOut = (0x7ffffffU & 
                                       VL_SHIFTL_III(27,27,32, 
                                                     ((0x3ffffffU 
                                                       & __VdfgRegularize_hd8e410d4_0_0) 
                                                      << 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0x17U) | ((IData)(__PVT__rounding__DOT__overflow) 
                               & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            >> 0x15U)) 
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
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xbU))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x400U 
                                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 1U))) 
                                                                & (((0x400U 
                                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                                          & ((0x400U 
                                                                              & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x12U)
                                                                              : 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x11U))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xaU) 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x12U)) 
                                                                               | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x10U)))))))))) 
                                                              & ((0x400U 
                                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h4299fe10_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
    __PVT__s1_isZero = ((IData)(__PVT__adder__DOT__addZeros) 
                        | ((~ (IData)(__PVT__s1_isInf)) 
                           & ((~ (IData)((0U != (3U 
                                                 & (__PVT__adder__DOT__close_sigOut 
                                                    >> 0x19U))))) 
                              & (IData)(__PVT__adder__DOT__closeSubMags))));
    vlSelfRef.__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                                (((~ (IData)(
                                                                             (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x16U))) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x1dU))))) 
                                                                 | (((~ (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x16U))) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU))))) 
                                                                    | ((IData)(__PVT__adder__DOT__isInfA) 
                                                                       & ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                                                          & (IData)(__PVT__adder__DOT__isInfB))))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x17U))), 7U)) 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x1dU))) 
                                                                    | ((3U 
                                                                        == 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U))), 7U)) 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(__PVT__s1_isInf)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(__PVT__s1_isZero)) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(__PVT__adder__DOT__eqSigns) 
                                                                                | (IData)(__PVT__adder__DOT__isInfA)) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U))) 
                                                                                | (((IData)(__PVT__adder__DOT__isInfB) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x20U))) 
                                                                                | ((~ 
                                                                                ((IData)(__PVT__s1_isInf) 
                                                                                | (IData)(__PVT__adder__DOT__addZeros))) 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__PVT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))))) 
                                                                                | ((~ (IData)(__PVT__adder__DOT__closeSubMags)) 
                                                                                & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                                 ? (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U))))))))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & ((((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                                                 ? 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U)))
                                                                                 : 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x17U)))) 
                                                                                - 
                                                                                ((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                                 : 
                                                                                (1U 
                                                                                & (~ (IData)(__PVT__adder__DOT__eqSigns)))))))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (0x3ffffff8U 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? __PVT__adder__DOT__close_sigOut
                                                                                 : 
                                                                                (0xfffffffU 
                                                                                & ((IData)(__PVT__adder__DOT__eqSigns)
                                                                                 ? 
                                                                                (VL_SHIFTR_III(28,28,32, __PVT__adder__DOT__far_sigSum, 1U) 
                                                                                | (1U 
                                                                                & __PVT__adder__DOT__far_sigSum))
                                                                                 : __PVT__adder__DOT__far_sigSum))) 
                                                                                << 3U))))))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp__g_red_tree__BRA__1__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__s1_isInf;
    __PVT__s1_isInf = 0;
    CData/*0:0*/ __PVT__s1_isZero;
    __PVT__s1_isZero = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfA;
    __PVT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfB;
    __PVT__adder__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__adder__DOT__eqSigns;
    __PVT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__adder__DOT__sDiffExps;
    __PVT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__adder__DOT__isMaxAlign;
    __PVT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__adder__DOT__closeSubMags;
    __PVT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sSigSum;
    __PVT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sigOut;
    __PVT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__adder__DOT__far_alignedSigSmaller;
    __PVT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__adder__DOT__far_sigSum;
    __PVT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__adder__DOT__addZeros;
    __PVT__adder__DOT__addZeros = 0;
    SData/*9:0*/ adder__DOT____VdfgRegularize_h930a94f0_0_2;
    adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
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
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_1;
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_4;
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_5;
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 0;
    IData/*26:0*/ __VdfgRegularize_hd8e410d4_0_0;
    __VdfgRegularize_hd8e410d4_0_0 = 0;
    IData/*24:0*/ __VdfgRegularize_hd8e410d4_0_1;
    __VdfgRegularize_hd8e410d4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_16;
    __VdfgRegularize_hd8e410d4_0_16 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_17;
    __VdfgRegularize_hd8e410d4_0_17 = 0;
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
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 0xdU))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU))));
    __PVT__rounding__DOT__roundMagUp = ((IData)(((0x4000U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                 & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x15U))) 
                                        | (IData)((
                                                   (0x6000U 
                                                    == 
                                                    (0xe000U 
                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x15U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
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
    __PVT__adder__DOT__addZeros = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [1U]
                                                                    [0U] 
                                                                    >> 0x17U))), 6U)) 
                                   & (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                      [1U]
                                                                      [1U] 
                                                                      >> 0x17U))), 6U)));
    __PVT__adder__DOT__isInfA = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                             [1U][0U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [1U]
                                                                    [0U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__isInfB = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                             [1U][1U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                    [1U]
                                                                    [1U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__eqSigns = ((1U & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                 [1U]
                                                 [0U] 
                                                 >> 0x20U))) 
                                  == (1U & (IData)(
                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                    [1U]
                                                    [1U] 
                                                    >> 0x20U))));
    __VdfgRegularize_hd8e410d4_0_16 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                         [1U]
                                                                         [1U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [1U]
                                                            [1U])));
    __VdfgRegularize_hd8e410d4_0_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                         [1U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [1U]
                                                            [0U])));
    __PVT__adder__DOT__sDiffExps = (0x3ffU & ((0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                          [1U]
                                                          [0U] 
                                                          >> 0x17U))) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                            [1U]
                                                            [1U] 
                                                            >> 0x17U)))));
    __PVT__rounding__DOT__commonCase = ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                        & (0U == (0xc00000U 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0xaU)));
    __PVT__s1_isInf = ((IData)(__PVT__adder__DOT__isInfA) 
                       | (IData)(__PVT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_17;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                            [1U][1U] 
                                            >> 0x17U))) 
                         - (0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                              [1U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_16;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__adder__DOT__sDiffExps));
    }
    __PVT__adder__DOT__isMaxAlign = ((0U != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                     & ((0xffffffffU 
                                         != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                        | (0U == (0x1fU 
                                                  & (IData)(__PVT__adder__DOT__sDiffExps)))));
    __PVT__adder__DOT__close_sSigSum = (0x7ffffffU 
                                        & ((((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))) 
                                              & (IData)(__PVT__adder__DOT__sDiffExps))
                                              ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 2U)
                                              : 0U) 
                                            | ((((~ (IData)(__PVT__adder__DOT__sDiffExps)) 
                                                 & VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                 ? 
                                                VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 1U)
                                                 : 0U) 
                                               | (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                   ? __VdfgRegularize_hd8e410d4_0_17
                                                   : 0U))) 
                                           - VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_16, 1U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (VL_SHIFTR_III(27,27,32, 
                                                 (3U 
                                                  | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                     << 2U)), 1U) 
                                   >> 3U)))) | (0U 
                                                != 
                                                (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)) 
                                                 & (1U 
                                                    | (6U 
                                                       & (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                          << 1U))))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                    << 2U)));
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 
        (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_hd8e410d4_0_1 
                                        << 5U)) >> 
                        ((IData)(__PVT__adder__DOT__isMaxAlign)
                          ? 0x1fU : (0x1fU & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__adder__DOT__closeSubMags = ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                       & ((~ (IData)(__PVT__adder__DOT__isMaxAlign)) 
                                          & (1U >= 
                                             (0x1fU 
                                              & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_hd8e410d4_0_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__adder__DOT__close_sSigSum)
                                        : __PVT__adder__DOT__close_sSigSum));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (__PVT__rounding__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                (7U 
                                                 & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)) 
                                                    & __PVT__rounding__DOT__genblk2__DOT__roundPosMask))));
    __PVT__adder__DOT__far_alignedSigSmaller = ((0x7fffffeU 
                                                 & (__PVT__adder__DOT__far_mainAlignedSigSmaller 
                                                    >> 2U)) 
                                                | ((0U 
                                                    != 
                                                    (7U 
                                                     & __PVT__adder__DOT__far_mainAlignedSigSmaller)) 
                                                   | (0U 
                                                      != 
                                                      ((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_1 
                                                                      >> 0x16U)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (__VdfgRegularize_hd8e410d4_0_1 
                                                                         >> 0x12U)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfU 
                                                                         & (__VdfgRegularize_hd8e410d4_0_1 
                                                                            >> 0xeU)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xfU 
                                                                            & (__VdfgRegularize_hd8e410d4_0_1 
                                                                               >> 0xaU)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xfU 
                                                                               & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 6U)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 2U)))) 
                                                                        << 1U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & __VdfgRegularize_hd8e410d4_0_1)))))))) 
                                                       & ((0x40U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                               ? 7U
                                                                               : 
                                                                              (7U 
                                                                               & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                 << 3U)) 
                                                             | ((0x10U 
                                                                 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 1U)) 
                                                                   | ((4U 
                                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                          >> 3U)) 
                                                                      | ((2U 
                                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                             >> 5U)) 
                                                                         | (1U 
                                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                               >> 7U))))))))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_hd8e410d4_0_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_hd8e410d4_0_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_hd8e410d4_0_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_hd8e410d4_0_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_hd8e410d4_0_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_hd8e410d4_0_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x18U)))))))))))))));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__adder__DOT__far_sigSum = (0xfffffffU & (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 (0xffffffU 
                                                                  & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                      ? __VdfgRegularize_hd8e410d4_0_16
                                                                      : __VdfgRegularize_hd8e410d4_0_17)), 3U) 
                                                   + 
                                                   (((IData)(__PVT__adder__DOT__eqSigns)
                                                      ? __PVT__adder__DOT__far_alignedSigSmaller
                                                      : 
                                                     (0x8000000U 
                                                      | (0x7ffffffU 
                                                         & (~ __PVT__adder__DOT__far_alignedSigSmaller)))) 
                                                    + 
                                                    (1U 
                                                     & (~ (IData)(__PVT__adder__DOT__eqSigns))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                        >> 0x10U))) 
                                                                 | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                 << 2U))) 
                                       & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           << 0x10U) 
                                          | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                             >> 0x10U)))), 2U) 
             | ((IData)(((0xc000U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x400U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 1U)
                         : rounding__DOT____VdfgRegularize_h4299fe10_0_5));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                             >> 0xbU))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 0x18U))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlSelfRef.rounding__DOT____VdfgRegularize_h4299fe10_0_10 
        = ((~ (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
               >> 0x16U)) & VL_LTES_III(32, 0x6bU, 
                                        VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 0xdU))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    __PVT__adder__DOT__close_sigOut = (0x7ffffffU & 
                                       VL_SHIFTL_III(27,27,32, 
                                                     ((0x3ffffffU 
                                                       & __VdfgRegularize_hd8e410d4_0_0) 
                                                      << 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0x17U) | ((IData)(__PVT__rounding__DOT__overflow) 
                               & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            >> 0x15U)) 
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
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xbU))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x400U 
                                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 1U))) 
                                                                & (((0x400U 
                                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                                          & ((0x400U 
                                                                              & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x12U)
                                                                              : 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x11U))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xaU) 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x12U)) 
                                                                               | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x10U)))))))))) 
                                                              & ((0x400U 
                                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h4299fe10_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
    __PVT__s1_isZero = ((IData)(__PVT__adder__DOT__addZeros) 
                        | ((~ (IData)(__PVT__s1_isInf)) 
                           & ((~ (IData)((0U != (3U 
                                                 & (__PVT__adder__DOT__close_sigOut 
                                                    >> 0x19U))))) 
                              & (IData)(__PVT__adder__DOT__closeSubMags))));
    vlSelfRef.__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                                (((~ (IData)(
                                                                             (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x16U))) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x1dU))))) 
                                                                 | (((~ (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x16U))) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x1dU))))) 
                                                                    | ((IData)(__PVT__adder__DOT__isInfA) 
                                                                       & ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                                                          & (IData)(__PVT__adder__DOT__isInfB))))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x1dU))) 
                                                                    | ((3U 
                                                                        == 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x1dU)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(__PVT__s1_isInf)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(__PVT__s1_isZero)) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(__PVT__adder__DOT__eqSigns) 
                                                                                | (IData)(__PVT__adder__DOT__isInfA)) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x20U))) 
                                                                                | (((IData)(__PVT__adder__DOT__isInfB) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x20U))) 
                                                                                | ((~ 
                                                                                ((IData)(__PVT__s1_isInf) 
                                                                                | (IData)(__PVT__adder__DOT__addZeros))) 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__PVT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))))) 
                                                                                | ((~ (IData)(__PVT__adder__DOT__closeSubMags)) 
                                                                                & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                                 ? (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & ((((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                                                 ? 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [1U] 
                                                                                >> 0x17U)))
                                                                                 : 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__0__KET____DOT__g_j__BRA__1__KET____DOT__fedp.__PVT__red_in
                                                                                [1U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                                - 
                                                                                ((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                                 : 
                                                                                (1U 
                                                                                & (~ (IData)(__PVT__adder__DOT__eqSigns)))))))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (0x3ffffff8U 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? __PVT__adder__DOT__close_sigOut
                                                                                 : 
                                                                                (0xfffffffU 
                                                                                & ((IData)(__PVT__adder__DOT__eqSigns)
                                                                                 ? 
                                                                                (VL_SHIFTR_III(28,28,32, __PVT__adder__DOT__far_sigSum, 1U) 
                                                                                | (1U 
                                                                                & __PVT__adder__DOT__far_sigSum))
                                                                                 : __PVT__adder__DOT__far_sigSum))) 
                                                                                << 3U))))))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__0__KET____DOT__reduce_add__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__s1_isInf;
    __PVT__s1_isInf = 0;
    CData/*0:0*/ __PVT__s1_isZero;
    __PVT__s1_isZero = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfA;
    __PVT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfB;
    __PVT__adder__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__adder__DOT__eqSigns;
    __PVT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__adder__DOT__sDiffExps;
    __PVT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__adder__DOT__isMaxAlign;
    __PVT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__adder__DOT__closeSubMags;
    __PVT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sSigSum;
    __PVT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sigOut;
    __PVT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__adder__DOT__far_alignedSigSmaller;
    __PVT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__adder__DOT__far_sigSum;
    __PVT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__adder__DOT__addZeros;
    __PVT__adder__DOT__addZeros = 0;
    SData/*9:0*/ adder__DOT____VdfgRegularize_h930a94f0_0_2;
    adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
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
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_1;
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_4;
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_5;
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 0;
    IData/*26:0*/ __VdfgRegularize_hd8e410d4_0_0;
    __VdfgRegularize_hd8e410d4_0_0 = 0;
    IData/*24:0*/ __VdfgRegularize_hd8e410d4_0_1;
    __VdfgRegularize_hd8e410d4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_16;
    __VdfgRegularize_hd8e410d4_0_16 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_17;
    __VdfgRegularize_hd8e410d4_0_17 = 0;
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
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 0xdU))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU))));
    __PVT__rounding__DOT__roundMagUp = ((IData)(((0x4000U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                 & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x15U))) 
                                        | (IData)((
                                                   (0x6000U 
                                                    == 
                                                    (0xe000U 
                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x15U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
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
    __PVT__adder__DOT__addZeros = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [0U] 
                                                                    >> 0x17U))), 6U)) 
                                   & (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                      [0U]
                                                                      [1U] 
                                                                      >> 0x17U))), 6U)));
    __PVT__adder__DOT__isInfA = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [0U][0U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [0U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__isInfB = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [0U][1U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [1U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__eqSigns = ((1U & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                 [0U]
                                                 [0U] 
                                                 >> 0x20U))) 
                                  == (1U & (IData)(
                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                    [0U]
                                                    [1U] 
                                                    >> 0x20U))));
    __VdfgRegularize_hd8e410d4_0_16 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [1U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [1U])));
    __VdfgRegularize_hd8e410d4_0_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [0U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [0U])));
    __PVT__adder__DOT__sDiffExps = (0x3ffU & ((0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                          [0U]
                                                          [0U] 
                                                          >> 0x17U))) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [1U] 
                                                            >> 0x17U)))));
    __PVT__rounding__DOT__commonCase = ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                        & (0U == (0xc00000U 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0xaU)));
    __PVT__s1_isInf = ((IData)(__PVT__adder__DOT__isInfA) 
                       | (IData)(__PVT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_17;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                            [0U][1U] 
                                            >> 0x17U))) 
                         - (0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                              [0U][0U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_16;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__adder__DOT__sDiffExps));
    }
    __PVT__adder__DOT__isMaxAlign = ((0U != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                     & ((0xffffffffU 
                                         != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                        | (0U == (0x1fU 
                                                  & (IData)(__PVT__adder__DOT__sDiffExps)))));
    __PVT__adder__DOT__close_sSigSum = (0x7ffffffU 
                                        & ((((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))) 
                                              & (IData)(__PVT__adder__DOT__sDiffExps))
                                              ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 2U)
                                              : 0U) 
                                            | ((((~ (IData)(__PVT__adder__DOT__sDiffExps)) 
                                                 & VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                 ? 
                                                VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 1U)
                                                 : 0U) 
                                               | (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                   ? __VdfgRegularize_hd8e410d4_0_17
                                                   : 0U))) 
                                           - VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_16, 1U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (VL_SHIFTR_III(27,27,32, 
                                                 (3U 
                                                  | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                     << 2U)), 1U) 
                                   >> 3U)))) | (0U 
                                                != 
                                                (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)) 
                                                 & (1U 
                                                    | (6U 
                                                       & (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                          << 1U))))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                    << 2U)));
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 
        (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_hd8e410d4_0_1 
                                        << 5U)) >> 
                        ((IData)(__PVT__adder__DOT__isMaxAlign)
                          ? 0x1fU : (0x1fU & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__adder__DOT__closeSubMags = ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                       & ((~ (IData)(__PVT__adder__DOT__isMaxAlign)) 
                                          & (1U >= 
                                             (0x1fU 
                                              & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_hd8e410d4_0_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__adder__DOT__close_sSigSum)
                                        : __PVT__adder__DOT__close_sSigSum));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (__PVT__rounding__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                (7U 
                                                 & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)) 
                                                    & __PVT__rounding__DOT__genblk2__DOT__roundPosMask))));
    __PVT__adder__DOT__far_alignedSigSmaller = ((0x7fffffeU 
                                                 & (__PVT__adder__DOT__far_mainAlignedSigSmaller 
                                                    >> 2U)) 
                                                | ((0U 
                                                    != 
                                                    (7U 
                                                     & __PVT__adder__DOT__far_mainAlignedSigSmaller)) 
                                                   | (0U 
                                                      != 
                                                      ((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_1 
                                                                      >> 0x16U)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (__VdfgRegularize_hd8e410d4_0_1 
                                                                         >> 0x12U)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfU 
                                                                         & (__VdfgRegularize_hd8e410d4_0_1 
                                                                            >> 0xeU)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xfU 
                                                                            & (__VdfgRegularize_hd8e410d4_0_1 
                                                                               >> 0xaU)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xfU 
                                                                               & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 6U)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 2U)))) 
                                                                        << 1U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & __VdfgRegularize_hd8e410d4_0_1)))))))) 
                                                       & ((0x40U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                               ? 7U
                                                                               : 
                                                                              (7U 
                                                                               & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                 << 3U)) 
                                                             | ((0x10U 
                                                                 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 1U)) 
                                                                   | ((4U 
                                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                          >> 3U)) 
                                                                      | ((2U 
                                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                             >> 5U)) 
                                                                         | (1U 
                                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                               >> 7U))))))))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_hd8e410d4_0_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_hd8e410d4_0_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_hd8e410d4_0_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_hd8e410d4_0_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_hd8e410d4_0_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_hd8e410d4_0_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x18U)))))))))))))));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__adder__DOT__far_sigSum = (0xfffffffU & (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 (0xffffffU 
                                                                  & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                      ? __VdfgRegularize_hd8e410d4_0_16
                                                                      : __VdfgRegularize_hd8e410d4_0_17)), 3U) 
                                                   + 
                                                   (((IData)(__PVT__adder__DOT__eqSigns)
                                                      ? __PVT__adder__DOT__far_alignedSigSmaller
                                                      : 
                                                     (0x8000000U 
                                                      | (0x7ffffffU 
                                                         & (~ __PVT__adder__DOT__far_alignedSigSmaller)))) 
                                                    + 
                                                    (1U 
                                                     & (~ (IData)(__PVT__adder__DOT__eqSigns))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                        >> 0x10U))) 
                                                                 | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                 << 2U))) 
                                       & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           << 0x10U) 
                                          | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                             >> 0x10U)))), 2U) 
             | ((IData)(((0xc000U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x400U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 1U)
                         : rounding__DOT____VdfgRegularize_h4299fe10_0_5));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                             >> 0xbU))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 0x18U))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlSelfRef.rounding__DOT____VdfgRegularize_h4299fe10_0_10 
        = ((~ (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
               >> 0x16U)) & VL_LTES_III(32, 0x6bU, 
                                        VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 0xdU))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    __PVT__adder__DOT__close_sigOut = (0x7ffffffU & 
                                       VL_SHIFTL_III(27,27,32, 
                                                     ((0x3ffffffU 
                                                       & __VdfgRegularize_hd8e410d4_0_0) 
                                                      << 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0x17U) | ((IData)(__PVT__rounding__DOT__overflow) 
                               & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            >> 0x15U)) 
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
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xbU))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x400U 
                                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 1U))) 
                                                                & (((0x400U 
                                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                                          & ((0x400U 
                                                                              & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x12U)
                                                                              : 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x11U))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xaU) 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x12U)) 
                                                                               | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x10U)))))))))) 
                                                              & ((0x400U 
                                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h4299fe10_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
    __PVT__s1_isZero = ((IData)(__PVT__adder__DOT__addZeros) 
                        | ((~ (IData)(__PVT__s1_isInf)) 
                           & ((~ (IData)((0U != (3U 
                                                 & (__PVT__adder__DOT__close_sigOut 
                                                    >> 0x19U))))) 
                              & (IData)(__PVT__adder__DOT__closeSubMags))));
    vlSelfRef.__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                                (((~ (IData)(
                                                                             (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x16U))) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x1dU))))) 
                                                                 | (((~ (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x16U))) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x1dU))))) 
                                                                    | ((IData)(__PVT__adder__DOT__isInfA) 
                                                                       & ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                                                          & (IData)(__PVT__adder__DOT__isInfB))))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x1dU))) 
                                                                    | ((3U 
                                                                        == 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x1dU)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(__PVT__s1_isInf)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(__PVT__s1_isZero)) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(__PVT__adder__DOT__eqSigns) 
                                                                                | (IData)(__PVT__adder__DOT__isInfA)) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U))) 
                                                                                | (((IData)(__PVT__adder__DOT__isInfB) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x20U))) 
                                                                                | ((~ 
                                                                                ((IData)(__PVT__s1_isInf) 
                                                                                | (IData)(__PVT__adder__DOT__addZeros))) 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__PVT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))))) 
                                                                                | ((~ (IData)(__PVT__adder__DOT__closeSubMags)) 
                                                                                & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                                 ? (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x20U))))))))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & ((((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                                                 ? 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [1U] 
                                                                                >> 0x17U)))
                                                                                 : 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [0U] 
                                                                                >> 0x17U)))) 
                                                                                - 
                                                                                ((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                                 : 
                                                                                (1U 
                                                                                & (~ (IData)(__PVT__adder__DOT__eqSigns)))))))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (0x3ffffff8U 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? __PVT__adder__DOT__close_sigOut
                                                                                 : 
                                                                                (0xfffffffU 
                                                                                & ((IData)(__PVT__adder__DOT__eqSigns)
                                                                                 ? 
                                                                                (VL_SHIFTR_III(28,28,32, __PVT__adder__DOT__far_sigSum, 1U) 
                                                                                | (1U 
                                                                                & __PVT__adder__DOT__far_sigSum))
                                                                                 : __PVT__adder__DOT__far_sigSum))) 
                                                                                << 3U))))))))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add__0(Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_tcu_bhf_fadd__IC1_OC1_A2___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp__g_red_tree__BRA__0__KET____DOT__g_add__BRA__1__KET____DOT__reduce_add__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__s1_isInf;
    __PVT__s1_isInf = 0;
    CData/*0:0*/ __PVT__s1_isZero;
    __PVT__s1_isZero = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfA;
    __PVT__adder__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__adder__DOT__isInfB;
    __PVT__adder__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__adder__DOT__eqSigns;
    __PVT__adder__DOT__eqSigns = 0;
    SData/*9:0*/ __PVT__adder__DOT__sDiffExps;
    __PVT__adder__DOT__sDiffExps = 0;
    CData/*0:0*/ __PVT__adder__DOT__isMaxAlign;
    __PVT__adder__DOT__isMaxAlign = 0;
    CData/*0:0*/ __PVT__adder__DOT__closeSubMags;
    __PVT__adder__DOT__closeSubMags = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sSigSum;
    __PVT__adder__DOT__close_sSigSum = 0;
    IData/*26:0*/ __PVT__adder__DOT__close_sigOut;
    __PVT__adder__DOT__close_sigOut = 0;
    IData/*28:0*/ __PVT__adder__DOT__far_mainAlignedSigSmaller;
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__adder__DOT__far_alignedSigSmaller;
    __PVT__adder__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__adder__DOT__far_sigSum;
    __PVT__adder__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__adder__DOT__addZeros;
    __PVT__adder__DOT__addZeros = 0;
    SData/*9:0*/ adder__DOT____VdfgRegularize_h930a94f0_0_2;
    adder__DOT____VdfgRegularize_h930a94f0_0_2 = 0;
    SData/*12:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar = 0;
    CData/*4:0*/ __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
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
    IData/*24:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_1;
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 0;
    CData/*0:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_4;
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 0;
    IData/*31:0*/ rounding__DOT____VdfgRegularize_h4299fe10_0_5;
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 0;
    IData/*26:0*/ __VdfgRegularize_hd8e410d4_0_0;
    __VdfgRegularize_hd8e410d4_0_0 = 0;
    IData/*24:0*/ __VdfgRegularize_hd8e410d4_0_1;
    __VdfgRegularize_hd8e410d4_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_16;
    __VdfgRegularize_hd8e410d4_0_16 = 0;
    IData/*23:0*/ __VdfgRegularize_hd8e410d4_0_17;
    __VdfgRegularize_hd8e410d4_0_17 = 0;
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
    vlSelfRef.__PVT__rounding__DOT__isNaNOut = (IData)(
                                                       (0U 
                                                        != 
                                                        (0x3000000U 
                                                         & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    rounding__DOT____VdfgRegularize_h4299fe10_0_4 = 
        ((0U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                       >> 0xdU))) | (4U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                  >> 0xdU))));
    __PVT__rounding__DOT__roundMagUp = ((IData)(((0x4000U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                 & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                    >> 0x15U))) 
                                        | (IData)((
                                                   (0x6000U 
                                                    == 
                                                    (0xe000U 
                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                   & (~ 
                                                      (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                       >> 0x15U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vrtlsim_shim__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, 
                                              (0x3ffU 
                                               & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0xbU))))));
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
    __PVT__adder__DOT__addZeros = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [2U] 
                                                                    >> 0x17U))), 6U)) 
                                   & (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                      [0U]
                                                                      [3U] 
                                                                      >> 0x17U))), 6U)));
    __PVT__adder__DOT__isInfA = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [0U][2U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [2U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__isInfB = ((~ (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                             [0U][3U] 
                                             >> 0x1dU))) 
                                 & (3U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                    [0U]
                                                                    [3U] 
                                                                    >> 0x17U))), 7U)));
    __PVT__adder__DOT__eqSigns = ((1U & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                 [0U]
                                                 [2U] 
                                                 >> 0x20U))) 
                                  == (1U & (IData)(
                                                   (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                    [0U]
                                                    [3U] 
                                                    >> 0x20U))));
    __VdfgRegularize_hd8e410d4_0_16 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [3U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [3U])));
    __VdfgRegularize_hd8e410d4_0_17 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                         [0U]
                                                                         [2U] 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [2U])));
    __PVT__adder__DOT__sDiffExps = (0x3ffU & ((0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                          [0U]
                                                          [2U] 
                                                          >> 0x17U))) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                            [0U]
                                                            [3U] 
                                                            >> 0x17U)))));
    __PVT__rounding__DOT__commonCase = ((~ (IData)(vlSelfRef.__PVT__rounding__DOT__isNaNOut)) 
                                        & (0U == (0xc00000U 
                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])));
    __PVT__rounding__DOT__overflow_roundMagUp = ((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                 | (IData)(__PVT__rounding__DOT__roundMagUp));
    rounding__DOT____VdfgRegularize_h4299fe10_0_1 = 
        (__PVT__rounding__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
         | (1U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0xaU)));
    __PVT__s1_isInf = ((IData)(__PVT__adder__DOT__isInfA) 
                       | (IData)(__PVT__adder__DOT__isInfB));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))) {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_17;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & ((0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                            [0U][3U] 
                                            >> 0x17U))) 
                         - (0x1ffU & (IData)((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                              [0U][2U] 
                                              >> 0x17U)))));
    } else {
        __VdfgRegularize_hd8e410d4_0_1 = __VdfgRegularize_hd8e410d4_0_16;
        adder__DOT____VdfgRegularize_h930a94f0_0_2 
            = (0x3ffU & (IData)(__PVT__adder__DOT__sDiffExps));
    }
    __PVT__adder__DOT__isMaxAlign = ((0U != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                     & ((0xffffffffU 
                                         != VL_SHIFTRS_III(32,32,32, 
                                                           VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)), 5U)) 
                                        | (0U == (0x1fU 
                                                  & (IData)(__PVT__adder__DOT__sDiffExps)))));
    __PVT__adder__DOT__close_sSigSum = (0x7ffffffU 
                                        & ((((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))) 
                                              & (IData)(__PVT__adder__DOT__sDiffExps))
                                              ? VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 2U)
                                              : 0U) 
                                            | ((((~ (IData)(__PVT__adder__DOT__sDiffExps)) 
                                                 & VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                 ? 
                                                VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_17, 1U)
                                                 : 0U) 
                                               | (VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                   ? __VdfgRegularize_hd8e410d4_0_17
                                                   : 0U))) 
                                           - VL_SHIFTL_III(27,27,32, __VdfgRegularize_hd8e410d4_0_16, 1U)));
    __PVT__rounding__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (VL_SHIFTR_III(27,27,32, 
                                                 (3U 
                                                  | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                     << 2U)), 1U) 
                                   >> 3U)))) | (0U 
                                                != 
                                                (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                     >> 0x10U)) 
                                                 & (1U 
                                                    | (6U 
                                                       & (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                          << 1U))))));
    __PVT__rounding__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                             << 2U)), 1U)) 
           & (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                    << 2U)));
    __PVT__adder__DOT__far_mainAlignedSigSmaller = 
        (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_hd8e410d4_0_1 
                                        << 5U)) >> 
                        ((IData)(__PVT__adder__DOT__isMaxAlign)
                          ? 0x1fU : (0x1fU & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __PVT__adder__DOT__closeSubMags = ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                       & ((~ (IData)(__PVT__adder__DOT__isMaxAlign)) 
                                          & (1U >= 
                                             (0x1fU 
                                              & (IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2)))));
    __VdfgRegularize_hd8e410d4_0_0 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))
                                        ? (- __PVT__adder__DOT__close_sSigSum)
                                        : __PVT__adder__DOT__close_sSigSum));
    __PVT__rounding__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                  << 0xdU) | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                              >> 0x13U)) 
                                & (__PVT__rounding__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                (7U 
                                                 & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                        >> 0x10U)) 
                                                    & __PVT__rounding__DOT__genblk2__DOT__roundPosMask))));
    __PVT__adder__DOT__far_alignedSigSmaller = ((0x7fffffeU 
                                                 & (__PVT__adder__DOT__far_mainAlignedSigSmaller 
                                                    >> 2U)) 
                                                | ((0U 
                                                    != 
                                                    (7U 
                                                     & __PVT__adder__DOT__far_mainAlignedSigSmaller)) 
                                                   | (0U 
                                                      != 
                                                      ((((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_1 
                                                                      >> 0x16U)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & (__VdfgRegularize_hd8e410d4_0_1 
                                                                         >> 0x12U)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xfU 
                                                                         & (__VdfgRegularize_hd8e410d4_0_1 
                                                                            >> 0xeU)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xfU 
                                                                            & (__VdfgRegularize_hd8e410d4_0_1 
                                                                               >> 0xaU)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xfU 
                                                                               & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 6U)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (__VdfgRegularize_hd8e410d4_0_1 
                                                                                >> 2U)))) 
                                                                        << 1U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & __VdfgRegularize_hd8e410d4_0_1)))))))) 
                                                       & ((0x40U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                               ? 7U
                                                                               : 
                                                                              (7U 
                                                                               & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                              << 5U)) 
                                                          | ((0x20U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                 << 3U)) 
                                                             | ((0x10U 
                                                                 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                    << 1U)) 
                                                                | ((8U 
                                                                    & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                       >> 1U)) 
                                                                   | ((4U 
                                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                          >> 3U)) 
                                                                      | ((2U 
                                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                             >> 5U)) 
                                                                         | (1U 
                                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                ((IData)(__PVT__adder__DOT__isMaxAlign)
                                                                                 ? 7U
                                                                                 : 
                                                                                (7U 
                                                                                & ((IData)(adder__DOT____VdfgRegularize_h930a94f0_0_2) 
                                                                                >> 2U)))) 
                                                                               >> 7U))))))))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn 
        = (((IData)((0U != (3U & __VdfgRegularize_hd8e410d4_0_0))) 
            << 0xcU) | (((IData)((0U != (3U & (__VdfgRegularize_hd8e410d4_0_0 
                                               >> 2U)))) 
                         << 0xbU) | (((IData)((0U != 
                                               (3U 
                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                   >> 4U)))) 
                                      << 0xaU) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (__VdfgRegularize_hd8e410d4_0_0 
                                                                >> 6U)))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                   >> 8U)))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (__VdfgRegularize_hd8e410d4_0_0 
                                                                      >> 0xaU)))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (__VdfgRegularize_hd8e410d4_0_0 
                                                                         >> 0xcU)))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (__VdfgRegularize_hd8e410d4_0_0 
                                                                            >> 0xeU)))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (__VdfgRegularize_hd8e410d4_0_0 
                                                                               >> 0x10U)))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (3U 
                                                                               & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x12U)))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x14U)))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x16U)))) 
                                                                           << 1U) 
                                                                          | (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (__VdfgRegularize_hd8e410d4_0_0 
                                                                                >> 0x18U)))))))))))))));
    __PVT__rounding__DOT__genblk2__DOT__anyRound = 
        ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__adder__DOT__far_sigSum = (0xfffffffU & (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 (0xffffffU 
                                                                  & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                      ? __VdfgRegularize_hd8e410d4_0_16
                                                                      : __VdfgRegularize_hd8e410d4_0_17)), 3U) 
                                                   + 
                                                   (((IData)(__PVT__adder__DOT__eqSigns)
                                                      ? __PVT__adder__DOT__far_alignedSigSmaller
                                                      : 
                                                     (0x8000000U 
                                                      | (0x7ffffffU 
                                                         & (~ __PVT__adder__DOT__far_alignedSigSmaller)))) 
                                                    + 
                                                    (1U 
                                                     & (~ (IData)(__PVT__adder__DOT__eqSigns))))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    rounding__DOT____VdfgRegularize_h4299fe10_0_5 = 
        ((((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
           & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)) 
          | ((IData)(__PVT__rounding__DOT__roundMagUp) 
             & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
          ? (((IData)((((0U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                        & (~ (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRoundExtra))) 
                       & (IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit)))
               ? (~ VL_SHIFTR_III(32,32,32, (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                   << 2U)), 1U))
               : 0xffffffffU) & ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                             (3U 
                                                              | ((0x7ffffffU 
                                                                  & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                        >> 0x10U))) 
                                                                 | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                    << 2U))), 2U)))
          : (VL_SHIFTR_III(32,32,32, (0x7ffffffU & 
                                      ((~ (3U | (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                 << 2U))) 
                                       & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                           << 0x10U) 
                                          | (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                             >> 0x10U)))), 2U) 
             | ((IData)(((0xc000U == (0xe000U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                         & (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))
                 ? VL_SHIFTR_III(32,32,32, __PVT__rounding__DOT__genblk2__DOT__roundPosMask, 1U)
                 : 0U)));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                              ? 1U : 0U) | ((4U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 2U : 0U)) 
                           | ((8U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                               ? 3U : 0U)) | ((0x10U 
                                               & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                             ? 5U : 0U)) | ((0x40U 
                                             & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                             ? 6U : 0U)) 
                       | ((0x80U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                           ? 7U : 0U)) | ((0x100U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                           ? 8U : 0U)) 
                     | ((0x200U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 9U : 0U)) | ((0x400U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 0xaU : 0U)));
    vlSelfRef.__PVT__rounding__DOT__common_fractOut 
        = (0x7fffffU & ((0x400U & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                         ? VL_SHIFTR_III(26,26,32, 
                                         (0x3ffffffU 
                                          & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 1U)
                         : rounding__DOT____VdfgRegularize_h4299fe10_0_5));
    vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                             >> 0xbU))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, 
                                                   (0x3ffffffU 
                                                    & rounding__DOT____VdfgRegularize_h4299fe10_0_5), 0x18U))));
    __PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                      | ((0x800U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                          ? 0xbU : 0U)) | ((0x1000U 
                                            & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                            ? 0xcU : 0U)) 
                    | ((0x2000U & (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 0xdU : 0U)));
    vlSelfRef.rounding__DOT____VdfgRegularize_h4299fe10_0_10 
        = ((~ (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
               >> 0x16U)) & VL_LTES_III(32, 0x6bU, 
                                        VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__rounding__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__rounding__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
              & ((IData)(__PVT__rounding__DOT__roundMagUp) 
                 | (6U == (7U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                 >> 0xdU))))));
    __PVT__rounding__DOT__overflow = ((IData)(__PVT__rounding__DOT__commonCase) 
                                      & VL_LTES_III(32, 3U, 
                                                    VL_SHIFTRS_III(32,32,32, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    __PVT__adder__DOT__close_sigOut = (0x7ffffffU & 
                                       VL_SHIFTL_III(27,27,32, 
                                                     ((0x3ffffffU 
                                                       & __VdfgRegularize_hd8e410d4_0_0) 
                                                      << 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__rounding__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__rounding__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__rounding__DOT__overflow));
    vlSelfRef.__PVT__rounding__DOT__notNaN_isInfOut 
        = (1U & ((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                  >> 0x17U) | ((IData)(__PVT__rounding__DOT__overflow) 
                               & (IData)(__PVT__rounding__DOT__overflow_roundMagUp))));
    vlSelfRef.__PVT__s2_fflags = ((0x10U & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                            >> 0x15U)) 
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
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xbU))))), 8U)) 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((0x400U 
                                                                   & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                   ? 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 2U)
                                                                   : 
                                                                  (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                   >> 1U))) 
                                                                & (((0x400U 
                                                                     & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                     ? 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x19U)
                                                                     : 
                                                                    (rounding__DOT____VdfgRegularize_h4299fe10_0_5 
                                                                     >> 0x18U)) 
                                                                   & ((IData)(__PVT__rounding__DOT__genblk2__DOT__roundPosBit) 
                                                                      & (((IData)(rounding__DOT____VdfgRegularize_h4299fe10_0_4) 
                                                                          & ((0x400U 
                                                                              & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x12U)
                                                                              : 
                                                                             (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                              >> 0x11U))) 
                                                                         | ((IData)(__PVT__rounding__DOT__roundMagUp) 
                                                                            & (((vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                                >> 0xaU) 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x12U)) 
                                                                               | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                                >> 0x10U)))))))))) 
                                                              & ((0x400U 
                                                                  & vlSelfRef.__PVT__pipe_add__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U])
                                                                  ? 
                                                                 (rounding__DOT____VdfgRegularize_h4299fe10_0_1 
                                                                  >> 1U)
                                                                  : rounding__DOT____VdfgRegularize_h4299fe10_0_1)))))) 
                                                 << 1U) 
                                                | ((IData)(__PVT__rounding__DOT__overflow) 
                                                   | ((IData)(__PVT__rounding__DOT__commonCase) 
                                                      & (VL_GTS_III(32, 0x6bU, 
                                                                    VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__rounding__DOT__genblk2__DOT__sRoundedExp))) 
                                                         | (IData)(__PVT__rounding__DOT__genblk2__DOT__anyRound)))))));
    __PVT__s1_isZero = ((IData)(__PVT__adder__DOT__addZeros) 
                        | ((~ (IData)(__PVT__s1_isInf)) 
                           & ((~ (IData)((0U != (3U 
                                                 & (__PVT__adder__DOT__close_sigOut 
                                                    >> 0x19U))))) 
                              & (IData)(__PVT__adder__DOT__closeSubMags))));
    vlSelfRef.__Vcellinp__pipe_add__data_in = (((QData)((IData)(
                                                                (((~ (IData)(
                                                                             (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x16U))) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x1dU))))) 
                                                                 | (((~ (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x16U))) 
                                                                     & (7U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU))))) 
                                                                    | ((IData)(__PVT__adder__DOT__isInfA) 
                                                                       & ((~ (IData)(__PVT__adder__DOT__eqSigns)) 
                                                                          & (IData)(__PVT__adder__DOT__isInfB))))))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((3U 
                                                                      == 
                                                                      VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x17U))), 7U)) 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x1dU))) 
                                                                    | ((3U 
                                                                        == 
                                                                        VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U))), 7U)) 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(__PVT__s1_isInf)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(__PVT__s1_isZero)) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(__PVT__adder__DOT__eqSigns) 
                                                                                | (IData)(__PVT__adder__DOT__isInfA)) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U))) 
                                                                                | (((IData)(__PVT__adder__DOT__isInfB) 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x20U))) 
                                                                                | ((~ 
                                                                                ((IData)(__PVT__s1_isInf) 
                                                                                | (IData)(__PVT__adder__DOT__addZeros))) 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (__PVT__adder__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U)) 
                                                                                ^ 
                                                                                VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, __PVT__adder__DOT__close_sSigSum))))) 
                                                                                | ((~ (IData)(__PVT__adder__DOT__closeSubMags)) 
                                                                                & (VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps)))
                                                                                 ? (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x20U))))))))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x3ffU 
                                                                                & ((((IData)(__PVT__adder__DOT__closeSubMags) 
                                                                                | VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, (IData)(__PVT__adder__DOT__sDiffExps))))
                                                                                 ? 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U)))
                                                                                 : 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__tcu_unit__DOT__g_blocks__BRA__0__KET____DOT__tcu_fp__DOT__g_i__BRA__1__KET____DOT__g_j__BRA__0__KET____DOT__fedp.__PVT__red_in
                                                                                [0U]
                                                                                [2U] 
                                                                                >> 0x17U)))) 
                                                                                - 
                                                                                ((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(5,5,32, (IData)(__PVT__adder__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                                                 : 
                                                                                (1U 
                                                                                & (~ (IData)(__PVT__adder__DOT__eqSigns)))))))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                (0x3ffffff8U 
                                                                                & (((IData)(__PVT__adder__DOT__closeSubMags)
                                                                                 ? __PVT__adder__DOT__close_sigOut
                                                                                 : 
                                                                                (0xfffffffU 
                                                                                & ((IData)(__PVT__adder__DOT__eqSigns)
                                                                                 ? 
                                                                                (VL_SHIFTR_III(28,28,32, __PVT__adder__DOT__far_sigSum, 1U) 
                                                                                | (1U 
                                                                                & __PVT__adder__DOT__far_sigSum))
                                                                                 : __PVT__adder__DOT__far_sigSum))) 
                                                                                << 3U))))))))));
}
