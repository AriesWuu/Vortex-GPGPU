// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_fpu_dpi__N4_O3.h"
#include "Vrtlsim_shim__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_he26a82f7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h9d59a2f8_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h6d4859c1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h4488829f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h68605346_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_ha0f08ccc_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hec956690_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_he1e949b8_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h1d7ca84f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hb2fa832c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h7129fbc5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h1b7ae01a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hb1a9f5bc_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hdbcbe362_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h71337474_0;

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_8[0U] = (0x40U | ((0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3bU]) 
                              | ((0x3eU & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3bU] 
                                           >> 1U)) 
                                 | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                          >> 7U)))));
    __Vtemp_8[1U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3cU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3cU]));
    __Vtemp_8[2U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3dU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3dU]));
    __Vtemp_8[3U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3eU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3eU]));
    __Vtemp_8[4U] = (0x2000U | ((0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                                << 0xaU)) 
                                | ((0x1f00U & ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                                << 9U) 
                                               | (0x100U 
                                                  & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x25U] 
                                                     >> 0x17U)))) 
                                   | ((0x80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                                << 3U)) 
                                      | (0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU])))));
    __Vtemp_8[5U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                       << 0xaU)));
    __Vtemp_8[6U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                       << 0xaU)));
    __Vtemp_8[7U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                       << 0xaU)));
    __Vtemp_8[8U] = ((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                 << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                              >> 0x16U));
    __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(1U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[(0xfU & (((IData)(0x87U) 
                                            * (1U & 
                                               (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U)))) 
                                           >> 5U))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(2U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(1U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(3U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(2U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(4U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(3U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(5U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(4U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    if ((0x10dU >= (0x1ffU & ((IData)(0x87U) * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U))))))) {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_9[3U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_9[4U]);
    } else {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[2U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[3U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[3U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[4U]);
    }
    vlSelfRef.__VdfgRegularize_h0c3eaefd_0_2 = (IData)(
                                                       ((~ 
                                                         (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                          >> 8U)) 
                                                        & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                                           >> 5U)));
    vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in = 
        ((2U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                >> 4U)) | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                 >> 8U)));
    vlSelfRef.__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    __Vtableidx1 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                              >> 6U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                     >> 0xbU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
                                             >> 0xfU))));
    vlSelfRef.__PVT__is_fadd = Vrtlsim_shim__ConstPool__TABLE_he26a82f7_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_fsub = Vrtlsim_shim__ConstPool__TABLE_h9d59a2f8_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_fmul = Vrtlsim_shim__ConstPool__TABLE_h6d4859c1_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_fmadd = Vrtlsim_shim__ConstPool__TABLE_h4488829f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_fmsub = Vrtlsim_shim__ConstPool__TABLE_h68605346_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_fnmadd = Vrtlsim_shim__ConstPool__TABLE_ha0f08ccc_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_fnmsub = Vrtlsim_shim__ConstPool__TABLE_hec956690_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_div = Vrtlsim_shim__ConstPool__TABLE_he1e949b8_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_fcmp = Vrtlsim_shim__ConstPool__TABLE_h1d7ca84f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_itof = Vrtlsim_shim__ConstPool__TABLE_hb2fa832c_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_utof = Vrtlsim_shim__ConstPool__TABLE_h7129fbc5_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_ftoi = Vrtlsim_shim__ConstPool__TABLE_h1b7ae01a_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_ftou = Vrtlsim_shim__ConstPool__TABLE_hb1a9f5bc_0
        [__Vtableidx1];
    vlSelfRef.__PVT__is_f2f = Vrtlsim_shim__ConstPool__TABLE_hdbcbe362_0
        [__Vtableidx1];
    vlSelfRef.__PVT__core_select = Vrtlsim_shim__ConstPool__TABLE_h71337474_0
        [__Vtableidx1];
    vlSelfRef.__PVT__per_core_valid_out = ((8U & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                  >> 0xcU)) 
                                           | ((4U & 
                                               vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U]) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                                       >> 0x1bU)))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][0U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[1U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][0U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[2U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][2U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[3U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][2U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[4U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][4U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[5U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][4U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[6U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][6U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[7U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][6U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[1U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[2U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[3U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[4U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[5U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[6U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[7U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    __VdfgRegularize_h6d72849d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelfRef.__PVT__per_core_valid_out));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h6d72849d_0_0) 
                                                & (IData)(vlSelfRef.__PVT__is_div));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelfRef.__PVT__is_div)) 
                                                  & (IData)(__VdfgRegularize_h6d72849d_0_0));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_8[0U] = (0x40U | ((0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3bU]) 
                              | ((0x3eU & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3bU] 
                                           >> 1U)) 
                                 | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                          >> 7U)))));
    __Vtemp_8[1U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3cU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3cU]));
    __Vtemp_8[2U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3dU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3dU]));
    __Vtemp_8[3U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3eU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3eU]));
    __Vtemp_8[4U] = (0x2000U | ((0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                                << 0xaU)) 
                                | ((0x1f00U & ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                                << 9U) 
                                               | (0x100U 
                                                  & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x25U] 
                                                     >> 0x17U)))) 
                                   | ((0x80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                                << 3U)) 
                                      | (0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU])))));
    __Vtemp_8[5U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                       << 0xaU)));
    __Vtemp_8[6U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                       << 0xaU)));
    __Vtemp_8[7U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                       << 0xaU)));
    __Vtemp_8[8U] = ((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                 << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                              >> 0x16U));
    __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(1U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[(0xfU & (((IData)(0x87U) 
                                            * (1U & 
                                               (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U)))) 
                                           >> 5U))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(2U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(1U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(3U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(2U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(4U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(3U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(5U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(4U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    if ((0x10dU >= (0x1ffU & ((IData)(0x87U) * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U))))))) {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_9[3U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_9[4U]);
    } else {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[2U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[3U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[3U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[4U]);
    }
    vlSelfRef.__VdfgRegularize_h0c3eaefd_0_2 = (IData)(
                                                       ((~ 
                                                         (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                          >> 8U)) 
                                                        & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                                           >> 5U)));
    vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in = 
        ((2U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                >> 4U)) | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                 >> 8U)));
    vlSelfRef.__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    __Vtableidx2 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                              >> 6U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                     >> 0xbU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
                                             >> 0xfU))));
    vlSelfRef.__PVT__is_fadd = Vrtlsim_shim__ConstPool__TABLE_he26a82f7_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_fsub = Vrtlsim_shim__ConstPool__TABLE_h9d59a2f8_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_fmul = Vrtlsim_shim__ConstPool__TABLE_h6d4859c1_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_fmadd = Vrtlsim_shim__ConstPool__TABLE_h4488829f_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_fmsub = Vrtlsim_shim__ConstPool__TABLE_h68605346_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_fnmadd = Vrtlsim_shim__ConstPool__TABLE_ha0f08ccc_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_fnmsub = Vrtlsim_shim__ConstPool__TABLE_hec956690_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_div = Vrtlsim_shim__ConstPool__TABLE_he1e949b8_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_fcmp = Vrtlsim_shim__ConstPool__TABLE_h1d7ca84f_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_itof = Vrtlsim_shim__ConstPool__TABLE_hb2fa832c_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_utof = Vrtlsim_shim__ConstPool__TABLE_h7129fbc5_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_ftoi = Vrtlsim_shim__ConstPool__TABLE_h1b7ae01a_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_ftou = Vrtlsim_shim__ConstPool__TABLE_hb1a9f5bc_0
        [__Vtableidx2];
    vlSelfRef.__PVT__is_f2f = Vrtlsim_shim__ConstPool__TABLE_hdbcbe362_0
        [__Vtableidx2];
    vlSelfRef.__PVT__core_select = Vrtlsim_shim__ConstPool__TABLE_h71337474_0
        [__Vtableidx2];
    vlSelfRef.__PVT__per_core_valid_out = ((8U & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                  >> 0xcU)) 
                                           | ((4U & 
                                               vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U]) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                                       >> 0x1bU)))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][0U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[1U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][0U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[2U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][2U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[3U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][2U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[4U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][4U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[5U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][4U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[6U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][6U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[7U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][6U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[1U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[2U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[3U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[4U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[5U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[6U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[7U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    __VdfgRegularize_h6d72849d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelfRef.__PVT__per_core_valid_out));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h6d72849d_0_0) 
                                                & (IData)(vlSelfRef.__PVT__is_div));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelfRef.__PVT__is_div)) 
                                                  & (IData)(__VdfgRegularize_h6d72849d_0_0));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_8[0U] = (0x40U | ((0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3bU]) 
                              | ((0x3eU & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3bU] 
                                           >> 1U)) 
                                 | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                          >> 7U)))));
    __Vtemp_8[1U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3cU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3cU]));
    __Vtemp_8[2U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3dU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3dU]));
    __Vtemp_8[3U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3eU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3eU]));
    __Vtemp_8[4U] = (0x2000U | ((0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                                << 0xaU)) 
                                | ((0x1f00U & ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                                << 9U) 
                                               | (0x100U 
                                                  & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x25U] 
                                                     >> 0x17U)))) 
                                   | ((0x80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                                << 3U)) 
                                      | (0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU])))));
    __Vtemp_8[5U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                       << 0xaU)));
    __Vtemp_8[6U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                       << 0xaU)));
    __Vtemp_8[7U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                       << 0xaU)));
    __Vtemp_8[8U] = ((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                 << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                              >> 0x16U));
    __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(1U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[(0xfU & (((IData)(0x87U) 
                                            * (1U & 
                                               (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U)))) 
                                           >> 5U))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(2U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(1U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(3U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(2U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(4U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(3U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(5U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(4U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    if ((0x10dU >= (0x1ffU & ((IData)(0x87U) * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U))))))) {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_9[3U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_9[4U]);
    } else {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[2U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[3U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[3U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[4U]);
    }
    vlSelfRef.__VdfgRegularize_h0c3eaefd_0_2 = (IData)(
                                                       ((~ 
                                                         (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                          >> 8U)) 
                                                        & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                                           >> 5U)));
    vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in = 
        ((2U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                >> 4U)) | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                 >> 8U)));
    vlSelfRef.__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    __Vtableidx3 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                              >> 6U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                     >> 0xbU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
                                             >> 0xfU))));
    vlSelfRef.__PVT__is_fadd = Vrtlsim_shim__ConstPool__TABLE_he26a82f7_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_fsub = Vrtlsim_shim__ConstPool__TABLE_h9d59a2f8_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_fmul = Vrtlsim_shim__ConstPool__TABLE_h6d4859c1_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_fmadd = Vrtlsim_shim__ConstPool__TABLE_h4488829f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_fmsub = Vrtlsim_shim__ConstPool__TABLE_h68605346_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_fnmadd = Vrtlsim_shim__ConstPool__TABLE_ha0f08ccc_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_fnmsub = Vrtlsim_shim__ConstPool__TABLE_hec956690_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_div = Vrtlsim_shim__ConstPool__TABLE_he1e949b8_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_fcmp = Vrtlsim_shim__ConstPool__TABLE_h1d7ca84f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_itof = Vrtlsim_shim__ConstPool__TABLE_hb2fa832c_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_utof = Vrtlsim_shim__ConstPool__TABLE_h7129fbc5_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_ftoi = Vrtlsim_shim__ConstPool__TABLE_h1b7ae01a_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_ftou = Vrtlsim_shim__ConstPool__TABLE_hb1a9f5bc_0
        [__Vtableidx3];
    vlSelfRef.__PVT__is_f2f = Vrtlsim_shim__ConstPool__TABLE_hdbcbe362_0
        [__Vtableidx3];
    vlSelfRef.__PVT__core_select = Vrtlsim_shim__ConstPool__TABLE_h71337474_0
        [__Vtableidx3];
    vlSelfRef.__PVT__per_core_valid_out = ((8U & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                  >> 0xcU)) 
                                           | ((4U & 
                                               vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U]) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                                       >> 0x1bU)))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][0U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[1U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][0U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[2U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][2U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[3U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][2U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[4U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][4U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[5U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][4U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[6U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][6U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[7U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][6U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[1U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[2U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[3U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[4U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[5U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[6U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[7U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    __VdfgRegularize_h6d72849d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelfRef.__PVT__per_core_valid_out));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h6d72849d_0_0) 
                                                & (IData)(vlSelfRef.__PVT__is_div));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelfRef.__PVT__is_div)) 
                                                  & (IData)(__VdfgRegularize_h6d72849d_0_0));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_8[0U] = (0x40U | ((0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3bU]) 
                              | ((0x3eU & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3bU] 
                                           >> 1U)) 
                                 | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                          >> 7U)))));
    __Vtemp_8[1U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3cU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3cU]));
    __Vtemp_8[2U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3dU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3dU]));
    __Vtemp_8[3U] = ((0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3eU]) 
                     | (0xffffff80U & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3eU]));
    __Vtemp_8[4U] = (0x2000U | ((0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                                << 0xaU)) 
                                | ((0x1f00U & ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                                << 9U) 
                                               | (0x100U 
                                                  & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x25U] 
                                                     >> 0x17U)))) 
                                   | ((0x80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                                << 3U)) 
                                      | (0x7fU & vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU])))));
    __Vtemp_8[5U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x26U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                       << 0xaU)));
    __Vtemp_8[6U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x27U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                       << 0xaU)));
    __Vtemp_8[7U] = (((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                  << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x28U] 
                                               >> 0x16U)) 
                     | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                       << 0xaU)));
    __Vtemp_8[8U] = ((0x3c00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                 << 0xaU)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x29U] 
                                              >> 0x16U));
    __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(1U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[(0xfU & (((IData)(0x87U) 
                                            * (1U & 
                                               (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U)))) 
                                           >> 5U))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(2U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(1U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(3U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(2U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(4U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(3U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                   >> 8U))))))
                       ? 0U : (__Vtemp_8[((IData)(5U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                      >> 8U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U)))))))) 
                     | (__Vtemp_8[((IData)(4U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                           >> 8U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                 >> 8U)))))));
    if ((0x10dU >= (0x1ffU & ((IData)(0x87U) * (1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                    >> 8U))))))) {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_9[3U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_9[4U]);
    } else {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[2U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[3U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[3U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & vlSelfRef.div_sqrt_arb__DOT____Vxrand_h8c726985__0[4U]);
    }
    vlSelfRef.__VdfgRegularize_h0c3eaefd_0_2 = (IData)(
                                                       ((~ 
                                                         (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                                          >> 8U)) 
                                                        & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                                                           >> 5U)));
    vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in = 
        ((2U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x2aU] 
                >> 4U)) | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x3fU] 
                                 >> 8U)));
    vlSelfRef.__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    __Vtableidx4 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                              >> 6U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
                                                     >> 0xbU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
                                             >> 0xfU))));
    vlSelfRef.__PVT__is_fadd = Vrtlsim_shim__ConstPool__TABLE_he26a82f7_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_fsub = Vrtlsim_shim__ConstPool__TABLE_h9d59a2f8_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_fmul = Vrtlsim_shim__ConstPool__TABLE_h6d4859c1_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_fmadd = Vrtlsim_shim__ConstPool__TABLE_h4488829f_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_fmsub = Vrtlsim_shim__ConstPool__TABLE_h68605346_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_fnmadd = Vrtlsim_shim__ConstPool__TABLE_ha0f08ccc_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_fnmsub = Vrtlsim_shim__ConstPool__TABLE_hec956690_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_div = Vrtlsim_shim__ConstPool__TABLE_he1e949b8_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_fcmp = Vrtlsim_shim__ConstPool__TABLE_h1d7ca84f_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_itof = Vrtlsim_shim__ConstPool__TABLE_hb2fa832c_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_utof = Vrtlsim_shim__ConstPool__TABLE_h7129fbc5_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_ftoi = Vrtlsim_shim__ConstPool__TABLE_h1b7ae01a_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_ftou = Vrtlsim_shim__ConstPool__TABLE_hb1a9f5bc_0
        [__Vtableidx4];
    vlSelfRef.__PVT__is_f2f = Vrtlsim_shim__ConstPool__TABLE_hdbcbe362_0
        [__Vtableidx4];
    vlSelfRef.__PVT__core_select = Vrtlsim_shim__ConstPool__TABLE_h71337474_0
        [__Vtableidx4];
    vlSelfRef.__PVT__per_core_valid_out = ((8U & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                  >> 0xcU)) 
                                           | ((4U & 
                                               vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U]) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                                       >> 0x1bU)))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][0U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[1U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][0U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[2U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][2U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[3U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][2U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[4U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][4U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[5U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][4U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[6U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                              : 
                                                             VL_EXTENDS_QI(64,32, 
                                                                           vlSelfRef.__PVT__operands
                                                                           [0U][6U])));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[7U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                               : 
                                                              VL_EXTENDS_QI(64,32, 
                                                                            vlSelfRef.__PVT__operands
                                                                            [0U][6U])) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[1U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[2U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[3U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[4U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][5U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[5U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][4U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[6U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelfRef.__PVT__operands
                                                                               [0U][7U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                              : 
                                                             (0xffffffff00000000ULL 
                                                              | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))))));
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[7U] = (IData)(
                                                            (((0x400U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU])
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U])))
                                                               : 
                                                              (0xffffffff00000000ULL 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][6U]))))) 
                                                             >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    __VdfgRegularize_h6d72849d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelfRef.__PVT__per_core_valid_out));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h6d72849d_0_0) 
                                                & (IData)(vlSelfRef.__PVT__is_div));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelfRef.__PVT__is_div)) 
                                                  & (IData)(__VdfgRegularize_h6d72849d_0_0));
}
