// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_fpu_dpi__N2_O3.h"
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

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__1(Vrtlsim_shim_VX_fpu_dpi__N2_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h9346e37d_0_0;
    __VdfgRegularize_h9346e37d_0_0 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
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
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
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
    __Vtableidx3 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                              >> 6U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                     >> 0xbU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
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
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    __VdfgRegularize_h9346e37d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h9346e37d_0_0) 
                                                & (IData)(vlSelfRef.__PVT__is_div));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelfRef.__PVT__is_div)) 
                                                  & (IData)(__VdfgRegularize_h9346e37d_0_0));
}

void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__2(Vrtlsim_shim_VX_fpu_dpi__N2_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__per_core_valid_out)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xeU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xbU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (4U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xeU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (0U != (3U & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xbU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | ((IData)((0U != (3U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                           >> 2U)))) 
                     << 2U));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
        = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                                     >> 2U)) 
                                                   | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 2U))));
    vlSelfRef.__PVT__g_fma__DOT__fma_ready = (1U & 
                                              ((~ (
                                                   vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                   >> 0x1bU)) 
                                               | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out = 
        ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
            >> 1U));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0xfU)) 
                                                   | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 3U))));
    __Vtemp_11[0U] = (0x40U | (((IData)((((QData)((IData)(
                                                          vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U])) 
                                          << 0x26U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U])) 
                                               >> 0x1aU)))) 
                                << 7U) | ((0x3eU & 
                                           (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                            >> 0x14U)) 
                                          | (1U & (
                                                   vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                   >> 0x1aU)))));
    __Vtemp_11[1U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U])) 
                                 << 0x26U) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U])) 
                                               << 6U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U])) 
                                                 >> 0x1aU)))) 
                       >> 0x19U) | ((IData)(((((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U])) 
                                               << 0x26U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U])) 
                                                  << 6U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U])) 
                                                    >> 0x1aU))) 
                                             >> 0x20U)) 
                                    << 7U));
    __Vtemp_11[2U] = ((vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
                       << 7U) | ((IData)(((((QData)((IData)(
                                                            vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U])) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U])) 
                                               << 6U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U])) 
                                                 >> 0x1aU))) 
                                          >> 0x20U)) 
                                 >> 0x19U));
    __Vtemp_11[3U] = ((vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
                       >> 0x19U) | (vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
                                    << 7U));
    __Vtemp_11[4U] = (0x100000U | (((IData)((((QData)((IData)(
                                                              vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU])) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U])) 
                                                   >> 1U)))) 
                                    << 0x15U) | ((0xf8000U 
                                                  & ((vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
                                                      << 0x13U) 
                                                     | (0x78000U 
                                                        & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                           >> 0xdU)))) 
                                                 | ((0x4000U 
                                                     & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                                        << 0xdU)) 
                                                    | ((vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
                                                        >> 0x19U) 
                                                       | (vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
                                                          << 7U))))));
    __Vtemp_11[5U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU])) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U])) 
                                                 >> 1U)))) 
                       >> 0xbU) | ((IData)(((((QData)((IData)(
                                                              vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU])) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U])) 
                                                   >> 1U))) 
                                            >> 0x20U)) 
                                   << 0x15U));
    __Vtemp_11[6U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                 << 0x33U) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U])) 
                                                 >> 0xdU)))) 
                       << 0x1cU) | ((0x8000000U & (
                                                   vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                                   << 0xeU)) 
                                    | ((0x7c00000U 
                                        & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                           << 0xeU)) 
                                       | ((0x200000U 
                                           & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                              << 7U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU])) 
                                                        << 0x3fU) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU])) 
                                                           << 0x1fU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U])) 
                                                             >> 1U))) 
                                                      >> 0x20U)) 
                                             >> 0xbU)))));
    __Vtemp_11[7U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                 << 0x33U) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U])) 
                                                 >> 0xdU)))) 
                       >> 4U) | ((IData)(((((QData)((IData)(
                                                            vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U])) 
                                                 >> 0xdU))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_11[8U] = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                 << 0x33U) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U])) 
                                                 >> 0xdU))) 
                               >> 0x20U)) >> 4U);
    if ((0x11bU >= (0x1ffU & ((IData)(0x47U) * (3U 
                                                & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                [1U]))))) {
        __Vtemp_14[0U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_11[((IData)(1U) 
                                                + (0xfU 
                                                   & (((IData)(0x47U) 
                                                       * 
                                                       (3U 
                                                        & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_11[(0xfU & (((IData)(0x47U) 
                                                  * 
                                                  (3U 
                                                   & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                   [1U])) 
                                                 >> 5U))] 
                             >> (0x1fU & ((IData)(0x47U) 
                                          * (3U & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
        __Vtemp_14[1U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_11[((IData)(2U) 
                                                + (0xfU 
                                                   & (((IData)(0x47U) 
                                                       * 
                                                       (3U 
                                                        & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_11[((IData)(1U) 
                                         + (0xfU & 
                                            (((IData)(0x47U) 
                                              * (3U 
                                                 & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U])) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x47U) 
                                          * (3U & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
        __Vtemp_14[2U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_11[((IData)(3U) 
                                                + (0xfU 
                                                   & (((IData)(0x47U) 
                                                       * 
                                                       (3U 
                                                        & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_11[((IData)(2U) 
                                         + (0xfU & 
                                            (((IData)(0x47U) 
                                              * (3U 
                                                 & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U])) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x47U) 
                                          * (3U & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
    } else {
        __Vtemp_14[0U] = vlSelfRef.rsp_arb__DOT____Vxrand_h6dacdbac__0[0U];
        __Vtemp_14[1U] = vlSelfRef.rsp_arb__DOT____Vxrand_h6dacdbac__0[1U];
        __Vtemp_14[2U] = vlSelfRef.rsp_arb__DOT____Vxrand_h6dacdbac__0[2U];
    }
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_14[0U];
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_14[1U];
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((0x180U & (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                      [1U] << 7U)) | (0x7fU & __Vtemp_14[2U]));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__g_scan_l__BRA__2__KET____DOT__g_scan_s__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                  [1U] >> 1U)) | (1U & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                                  [1U]));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire = ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready));
    vlSelfRef.__PVT__g_fma__DOT__fma_fire = ((IData)(vlSelfRef.__PVT__g_fma__DOT__fma_valid) 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fma_ready));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                     >> 8U)) 
                                                   | ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out) 
                                                      & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                         >> 8U))));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready = (1U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                                       >> 5U)) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_hb092f51d_0_2))));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_fire = ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__55__result, vlSelfRef.__Vtask_dpi_itof__55__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0U] = (IData)(vlSelfRef.__Vtask_dpi_itof__55__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__55__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hfe10685b__0 = vlSelfRef.__Vtask_dpi_itof__55__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_hfe10685b__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__56__result, vlSelfRef.__Vtask_dpi_utof__56__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0U] = (IData)(vlSelfRef.__Vtask_dpi_utof__56__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__56__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h28cd2d5a__0 = vlSelfRef.__Vtask_dpi_utof__56__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h28cd2d5a__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__57__result, vlSelfRef.__Vtask_dpi_ftoi__57__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__57__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__57__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he591c311__0 = vlSelfRef.__Vtask_dpi_ftoi__57__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_he591c311__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__58__result, vlSelfRef.__Vtask_dpi_ftou__58__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__58__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__58__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h7e29cf30__0 = vlSelfRef.__Vtask_dpi_ftou__58__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h7e29cf30__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), vlSelfRef.__Vtask_dpi_f2f__59__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__59__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__59__result 
                                                            >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt = ((0xffffffff00000000ULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
                                                 | (IData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__is_itof)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_utof)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_ftou)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_f2f)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0U]
                                                                         : 0U))))))));
    vlSelfRef.__Vlvbound_h5bd473e8__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_itof)
                                                   ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_utof)
                                                    ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                     ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_ftou)
                                                      ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)
                                                      : 0U)))));
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h5bd473e8__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__55__result, vlSelfRef.__Vtask_dpi_itof__55__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[2U] = (IData)(vlSelfRef.__Vtask_dpi_itof__55__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__55__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hfe10685b__0 = vlSelfRef.__Vtask_dpi_itof__55__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_hfe10685b__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__56__result, vlSelfRef.__Vtask_dpi_utof__56__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[2U] = (IData)(vlSelfRef.__Vtask_dpi_utof__56__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__56__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h28cd2d5a__0 = vlSelfRef.__Vtask_dpi_utof__56__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h28cd2d5a__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__57__result, vlSelfRef.__Vtask_dpi_ftoi__57__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[2U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__57__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__57__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he591c311__0 = vlSelfRef.__Vtask_dpi_ftoi__57__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_he591c311__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__58__result, vlSelfRef.__Vtask_dpi_ftou__58__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[2U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__58__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__58__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h7e29cf30__0 = vlSelfRef.__Vtask_dpi_ftou__58__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h7e29cf30__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), vlSelfRef.__Vtask_dpi_f2f__59__result);
    vlSelfRef.__Vlvbound_h5bd473e8__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_itof)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_utof)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_ftou)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                      >> 5U)
                                                      : 0U)))));
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[2U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__59__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__59__result 
                                                            >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt = ((0xffffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
                                                 | ((QData)((IData)(
                                                                    ((IData)(vlSelfRef.__PVT__is_itof)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fcvt__DOT__result_itof[2U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_utof)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fcvt__DOT__result_utof[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[2U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_ftou)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[2U]
                                                                         : 
                                                                        ((IData)(vlSelfRef.__PVT__is_f2f)
                                                                          ? 
                                                                         vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[2U]
                                                                          : 0U))))))) 
                                                    << 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h5bd473e8__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__46__result, vlSelfRef.__Vtask_dpi_fadd__46__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__46__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__46__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h6231ca99__0 = vlSelfRef.__Vtask_dpi_fadd__46__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h6231ca99__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__47__result, vlSelfRef.__Vtask_dpi_fsub__47__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__47__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__47__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0abda082__0 = vlSelfRef.__Vtask_dpi_fsub__47__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h0abda082__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__48__result, vlSelfRef.__Vtask_dpi_fmul__48__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__48__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__48__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h15445df1__0 = vlSelfRef.__Vtask_dpi_fmul__48__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h15445df1__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__49__result, vlSelfRef.__Vtask_dpi_fmadd__49__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__49__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__49__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h80136d17__0 = vlSelfRef.__Vtask_dpi_fmadd__49__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h80136d17__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__50__result, vlSelfRef.__Vtask_dpi_fmsub__50__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__50__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__50__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbed391a6__0 = vlSelfRef.__Vtask_dpi_fmsub__50__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_hbed391a6__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__51__result, vlSelfRef.__Vtask_dpi_fnmadd__51__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__51__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__51__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb52fe345__0 = vlSelfRef.__Vtask_dpi_fnmadd__51__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0x3e0U 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)) 
                                                  | (IData)(vlSelfRef.__Vlvbound_hb52fe345__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__52__result, vlSelfRef.__Vtask_dpi_fnmsub__52__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__52__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__52__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h6250e315__0 = vlSelfRef.__Vtask_dpi_fnmsub__52__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0x3e0U 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)) 
                                                  | (IData)(vlSelfRef.__Vlvbound_h6250e315__0));
    vlSelfRef.__PVT__g_fma__DOT__result_fma = ((0xffffffff00000000ULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__result_fma) 
                                               | (IData)((IData)(
                                                                 ((IData)(vlSelfRef.__PVT__is_fadd)
                                                                   ? 
                                                                  vlSelfRef.__PVT__g_fma__DOT__result_fadd[0U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                                    ? 
                                                                   vlSelfRef.__PVT__g_fma__DOT__result_fsub[0U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0U]
                                                                         : 0U))))))))));
    vlSelfRef.__Vlvbound_h3dfb837d__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_fadd)
                                                   ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                    ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                     ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                      ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                       ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                        ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                         ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)
                                                         : 0U))))))));
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0x3e0U 
                                                & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma)) 
                                               | (IData)(vlSelfRef.__Vlvbound_h3dfb837d__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__46__result, vlSelfRef.__Vtask_dpi_fadd__46__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[2U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__46__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__46__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h6231ca99__0 = vlSelfRef.__Vtask_dpi_fadd__46__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h6231ca99__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__47__result, vlSelfRef.__Vtask_dpi_fsub__47__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[2U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__47__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__47__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0abda082__0 = vlSelfRef.__Vtask_dpi_fsub__47__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h0abda082__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__48__result, vlSelfRef.__Vtask_dpi_fmul__48__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__48__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__48__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h15445df1__0 = vlSelfRef.__Vtask_dpi_fmul__48__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h15445df1__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__49__result, vlSelfRef.__Vtask_dpi_fmadd__49__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__49__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__49__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h80136d17__0 = vlSelfRef.__Vtask_dpi_fmadd__49__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h80136d17__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__50__result, vlSelfRef.__Vtask_dpi_fmsub__50__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__50__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__50__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbed391a6__0 = vlSelfRef.__Vtask_dpi_fmsub__50__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_hbed391a6__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__51__result, vlSelfRef.__Vtask_dpi_fnmadd__51__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__51__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__51__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb52fe345__0 = vlSelfRef.__Vtask_dpi_fnmadd__51__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0x1fU 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_hb52fe345__0) 
                                                     << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__52__result, vlSelfRef.__Vtask_dpi_fnmsub__52__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__52__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__52__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h6250e315__0 = vlSelfRef.__Vtask_dpi_fnmsub__52__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0x1fU 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_h6250e315__0) 
                                                     << 5U));
    vlSelfRef.__Vlvbound_h3dfb837d__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_fadd)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                       >> 5U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                        >> 5U)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                         >> 5U)
                                                         : 0U))))))));
    vlSelfRef.__PVT__g_fma__DOT__result_fma = ((0xffffffffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__result_fma) 
                                               | ((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__is_fadd)
                                                                    ? 
                                                                   vlSelfRef.__PVT__g_fma__DOT__result_fadd[2U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__is_fsub)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fma__DOT__result_fsub[2U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_fmul)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fma__DOT__result_fmul[2U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fma__DOT__result_fmadd[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fma__DOT__result_fmsub[2U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[2U]
                                                                         : 
                                                                        ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                                          ? 
                                                                         vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[2U]
                                                                          : 0U))))))))) 
                                                  << 0x20U));
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0x1fU 
                                                & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma)) 
                                               | ((IData)(vlSelfRef.__Vlvbound_h3dfb837d__0) 
                                                  << 5U));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire = ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire = ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid) 
                                                 & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), vlSelfRef.__Vtask_dpi_fclss__60__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__60__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__60__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fle__61__result, vlSelfRef.__Vtask_dpi_fle__61__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0U] = (IData)(vlSelfRef.__Vtask_dpi_fle__61__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__61__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h039f89f3__0 = vlSelfRef.__Vtask_dpi_fle__61__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h039f89f3__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_flt__62__result, vlSelfRef.__Vtask_dpi_flt__62__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0U] = (IData)(vlSelfRef.__Vtask_dpi_flt__62__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__62__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h5f26c9f9__0 = vlSelfRef.__Vtask_dpi_flt__62__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h5f26c9f9__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_feq__63__result, vlSelfRef.__Vtask_dpi_feq__63__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0U] = (IData)(vlSelfRef.__Vtask_dpi_feq__63__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__63__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h968cac1b__0 = vlSelfRef.__Vtask_dpi_feq__63__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h968cac1b__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fmin__64__result, vlSelfRef.__Vtask_dpi_fmin__64__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__64__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__64__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h581913c0__0 = vlSelfRef.__Vtask_dpi_fmin__64__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h581913c0__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fmax__65__result, vlSelfRef.__Vtask_dpi_fmax__65__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__65__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__65__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he1ea5c1e__0 = vlSelfRef.__Vtask_dpi_fmax__65__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_he1ea5c1e__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnj__66__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__66__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__66__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnjn__67__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__67__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__67__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnjx__68__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__68__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__68__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), vlSelfRef.__Vtask_dpi_fclss__60__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__60__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__60__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fle__61__result, vlSelfRef.__Vtask_dpi_fle__61__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[2U] = (IData)(vlSelfRef.__Vtask_dpi_fle__61__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__61__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h039f89f3__0 = vlSelfRef.__Vtask_dpi_fle__61__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h039f89f3__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_flt__62__result, vlSelfRef.__Vtask_dpi_flt__62__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[2U] = (IData)(vlSelfRef.__Vtask_dpi_flt__62__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__62__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h5f26c9f9__0 = vlSelfRef.__Vtask_dpi_flt__62__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h5f26c9f9__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_feq__63__result, vlSelfRef.__Vtask_dpi_feq__63__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[2U] = (IData)(vlSelfRef.__Vtask_dpi_feq__63__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__63__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h968cac1b__0 = vlSelfRef.__Vtask_dpi_feq__63__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h968cac1b__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fmin__64__result, vlSelfRef.__Vtask_dpi_fmin__64__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__64__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__64__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h581913c0__0 = vlSelfRef.__Vtask_dpi_fmin__64__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h581913c0__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fmax__65__result, vlSelfRef.__Vtask_dpi_fmax__65__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__65__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__65__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he1ea5c1e__0 = vlSelfRef.__Vtask_dpi_fmax__65__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_he1ea5c1e__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnj__66__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__66__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__66__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnjn__67__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__67__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__67__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnjx__68__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__68__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__68__result 
                   >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged = 0U;
    vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                      >> 9U))) << 4U));
    }
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__53__result, vlSelfRef.__Vtask_dpi_fdiv__53__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__53__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__53__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3c57a994__0 = vlSelfRef.__Vtask_dpi_fdiv__53__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h3c57a994__0));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r = (
                                                   (0xffffffff00000000ULL 
                                                    & vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
                                                   | (IData)((IData)(
                                                                     vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0U])));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__53__result, vlSelfRef.__Vtask_dpi_fdiv__53__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[2U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__53__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__53__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3c57a994__0 = vlSelfRef.__Vtask_dpi_fdiv__53__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h3c57a994__0) 
                                                    << 5U));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r = (
                                                   (0xffffffffULL 
                                                    & vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[2U])) 
                                                      << 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__54__result, vlSelfRef.__Vtask_dpi_fsqrt__54__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__54__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__54__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3bb99f94__0 = vlSelfRef.__Vtask_dpi_fsqrt__54__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0x3e0U 
                                                    & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt)) 
                                                   | (IData)(vlSelfRef.__Vlvbound_h3bb99f94__0));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r = 
        ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
         | (IData)((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0U])));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__54__result, vlSelfRef.__Vtask_dpi_fsqrt__54__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__54__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__54__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3bb99f94__0 = vlSelfRef.__Vtask_dpi_fsqrt__54__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt)) 
                                                   | ((IData)(vlSelfRef.__Vlvbound_h3bb99f94__0) 
                                                      << 5U));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r = 
        ((0xffffffffULL & vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
         | ((QData)((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[2U])) 
            << 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp = vlSelfRef.__Vxrand_h7d2804ec__0;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp = vlSelfRef.__Vxrand_h8d93e5fb__0;
    if (((((((((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)))) {
        vlSelfRef.__PVT__g_fncp__DOT__result_fncp = 
            ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
             | (IData)((IData)(((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                 ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                     ? vlSelfRef.__PVT__g_fncp__DOT__result_fle[0U]
                                     : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0U])
                                 : ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                     ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                         ? vlSelfRef.__PVT__g_fncp__DOT__result_flt[0U]
                                         : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0U])
                                     : ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                         ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                             ? vlSelfRef.__PVT__g_fncp__DOT__result_feq[0U]
                                             : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0U])
                                         : ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                             ? vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0U]
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                 ? 
                                                vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U]
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                  ? 
                                                 vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U]
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                   ? 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0U]
                                                   : 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0U]))))))))));
        vlSelfRef.__PVT__g_fncp__DOT__result_fncp = 
            ((0xffffffffULL & vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
             | ((QData)((IData)(((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                  ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                      ? vlSelfRef.__PVT__g_fncp__DOT__result_fle[2U]
                                      : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[2U])
                                  : ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                      ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                          ? vlSelfRef.__PVT__g_fncp__DOT__result_flt[2U]
                                          : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[2U])
                                      : ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                          ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                              ? vlSelfRef.__PVT__g_fncp__DOT__result_feq[2U]
                                              : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[2U])
                                          : ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                              ? vlSelfRef.__PVT__g_fncp__DOT__result_fclss[2U]
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                  ? 
                                                 vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[2U]
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                   ? 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[2U]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                    ? 
                                                   vlSelfRef.__PVT__g_fncp__DOT__result_fmin[2U]
                                                    : 
                                                   vlSelfRef.__PVT__g_fncp__DOT__result_fmax[2U]))))))))) 
                << 0x20U));
        if ((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__0 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__0));
            vlSelfRef.__Vlvbound_h975ac400__0 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__0) 
                      << 5U));
        } else if ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__1 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__1));
            vlSelfRef.__Vlvbound_h975ac400__1 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__1) 
                      << 5U));
        } else if ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__2 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__2));
            vlSelfRef.__Vlvbound_h975ac400__2 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__2) 
                      << 5U));
        } else if ((3U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if ((4U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                if ((5U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                    if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                        vlSelfRef.__Vlvbound_h975ac400__3 
                            = (0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelfRef.__Vlvbound_h975ac400__3));
                        vlSelfRef.__Vlvbound_h975ac400__3 
                            = (0x1fU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                        >> 5U));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelfRef.__Vlvbound_h975ac400__3) 
                                  << 5U));
                    } else {
                        vlSelfRef.__Vlvbound_h975ac400__4 
                            = (0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelfRef.__Vlvbound_h975ac400__4));
                        vlSelfRef.__Vlvbound_h975ac400__4 
                            = (0x1fU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                        >> 5U));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelfRef.__Vlvbound_h975ac400__4) 
                                  << 5U));
                    }
                }
            }
        }
    }
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__result_fma) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__result_fma) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fma__DOT__result_fma 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__fma_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fma__DOT__result_fma 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged = 0U;
    vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
    } else {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                      >> 9U))) << 4U));
    }
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__result_fncp 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_valid) 
            << 7U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 6U) | ((((6U <= (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
                                   | (IData)(vlSelfRef.__PVT__is_fcmp)) 
                                  << 5U) | ((IData)(
                                                    (vlSelfRef.__PVT__g_fncp__DOT__result_fncp 
                                                     >> 0x20U)) 
                                            >> 0x1bU))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N2_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__4(Vrtlsim_shim_VX_fpu_dpi__N2_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N2_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__per_core_valid_out)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xeU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (0U != (3U & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xbU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | ((IData)((0U != (3U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                           >> 2U)))) 
                     << 2U));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
        = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xeU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xbU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (4U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                                     >> 2U)) 
                                                   | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 2U))));
    vlSelfRef.__PVT__g_fma__DOT__fma_ready = (1U & 
                                              ((~ (
                                                   vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                   >> 0x1bU)) 
                                               | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out = 
        ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
            >> 1U));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0xfU)) 
                                                   | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 3U))));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire = ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready));
    vlSelfRef.__PVT__g_fma__DOT__fma_fire = ((IData)(vlSelfRef.__PVT__g_fma__DOT__fma_valid) 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fma_ready));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                     >> 8U)) 
                                                   | ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out) 
                                                      & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                         >> 8U))));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready = (1U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                                       >> 5U)) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_hb092f51d_0_2))));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_fire = ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__78__result, vlSelfRef.__Vtask_dpi_itof__78__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0U] = (IData)(vlSelfRef.__Vtask_dpi_itof__78__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__78__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hfe10685b__0 = vlSelfRef.__Vtask_dpi_itof__78__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_hfe10685b__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__79__result, vlSelfRef.__Vtask_dpi_utof__79__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0U] = (IData)(vlSelfRef.__Vtask_dpi_utof__79__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__79__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h28cd2d5a__0 = vlSelfRef.__Vtask_dpi_utof__79__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h28cd2d5a__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__80__result, vlSelfRef.__Vtask_dpi_ftoi__80__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__80__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__80__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he591c311__0 = vlSelfRef.__Vtask_dpi_ftoi__80__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_he591c311__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__81__result, vlSelfRef.__Vtask_dpi_ftou__81__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__81__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__81__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h7e29cf30__0 = vlSelfRef.__Vtask_dpi_ftou__81__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h7e29cf30__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), vlSelfRef.__Vtask_dpi_f2f__82__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__82__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__82__result 
                                                            >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt = ((0xffffffff00000000ULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
                                                 | (IData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__is_itof)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_utof)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_ftou)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_f2f)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0U]
                                                                         : 0U))))))));
    vlSelfRef.__Vlvbound_h5bd473e8__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_itof)
                                                   ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_utof)
                                                    ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                     ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_ftou)
                                                      ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)
                                                      : 0U)))));
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h5bd473e8__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__78__result, vlSelfRef.__Vtask_dpi_itof__78__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[2U] = (IData)(vlSelfRef.__Vtask_dpi_itof__78__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__78__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hfe10685b__0 = vlSelfRef.__Vtask_dpi_itof__78__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_hfe10685b__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__79__result, vlSelfRef.__Vtask_dpi_utof__79__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[2U] = (IData)(vlSelfRef.__Vtask_dpi_utof__79__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__79__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h28cd2d5a__0 = vlSelfRef.__Vtask_dpi_utof__79__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h28cd2d5a__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__80__result, vlSelfRef.__Vtask_dpi_ftoi__80__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[2U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__80__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__80__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he591c311__0 = vlSelfRef.__Vtask_dpi_ftoi__80__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_he591c311__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__81__result, vlSelfRef.__Vtask_dpi_ftou__81__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[2U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__81__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__81__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h7e29cf30__0 = vlSelfRef.__Vtask_dpi_ftou__81__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h7e29cf30__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), vlSelfRef.__Vtask_dpi_f2f__82__result);
    vlSelfRef.__Vlvbound_h5bd473e8__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_itof)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_utof)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_ftou)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                      >> 5U)
                                                      : 0U)))));
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[2U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__82__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__82__result 
                                                            >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt = ((0xffffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
                                                 | ((QData)((IData)(
                                                                    ((IData)(vlSelfRef.__PVT__is_itof)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fcvt__DOT__result_itof[2U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_utof)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fcvt__DOT__result_utof[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[2U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_ftou)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[2U]
                                                                         : 
                                                                        ((IData)(vlSelfRef.__PVT__is_f2f)
                                                                          ? 
                                                                         vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[2U]
                                                                          : 0U))))))) 
                                                    << 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h5bd473e8__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__69__result, vlSelfRef.__Vtask_dpi_fadd__69__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__69__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__69__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h6231ca99__0 = vlSelfRef.__Vtask_dpi_fadd__69__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h6231ca99__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__70__result, vlSelfRef.__Vtask_dpi_fsub__70__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__70__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__70__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0abda082__0 = vlSelfRef.__Vtask_dpi_fsub__70__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h0abda082__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__71__result, vlSelfRef.__Vtask_dpi_fmul__71__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__71__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__71__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h15445df1__0 = vlSelfRef.__Vtask_dpi_fmul__71__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h15445df1__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__72__result, vlSelfRef.__Vtask_dpi_fmadd__72__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__72__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__72__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h80136d17__0 = vlSelfRef.__Vtask_dpi_fmadd__72__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h80136d17__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__73__result, vlSelfRef.__Vtask_dpi_fmsub__73__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__73__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__73__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbed391a6__0 = vlSelfRef.__Vtask_dpi_fmsub__73__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_hbed391a6__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__74__result, vlSelfRef.__Vtask_dpi_fnmadd__74__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__74__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__74__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb52fe345__0 = vlSelfRef.__Vtask_dpi_fnmadd__74__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0x3e0U 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)) 
                                                  | (IData)(vlSelfRef.__Vlvbound_hb52fe345__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__75__result, vlSelfRef.__Vtask_dpi_fnmsub__75__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__75__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__75__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h6250e315__0 = vlSelfRef.__Vtask_dpi_fnmsub__75__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0x3e0U 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)) 
                                                  | (IData)(vlSelfRef.__Vlvbound_h6250e315__0));
    vlSelfRef.__PVT__g_fma__DOT__result_fma = ((0xffffffff00000000ULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__result_fma) 
                                               | (IData)((IData)(
                                                                 ((IData)(vlSelfRef.__PVT__is_fadd)
                                                                   ? 
                                                                  vlSelfRef.__PVT__g_fma__DOT__result_fadd[0U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                                    ? 
                                                                   vlSelfRef.__PVT__g_fma__DOT__result_fsub[0U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0U]
                                                                         : 0U))))))))));
    vlSelfRef.__Vlvbound_h3dfb837d__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_fadd)
                                                   ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                    ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                     ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                      ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                       ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                        ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                         ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)
                                                         : 0U))))))));
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0x3e0U 
                                                & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma)) 
                                               | (IData)(vlSelfRef.__Vlvbound_h3dfb837d__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__69__result, vlSelfRef.__Vtask_dpi_fadd__69__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[2U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__69__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__69__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h6231ca99__0 = vlSelfRef.__Vtask_dpi_fadd__69__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h6231ca99__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__70__result, vlSelfRef.__Vtask_dpi_fsub__70__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[2U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__70__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__70__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0abda082__0 = vlSelfRef.__Vtask_dpi_fsub__70__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h0abda082__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__71__result, vlSelfRef.__Vtask_dpi_fmul__71__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__71__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__71__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h15445df1__0 = vlSelfRef.__Vtask_dpi_fmul__71__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h15445df1__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__72__result, vlSelfRef.__Vtask_dpi_fmadd__72__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__72__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__72__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h80136d17__0 = vlSelfRef.__Vtask_dpi_fmadd__72__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h80136d17__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__73__result, vlSelfRef.__Vtask_dpi_fmsub__73__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__73__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__73__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbed391a6__0 = vlSelfRef.__Vtask_dpi_fmsub__73__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_hbed391a6__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__74__result, vlSelfRef.__Vtask_dpi_fnmadd__74__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__74__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__74__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb52fe345__0 = vlSelfRef.__Vtask_dpi_fnmadd__74__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0x1fU 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_hb52fe345__0) 
                                                     << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__75__result, vlSelfRef.__Vtask_dpi_fnmsub__75__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__75__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__75__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h6250e315__0 = vlSelfRef.__Vtask_dpi_fnmsub__75__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0x1fU 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_h6250e315__0) 
                                                     << 5U));
    vlSelfRef.__Vlvbound_h3dfb837d__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_fadd)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                       >> 5U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                        >> 5U)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                         >> 5U)
                                                         : 0U))))))));
    vlSelfRef.__PVT__g_fma__DOT__result_fma = ((0xffffffffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__result_fma) 
                                               | ((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__is_fadd)
                                                                    ? 
                                                                   vlSelfRef.__PVT__g_fma__DOT__result_fadd[2U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__is_fsub)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fma__DOT__result_fsub[2U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_fmul)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fma__DOT__result_fmul[2U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fma__DOT__result_fmadd[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fma__DOT__result_fmsub[2U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[2U]
                                                                         : 
                                                                        ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                                          ? 
                                                                         vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[2U]
                                                                          : 0U))))))))) 
                                                  << 0x20U));
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0x1fU 
                                                & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma)) 
                                               | ((IData)(vlSelfRef.__Vlvbound_h3dfb837d__0) 
                                                  << 5U));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire = ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire = ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid) 
                                                 & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), vlSelfRef.__Vtask_dpi_fclss__83__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__83__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__83__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fle__84__result, vlSelfRef.__Vtask_dpi_fle__84__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0U] = (IData)(vlSelfRef.__Vtask_dpi_fle__84__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__84__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h039f89f3__0 = vlSelfRef.__Vtask_dpi_fle__84__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h039f89f3__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_flt__85__result, vlSelfRef.__Vtask_dpi_flt__85__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0U] = (IData)(vlSelfRef.__Vtask_dpi_flt__85__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__85__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h5f26c9f9__0 = vlSelfRef.__Vtask_dpi_flt__85__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h5f26c9f9__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_feq__86__result, vlSelfRef.__Vtask_dpi_feq__86__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0U] = (IData)(vlSelfRef.__Vtask_dpi_feq__86__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__86__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h968cac1b__0 = vlSelfRef.__Vtask_dpi_feq__86__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h968cac1b__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fmin__87__result, vlSelfRef.__Vtask_dpi_fmin__87__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__87__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__87__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h581913c0__0 = vlSelfRef.__Vtask_dpi_fmin__87__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h581913c0__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fmax__88__result, vlSelfRef.__Vtask_dpi_fmax__88__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__88__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__88__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he1ea5c1e__0 = vlSelfRef.__Vtask_dpi_fmax__88__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_he1ea5c1e__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnj__89__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__89__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__89__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnjn__90__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__90__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__90__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnjx__91__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__91__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__91__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), vlSelfRef.__Vtask_dpi_fclss__83__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__83__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__83__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fle__84__result, vlSelfRef.__Vtask_dpi_fle__84__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[2U] = (IData)(vlSelfRef.__Vtask_dpi_fle__84__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__84__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h039f89f3__0 = vlSelfRef.__Vtask_dpi_fle__84__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h039f89f3__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_flt__85__result, vlSelfRef.__Vtask_dpi_flt__85__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[2U] = (IData)(vlSelfRef.__Vtask_dpi_flt__85__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__85__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h5f26c9f9__0 = vlSelfRef.__Vtask_dpi_flt__85__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h5f26c9f9__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_feq__86__result, vlSelfRef.__Vtask_dpi_feq__86__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[2U] = (IData)(vlSelfRef.__Vtask_dpi_feq__86__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__86__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h968cac1b__0 = vlSelfRef.__Vtask_dpi_feq__86__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h968cac1b__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fmin__87__result, vlSelfRef.__Vtask_dpi_fmin__87__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__87__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__87__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h581913c0__0 = vlSelfRef.__Vtask_dpi_fmin__87__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h581913c0__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fmax__88__result, vlSelfRef.__Vtask_dpi_fmax__88__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__88__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__88__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he1ea5c1e__0 = vlSelfRef.__Vtask_dpi_fmax__88__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_he1ea5c1e__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnj__89__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__89__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__89__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnjn__90__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__90__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__90__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnjx__91__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__91__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__91__result 
                   >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged = 0U;
    vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                      >> 9U))) << 4U));
    }
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__76__result, vlSelfRef.__Vtask_dpi_fdiv__76__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__76__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__76__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3c57a994__0 = vlSelfRef.__Vtask_dpi_fdiv__76__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h3c57a994__0));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r = (
                                                   (0xffffffff00000000ULL 
                                                    & vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
                                                   | (IData)((IData)(
                                                                     vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0U])));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__76__result, vlSelfRef.__Vtask_dpi_fdiv__76__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[2U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__76__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__76__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3c57a994__0 = vlSelfRef.__Vtask_dpi_fdiv__76__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h3c57a994__0) 
                                                    << 5U));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r = (
                                                   (0xffffffffULL 
                                                    & vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[2U])) 
                                                      << 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__77__result, vlSelfRef.__Vtask_dpi_fsqrt__77__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__77__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__77__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3bb99f94__0 = vlSelfRef.__Vtask_dpi_fsqrt__77__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0x3e0U 
                                                    & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt)) 
                                                   | (IData)(vlSelfRef.__Vlvbound_h3bb99f94__0));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r = 
        ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
         | (IData)((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0U])));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__77__result, vlSelfRef.__Vtask_dpi_fsqrt__77__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__77__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__77__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3bb99f94__0 = vlSelfRef.__Vtask_dpi_fsqrt__77__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt)) 
                                                   | ((IData)(vlSelfRef.__Vlvbound_h3bb99f94__0) 
                                                      << 5U));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r = 
        ((0xffffffffULL & vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
         | ((QData)((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[2U])) 
            << 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp = vlSelfRef.__Vxrand_h7d2804ec__0;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp = vlSelfRef.__Vxrand_h8d93e5fb__0;
    if (((((((((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)))) {
        vlSelfRef.__PVT__g_fncp__DOT__result_fncp = 
            ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
             | (IData)((IData)(((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                 ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                     ? vlSelfRef.__PVT__g_fncp__DOT__result_fle[0U]
                                     : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0U])
                                 : ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                     ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                         ? vlSelfRef.__PVT__g_fncp__DOT__result_flt[0U]
                                         : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0U])
                                     : ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                         ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                             ? vlSelfRef.__PVT__g_fncp__DOT__result_feq[0U]
                                             : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0U])
                                         : ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                             ? vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0U]
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                 ? 
                                                vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U]
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                  ? 
                                                 vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U]
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                   ? 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0U]
                                                   : 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0U]))))))))));
        vlSelfRef.__PVT__g_fncp__DOT__result_fncp = 
            ((0xffffffffULL & vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
             | ((QData)((IData)(((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                  ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                      ? vlSelfRef.__PVT__g_fncp__DOT__result_fle[2U]
                                      : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[2U])
                                  : ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                      ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                          ? vlSelfRef.__PVT__g_fncp__DOT__result_flt[2U]
                                          : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[2U])
                                      : ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                          ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                              ? vlSelfRef.__PVT__g_fncp__DOT__result_feq[2U]
                                              : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[2U])
                                          : ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                              ? vlSelfRef.__PVT__g_fncp__DOT__result_fclss[2U]
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                  ? 
                                                 vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[2U]
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                   ? 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[2U]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                    ? 
                                                   vlSelfRef.__PVT__g_fncp__DOT__result_fmin[2U]
                                                    : 
                                                   vlSelfRef.__PVT__g_fncp__DOT__result_fmax[2U]))))))))) 
                << 0x20U));
        if ((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__0 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__0));
            vlSelfRef.__Vlvbound_h975ac400__0 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__0) 
                      << 5U));
        } else if ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__1 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__1));
            vlSelfRef.__Vlvbound_h975ac400__1 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__1) 
                      << 5U));
        } else if ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__2 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__2));
            vlSelfRef.__Vlvbound_h975ac400__2 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__2) 
                      << 5U));
        } else if ((3U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if ((4U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                if ((5U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                    if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                        vlSelfRef.__Vlvbound_h975ac400__3 
                            = (0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelfRef.__Vlvbound_h975ac400__3));
                        vlSelfRef.__Vlvbound_h975ac400__3 
                            = (0x1fU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                        >> 5U));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelfRef.__Vlvbound_h975ac400__3) 
                                  << 5U));
                    } else {
                        vlSelfRef.__Vlvbound_h975ac400__4 
                            = (0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelfRef.__Vlvbound_h975ac400__4));
                        vlSelfRef.__Vlvbound_h975ac400__4 
                            = (0x1fU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                        >> 5U));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelfRef.__Vlvbound_h975ac400__4) 
                                  << 5U));
                    }
                }
            }
        }
    }
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__result_fma) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__result_fma) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fma__DOT__result_fma 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__fma_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fma__DOT__result_fma 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged = 0U;
    vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
    } else {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                      >> 9U))) << 4U));
    }
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__result_fncp 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_valid) 
            << 7U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 6U) | ((((6U <= (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
                                   | (IData)(vlSelfRef.__PVT__is_fcmp)) 
                                  << 5U) | ((IData)(
                                                    (vlSelfRef.__PVT__g_fncp__DOT__result_fncp 
                                                     >> 0x20U)) 
                                            >> 0x1bU))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N2_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N2_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N2_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__commit_arb.ready_in) 
                    >> 3U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N2_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<9>/*283:0*/ __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe;
    VL_ZERO_W(284, __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe);
    VlWide<34>/*1064:0*/ __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe;
    VL_ZERO_W(1065, __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe);
    VlWide<23>/*709:0*/ __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe;
    VL_ZERO_W(710, __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe);
    VlWide<12>/*354:0*/ __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe;
    VL_ZERO_W(355, __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe);
    VlWide<5>/*143:0*/ __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe;
    VL_ZERO_W(144, __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe);
    VlWide<5>/*159:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSelfRef.__PVT__per_core_valid_out)))) 
                                      | ((vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                                          [2U] & ((IData)(vlSelfRef.__PVT__per_core_valid_out) 
                                                  >> 
                                                  (3U 
                                                   & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                   [1U]))) 
                                         & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                            == (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                    [1U])))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.execute.fpu_unit.g_blocks[0].fpu_dpi.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((1U != (~ (0U 
                                                 != (IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in)))) 
                                      | (((0U != (IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in)) 
                                          & ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in) 
                                             >> (1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                     >> 8U))))) 
                                         & ((((IData)(vlSelfRef.__VdfgRegularize_hb092f51d_0_2) 
                                              << 1U) 
                                             | (1U 
                                                & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                   >> 8U))) 
                                            == (3U 
                                                & ((IData)(1U) 
                                                   << 
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                        >> 8U)))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.execute.fpu_unit.g_blocks[0].fpu_dpi.div_sqrt_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
        = vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
        = vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
        = vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
        = vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
        = vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
        = vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
        = vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U];
    __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
        = vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x17U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x17U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x19U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x19U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1bU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1bU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1dU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1dU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1eU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1eU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U];
    __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
        = vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U];
    if (vlSelfRef.__PVT__g_fncp__DOT__fncp_ready) {
        __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[0U];
        __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[1U];
        __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0xffffff80U & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (0x7fU & vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[2U]));
        __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0xffU & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                  << 8U));
        __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = ((vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                >> 0x18U) | (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                             << 8U));
        __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0x8000U & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | (0xffffU & ((vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                              >> 0x18U) | (0x7f00U 
                                           & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                              << 8U)))));
    }
    if (vlSelfRef.__PVT__g_fma__DOT__fma_ready) {
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[0U];
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[1U];
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0xffffffc0U & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (0x3fU & vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[2U]));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0x7fU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                  << 7U));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = ((vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                >> 0x19U) | (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                             << 7U));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0xffffe000U & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | ((vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                   >> 0x19U) | (0x1f80U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                           << 7U))));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0x3fffU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | (0xffffc000U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 7U)));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = (((0x3f80U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                            << 7U)) | (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x19U)) | 
               (0xffffc000U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                               << 7U)));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = ((0xfff00000U & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
               | (((0x3f80U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                                          >> 0x19U)) 
                  | (0xfc000U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                 << 7U))));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = ((0x1fffffU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
               | (0xffe00000U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                 << 7U)));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = (((0x1fff80U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                              << 7U)) | (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                         >> 0x19U)) 
               | (0xffe00000U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                                 << 7U)));
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = ((0x8000000U & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
               | (0xfffffffU & (((0x1fff80U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                               << 7U)) 
                                 | (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                                    >> 0x19U)) | (0x7e00000U 
                                                  & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                                     << 7U)))));
    }
    if (vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready) {
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[0U];
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[1U];
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0xffffffc0U & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (0x3fU & vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[2U]));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0x7fU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                  << 7U));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = ((vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                >> 0x19U) | (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                             << 7U));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0xffffe000U & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | ((vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                   >> 0x19U) | (0x1f80U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                           << 7U))));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0x3fffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | (0xffffc000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 7U)));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = (((0x3f80U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                            << 7U)) | (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x19U)) | 
               (0xffffc000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                               << 7U)));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = ((0xfff00000U & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
               | (((0x3f80U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                                          >> 0x19U)) 
                  | (0xfc000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                 << 7U))));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = ((0x1fffffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
               | (0xffe00000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                 << 7U)));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = (((0x1fff80U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                              << 7U)) | (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                         >> 0x19U)) 
               | (0xffe00000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                                 << 7U)));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = ((0xf8000000U & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
               | (((0x1fff80U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                 << 7U)) | (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                                            >> 0x19U)) 
                  | (0x7e00000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                   << 7U))));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = ((0xfffffffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                 << 7U)));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
            = (((0xfffff80U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                          >> 0x19U)) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                                 << 7U)));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
            = (((0xfffff80U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                                          >> 0x19U)) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                 << 7U)));
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = ((4U & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
               | (3U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                        >> 0x19U)));
    }
    if (vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready) {
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[0U];
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[1U];
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0xffffffc0U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (0x3fU & vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[2U]));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0x7fU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                  << 7U));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                >> 0x19U) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                             << 7U));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0xffffe000U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                   >> 0x19U) | (0x1f80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                           << 7U))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0x3fffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = (((0x3f80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                            << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x19U)) | 
               (0xffffc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                               << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = ((0xfff00000U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
               | (((0x3f80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                                          >> 0x19U)) 
                  | (0xfc000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                 << 7U))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = ((0x1fffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
               | (0xffe00000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = (((0x1fff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                              << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                         >> 0x19U)) 
               | (0xffe00000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = ((0xf8000000U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
               | (((0x1fff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                 << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                                            >> 0x19U)) 
                  | (0x7e00000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                   << 7U))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = ((0xfffffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
            = (((0xfffff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                          >> 0x19U)) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
            = (((0xfffff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                                          >> 0x19U)) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = ((0xfffffffcU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
               | (3U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                        >> 0x19U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = ((7U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
               | ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
                   << 7U) | (0x78U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                      >> 0x19U))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
            = ((7U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
                      >> 0x19U)) | ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
                                     << 7U) | (0x78U 
                                               & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
                                                  >> 0x19U))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
            = ((0xfffffe00U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU]) 
               | ((7U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
                         >> 0x19U)) | (0x1f8U & ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                                  << 7U) 
                                                 | (0x78U 
                                                    & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
                                                       >> 0x19U))))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
            = ((0x3ffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU]) 
               | (0xfffffc00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
            = (((0x380U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
                           << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                      >> 0x19U)) | 
               (0xfffffc00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
                               << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
            = ((0xffff0000U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU]) 
               | (((0x380U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                              << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
                                         >> 0x19U)) 
                  | (0xfc00U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                                << 7U))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
            = ((0x1ffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU]) 
               | (0xfffe0000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
            = (((0x1ff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
                             << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                                        >> 0x19U)) 
               | (0xfffe0000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0xff800000U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U]) 
               | (((0x1ff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
                                           >> 0x19U)) 
                  | (0x7e0000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                  << 7U))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0xffffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xff000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
            = (((0xffff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                              << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                         >> 0x19U)) 
               | (0xff000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
            = ((0xc0000000U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U]) 
               | (((0xffff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                 << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                            >> 0x19U)) 
                  | (0x3f000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                    << 7U))));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
            = ((0x7fffffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U]) 
               | (0x80000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
            = (((0x7fffff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
                                << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                           >> 0x19U)) 
               | (0x80000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
            = (((0x7fffff80U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                                << 7U)) | (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
                                           >> 0x19U)) 
               | (0x80000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                                 << 7U)));
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
            = ((0x20U & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U]) 
               | (0x1fU & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                           >> 0x19U)));
    }
    if (vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready) {
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[0U];
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[1U];
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0xffffffc0U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (0x3fU & vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[2U]));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = ((0x7fU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
               | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                  << 7U));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
                >> 0x19U) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                             << 7U));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0xffffe000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
                   >> 0x19U) | (0x1f80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                           << 7U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = ((0x3fffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
               | (0xffffc000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = (((0x3f80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                            << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                       >> 0x19U)) | 
               (0xffffc000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                               << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = ((0xfff00000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
               | (((0x3f80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
                                          >> 0x19U)) 
                  | (0xfc000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                 << 7U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = ((0x1fffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
               | (0xffe00000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = (((0x1fff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                              << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                         >> 0x19U)) 
               | (0xffe00000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = ((0xf8000000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
               | (((0x1fff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                 << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
                                            >> 0x19U)) 
                  | (0x7e00000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                   << 7U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = ((0xfffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
            = (((0xfffff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                          >> 0x19U)) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
            = (((0xfffff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
                                          >> 0x19U)) 
               | (0xf0000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = ((0xfffffffcU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
               | (3U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                        >> 0x19U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = ((7U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
               | ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
                   << 7U) | (0x78U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                      >> 0x19U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
            = ((7U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
                      >> 0x19U)) | ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
                                     << 7U) | (0x78U 
                                               & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
                                                  >> 0x19U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
            = ((0xfffffe00U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU]) 
               | ((7U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
                         >> 0x19U)) | (0x1f8U & ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                                  << 7U) 
                                                 | (0x78U 
                                                    & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
                                                       >> 0x19U))))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
            = ((0x3ffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU]) 
               | (0xfffffc00U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
            = (((0x380U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
                           << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                      >> 0x19U)) | 
               (0xfffffc00U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
                               << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
            = ((0xffff0000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU]) 
               | (((0x380U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                              << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
                                         >> 0x19U)) 
                  | (0xfc00U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                                << 7U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
            = ((0x1ffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU]) 
               | (0xfffe0000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
            = (((0x1ff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
                             << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                                        >> 0x19U)) 
               | (0xfffe0000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0xff800000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U]) 
               | (((0x1ff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
                                           >> 0x19U)) 
                  | (0x7e0000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                  << 7U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
            = ((0xffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U]) 
               | (0xff000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
            = (((0xffff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                              << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                         >> 0x19U)) 
               | (0xff000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
            = ((0xc0000000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U]) 
               | (((0xffff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                 << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
                                            >> 0x19U)) 
                  | (0x3f000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                    << 7U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
            = ((0x7fffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U]) 
               | (0x80000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
            = (((0x7fffff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
                                << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                           >> 0x19U)) 
               | (0x80000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
            = (((0x7fffff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                                << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
                                           >> 0x19U)) 
               | (0x80000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
            = ((0xffffffe0U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U]) 
               | (0x1fU & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                           >> 0x19U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
            = ((0x3fU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U]) 
               | ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
                   << 7U) | (0x40U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                                      >> 0x19U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x17U] 
            = ((0x3fU & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
                         >> 0x19U)) | ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
                                        << 7U) | (0x40U 
                                                  & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
                                                     >> 0x19U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
            = ((0xfffff000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U]) 
               | ((0x3fU & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
                            >> 0x19U)) | (0xfc0U & 
                                          ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                            << 7U) 
                                           | (0x40U 
                                              & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
                                                 >> 0x19U))))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
            = ((0x1fffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U]) 
               | (0xffffe000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x19U] 
            = (((0x1f80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x17U] 
                            << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                       >> 0x19U)) | 
               (0xffffe000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x17U] 
                               << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
            = ((0xfff80000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU]) 
               | (((0x1f80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
                               << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x17U] 
                                          >> 0x19U)) 
                  | (0x7e000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
                                 << 7U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
            = ((0xfffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU]) 
               | (0xfff00000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1bU] 
            = (((0xfff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x19U] 
                             << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
                                        >> 0x19U)) 
               | (0xfff00000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x19U] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
            = ((0xfc000000U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU]) 
               | (((0xfff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
                                << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x19U] 
                                           >> 0x19U)) 
                  | (0x3f00000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
                                   << 7U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
            = ((0x7ffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU]) 
               | (0xf8000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1dU] 
            = (((0x7ffff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1bU] 
                               << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
                                          >> 0x19U)) 
               | (0xf8000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1bU] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1eU] 
            = (((0x7ffff80U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
                               << 7U)) | (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1bU] 
                                          >> 0x19U)) 
               | (0xf8000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
                                 << 7U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
            = ((0xfffffffeU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU]) 
               | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
                        >> 0x19U)));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
            = ((3U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU]) 
               | ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1dU] 
                   << 7U) | (0x7cU & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
                                      >> 0x19U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U] 
            = ((3U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1dU] 
                      >> 0x19U)) | ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1eU] 
                                     << 7U) | (0x7cU 
                                               & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1dU] 
                                                  >> 0x19U))));
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
            = ((0x100U & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U]) 
               | (0x1ffU & ((3U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1eU] 
                                   >> 0x19U)) | (0xfcU 
                                                 & ((vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
                                                     << 7U) 
                                                    | (0x7cU 
                                                       & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1eU] 
                                                          >> 0x19U)))))));
    }
    if (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        } else {
            vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = (0xffffff7fU & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]);
        __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = (0x7fffU & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]);
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = (0xffffffbfU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]);
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = (0xffffdfffU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]);
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = (0xffefffffU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]);
        __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = (0x7ffffffU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]);
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = (0xffffffbfU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]);
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = (0xffffdfffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]);
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = (0xffefffffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]);
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = (0xf7ffffffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]);
        __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = (3U & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]);
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU];
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = (0xffffffbfU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = (0xffffdfffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = (0xffefffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = (0xf7ffffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = (0xfffffffbU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
            = (0xfffffdffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
            = (0xfffeffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
            = (0xff7fffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
            = (0xbfffffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U]);
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
            = (0x1fU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U]);
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U];
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = (0xffffffbfU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = (0xffffdfffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = (0xffefffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = (0xf7ffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = (0xfffffffbU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
            = (0xfffffdffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
            = (0xfffeffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
            = (0xff7fffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
            = (0xbfffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
            = (0xffffffdfU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
            = (0xffffefffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
            = (0xfff7ffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
            = (0xfbffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
            = (0xfffffffdU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU]);
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
            = (0xffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U]);
    } else {
        if (vlSelfRef.__PVT__g_fncp__DOT__fncp_ready) {
            __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                = ((0xffffff7fU & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
                   | (0x80U & vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[2U]));
            __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                = ((0x7fffU & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
                   | (0x8000U & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 8U)));
        }
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
        vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
        if (vlSelfRef.__PVT__g_fma__DOT__fma_ready) {
            __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                = ((0xffffffbfU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
                   | (0x40U & vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[2U]));
            __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                = ((0xffffdfffU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
                   | (0x2000U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 7U)));
            __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                = ((0xffefffffU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
                   | (0x100000U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                   << 7U)));
            __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                = ((0x7ffffffU & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
                   | (0x8000000U & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                    << 7U)));
        }
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
        vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
        if (vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready) {
            __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                = ((0xffffffbfU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
                   | (0x40U & vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[2U]));
            __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                = ((0xffffdfffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
                   | (0x2000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 7U)));
            __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                = ((0xffefffffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
                   | (0x100000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                   << 7U)));
            __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                = ((0xf7ffffffU & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
                   | (0x8000000U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                    << 7U)));
            __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                = ((3U & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
                   | (4U & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                            >> 0x19U)));
        }
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU];
        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU];
        if (vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready) {
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                = ((0xffffffbfU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
                   | (0x40U & vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[2U]));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                = ((0xffffdfffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
                   | (0x2000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 7U)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                = ((0xffefffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
                   | (0x100000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                   << 7U)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                = ((0xf7ffffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
                   | (0x8000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                    << 7U)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                = ((0xfffffffbU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
                   | (4U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                            >> 0x19U)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                = ((0xfffffdffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU]) 
                   | (0x200U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                << 7U)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                = ((0xfffeffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU]) 
                   | (0x10000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                                  << 7U)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                = ((0xff7fffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U]) 
                   | (0x800000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                   << 7U)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                = ((0xbfffffffU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U]) 
                   | (0x40000000U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                     << 7U)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                = ((0x1fU & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U]) 
                   | (0x20U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                               >> 0x19U)));
        }
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U];
        vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U];
        if (vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready) {
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                = ((0xffffffbfU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U]) 
                   | (0x40U & vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[2U]));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                = ((0xffffdfffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U]) 
                   | (0x2000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                 << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                = ((0xffefffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U]) 
                   | (0x100000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                   << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                = ((0xf7ffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U]) 
                   | (0x8000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                    << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                = ((0xfffffffbU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
                   | (4U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                            >> 0x19U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                = ((0xfffffdffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU]) 
                   | (0x200U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                = ((0xfffeffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU]) 
                   | (0x10000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
                                  << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                = ((0xff7fffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U]) 
                   | (0x800000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
                                   << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                = ((0xbfffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U]) 
                   | (0x40000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
                                     << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                = ((0xffffffdfU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U]) 
                   | (0x20U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                               >> 0x19U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
                = ((0xffffefffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U]) 
                   | (0x1000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                 << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
                = ((0xfff7ffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU]) 
                   | (0x80000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
                                  << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
                = ((0xfbffffffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU]) 
                   | (0x4000000U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
                                    << 7U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
                = ((0xfffffffdU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU]) 
                   | (2U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
                            >> 0x19U)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                = ((0xffU & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U]) 
                   | (0x100U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
                                << 7U)));
        }
    }
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[1U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[5U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xcU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xdU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xeU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xfU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x10U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x11U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x12U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x17U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x17U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x18U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x19U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x19U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1aU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1bU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1bU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1cU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1dU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1dU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1eU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1eU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U];
    vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
        = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U];
    __Vtemp_114[0U] = (0x40U | (((IData)((((QData)((IData)(
                                                           vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U])) 
                                           << 0x39U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU])) 
                                                >> 7U)))) 
                                 << 7U) | ((0x3eU & 
                                            (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU] 
                                             >> 1U)) 
                                           | (1U & 
                                              (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                               >> 7U)))));
    __Vtemp_114[1U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U])) 
                                  << 0x39U) | (((QData)((IData)(
                                                                vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU])) 
                                                  >> 7U)))) 
                        >> 0x19U) | ((IData)(((((QData)((IData)(
                                                                vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU])) 
                                                     >> 7U))) 
                                              >> 0x20U)) 
                                     << 7U));
    __Vtemp_114[2U] = (0x2000U | (((IData)((((QData)((IData)(
                                                             vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U])) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U])) 
                                                  >> 4U)))) 
                                   << 0xeU) | ((0x1f00U 
                                                & ((vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U] 
                                                    << 9U) 
                                                   | (0x100U 
                                                      & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x13U] 
                                                         >> 0x17U)))) 
                                               | ((0x80U 
                                                   & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                                      << 3U)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U])) 
                                                                << 0x39U) 
                                                               | (((QData)((IData)(
                                                                                vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x20U])) 
                                                                   << 0x19U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x1fU])) 
                                                                     >> 7U))) 
                                                              >> 0x20U)) 
                                                     >> 0x19U)))));
    __Vtemp_114[3U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U])) 
                                                  >> 4U)))) 
                        >> 0x12U) | ((IData)(((((QData)((IData)(
                                                                vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U])) 
                                                     >> 4U))) 
                                              >> 0x20U)) 
                                     << 0xeU));
    __Vtemp_114[4U] = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U])) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x15U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x14U])) 
                                                  >> 4U))) 
                                >> 0x20U)) >> 0x12U);
    __Vtemp_115[0U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                         * (1U & (~ 
                                                  (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                   >> 8U))))))
                         ? 0U : (__Vtemp_114[((IData)(1U) 
                                              + (7U 
                                                 & (((IData)(0x47U) 
                                                     * 
                                                     (1U 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                          >> 8U)))) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0x47U) 
                                                 * 
                                                 (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                      >> 8U)))))))) 
                       | (__Vtemp_114[(7U & (((IData)(0x47U) 
                                              * (1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                     >> 8U)))) 
                                             >> 5U))] 
                          >> (0x1fU & ((IData)(0x47U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                   >> 8U)))))));
    __Vtemp_115[1U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                         * (1U & (~ 
                                                  (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                   >> 8U))))))
                         ? 0U : (__Vtemp_114[((IData)(2U) 
                                              + (7U 
                                                 & (((IData)(0x47U) 
                                                     * 
                                                     (1U 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                          >> 8U)))) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0x47U) 
                                                 * 
                                                 (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                      >> 8U)))))))) 
                       | (__Vtemp_114[((IData)(1U) 
                                       + (7U & (((IData)(0x47U) 
                                                 * 
                                                 (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                      >> 8U)))) 
                                                >> 5U)))] 
                          >> (0x1fU & ((IData)(0x47U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                   >> 8U)))))));
    __Vtemp_115[2U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                         * (1U & (~ 
                                                  (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                   >> 8U))))))
                         ? 0U : (__Vtemp_114[((IData)(3U) 
                                              + (7U 
                                                 & (((IData)(0x47U) 
                                                     * 
                                                     (1U 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                          >> 8U)))) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0x47U) 
                                                 * 
                                                 (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                      >> 8U)))))))) 
                       | (__Vtemp_114[((IData)(2U) 
                                       + (7U & (((IData)(0x47U) 
                                                 * 
                                                 (1U 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                      >> 8U)))) 
                                                >> 5U)))] 
                          >> (0x1fU & ((IData)(0x47U) 
                                       * (1U & (~ (
                                                   vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                   >> 8U)))))));
    if ((0x8dU >= (0xffU & ((IData)(0x47U) * (1U & 
                                              (~ (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                  >> 8U))))))) {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = __Vtemp_115[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_115[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = (0x7fU & __Vtemp_115[2U]);
    } else {
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h6dacdbac__0[0U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
            = vlSelfRef.div_sqrt_arb__DOT____Vxrand_h6dacdbac__0[1U];
        vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
            = (0x7fU & vlSelfRef.div_sqrt_arb__DOT____Vxrand_h6dacdbac__0[2U]);
    }
    vlSelfRef.__VdfgRegularize_hb092f51d_0_2 = (IData)(
                                                       ((~ 
                                                         (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                          >> 8U)) 
                                                        & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                                           >> 5U)));
    vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in = 
        ((2U & (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                >> 4U)) | (1U & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                 >> 8U)));
    if (((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
         [2U])) {
        vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 0xfU;
        vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                         [2U] | (~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if ((vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
             [2U] & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
            if ((0U != (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelfRef.__PVT__per_core_valid_out))) {
                vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
        if ((1U & (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                   [2U] | (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out)))) {
            vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__PVT__per_core_valid_out = ((8U & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                                  >> 0xcU)) 
                                           | ((4U & 
                                               vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU]) 
                                              | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__valid_in))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                       >> 0x1bU)))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelfRef.__PVT__per_core_valid_out));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__1(Vrtlsim_shim_VX_fpu_dpi__N2_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h9346e37d_0_0;
    __VdfgRegularize_h9346e37d_0_0 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
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
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
                                                                     >> 3U)))) 
                                                 >> 0x20U));
    vlSelfRef.__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                                ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                  << 0x1dU) 
                                                                 | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
                                                                    >> 3U)))));
    vlSelfRef.__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                                 ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
                                                                   << 0x1dU) 
                                                                  | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
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
    __Vtableidx4 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                              >> 6U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                     >> 0xbU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
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
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
    vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U] = (IData)(
                                                            ((0x400U 
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                              & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
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
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    __VdfgRegularize_h9346e37d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_valid) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__core_select)));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h9346e37d_0_0) 
                                                & (IData)(vlSelfRef.__PVT__is_div));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelfRef.__PVT__is_div)) 
                                                  & (IData)(__VdfgRegularize_h9346e37d_0_0));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__2(Vrtlsim_shim_VX_fpu_dpi__N2_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N2_O3___nba_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_dpi__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<9>/*287:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    // Body
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelfRef.__PVT__per_core_valid_out)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xeU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (1U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xbU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (4U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xeU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (0U != (3U & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xbU & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | ((IData)((0U != (3U & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                           >> 2U)))) 
                     << 2U));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
        = vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                                     >> 2U)) 
                                                   | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 2U))));
    vlSelfRef.__PVT__g_fma__DOT__fma_ready = (1U & 
                                              ((~ (
                                                   vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                   >> 0x1bU)) 
                                               | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & (IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out = 
        ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
            >> 1U));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                                     >> 0xfU)) 
                                                   | ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 3U))));
    __Vtemp_11[0U] = (0x40U | (((IData)((((QData)((IData)(
                                                          vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U])) 
                                          << 0x26U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U])) 
                                               >> 0x1aU)))) 
                                << 7U) | ((0x3eU & 
                                           (vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U] 
                                            >> 0x14U)) 
                                          | (1U & (
                                                   vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                   >> 0x1aU)))));
    __Vtemp_11[1U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U])) 
                                 << 0x26U) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U])) 
                                               << 6U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U])) 
                                                 >> 0x1aU)))) 
                       >> 0x19U) | ((IData)(((((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U])) 
                                               << 0x26U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U])) 
                                                  << 6U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U])) 
                                                    >> 0x1aU))) 
                                             >> 0x20U)) 
                                    << 7U));
    __Vtemp_11[2U] = ((vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
                       << 7U) | ((IData)(((((QData)((IData)(
                                                            vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U])) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[7U])) 
                                               << 6U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe[6U])) 
                                                 >> 0x1aU))) 
                                          >> 0x20U)) 
                                 >> 0x19U));
    __Vtemp_11[3U] = ((vlSelfRef.__Vcellout__div_sqrt_arb__data_out[0U] 
                       >> 0x19U) | (vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
                                    << 7U));
    __Vtemp_11[4U] = (0x100000U | (((IData)((((QData)((IData)(
                                                              vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU])) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U])) 
                                                   >> 1U)))) 
                                    << 0x15U) | ((0xf8000U 
                                                  & ((vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U] 
                                                      << 0x13U) 
                                                     | (0x78000U 
                                                        & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[8U] 
                                                           >> 0xdU)))) 
                                                 | ((0x4000U 
                                                     & (vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU] 
                                                        << 0xdU)) 
                                                    | ((vlSelfRef.__Vcellout__div_sqrt_arb__data_out[1U] 
                                                        >> 0x19U) 
                                                       | (vlSelfRef.__Vcellout__div_sqrt_arb__data_out[2U] 
                                                          << 7U))))));
    __Vtemp_11[5U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU])) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U])) 
                                                 >> 1U)))) 
                       >> 0xbU) | ((IData)(((((QData)((IData)(
                                                              vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU])) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U])) 
                                                   >> 1U))) 
                                            >> 0x20U)) 
                                   << 0x15U));
    __Vtemp_11[6U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                 << 0x33U) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U])) 
                                                 >> 0xdU)))) 
                       << 0x1cU) | ((0x8000000U & (
                                                   vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                                   << 0xeU)) 
                                    | ((0x7c00000U 
                                        & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U] 
                                           << 0xeU)) 
                                       | ((0x200000U 
                                           & (vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U] 
                                              << 7U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xbU])) 
                                                        << 0x3fU) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0xaU])) 
                                                           << 0x1fU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe[9U])) 
                                                             >> 1U))) 
                                                      >> 0x20U)) 
                                             >> 0xbU)))));
    __Vtemp_11[7U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                 << 0x33U) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U])) 
                                                 >> 0xdU)))) 
                       >> 4U) | ((IData)(((((QData)((IData)(
                                                            vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U])) 
                                                 >> 0xdU))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_11[8U] = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[4U])) 
                                 << 0x33U) | (((QData)((IData)(
                                                               vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[3U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.__PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe[2U])) 
                                                 >> 0xdU))) 
                               >> 0x20U)) >> 4U);
    if ((0x11bU >= (0x1ffU & ((IData)(0x47U) * (3U 
                                                & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                [1U]))))) {
        __Vtemp_14[0U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_11[((IData)(1U) 
                                                + (0xfU 
                                                   & (((IData)(0x47U) 
                                                       * 
                                                       (3U 
                                                        & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_11[(0xfU & (((IData)(0x47U) 
                                                  * 
                                                  (3U 
                                                   & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                   [1U])) 
                                                 >> 5U))] 
                             >> (0x1fU & ((IData)(0x47U) 
                                          * (3U & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
        __Vtemp_14[1U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_11[((IData)(2U) 
                                                + (0xfU 
                                                   & (((IData)(0x47U) 
                                                       * 
                                                       (3U 
                                                        & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_11[((IData)(1U) 
                                         + (0xfU & 
                                            (((IData)(0x47U) 
                                              * (3U 
                                                 & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U])) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x47U) 
                                          * (3U & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
        __Vtemp_14[2U] = (((0U == (0x1fU & ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_11[((IData)(3U) 
                                                + (0xfU 
                                                   & (((IData)(0x47U) 
                                                       * 
                                                       (3U 
                                                        & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x47U) 
                                            * (3U & 
                                               vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_11[((IData)(2U) 
                                         + (0xfU & 
                                            (((IData)(0x47U) 
                                              * (3U 
                                                 & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U])) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x47U) 
                                          * (3U & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
    } else {
        __Vtemp_14[0U] = vlSelfRef.rsp_arb__DOT____Vxrand_h6dacdbac__0[0U];
        __Vtemp_14[1U] = vlSelfRef.rsp_arb__DOT____Vxrand_h6dacdbac__0[1U];
        __Vtemp_14[2U] = vlSelfRef.rsp_arb__DOT____Vxrand_h6dacdbac__0[2U];
    }
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_14[0U];
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_14[1U];
    vlSelfRef.rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((0x180U & (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                      [1U] << 7U)) | (0x7fU & __Vtemp_14[2U]));
    vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__g_scan_l__BRA__2__KET____DOT__g_scan_s__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                  [1U] >> 1U)) | (1U & vlSelfRef.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                                  [1U]));
    vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire = ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_ready));
    vlSelfRef.__PVT__g_fma__DOT__fma_fire = ((IData)(vlSelfRef.__PVT__g_fma__DOT__fma_valid) 
                                             & (IData)(vlSelfRef.__PVT__g_fma__DOT__fma_ready));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready = (1U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                     >> 8U)) 
                                                   | ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out) 
                                                      & (vlSelfRef.__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x21U] 
                                                         >> 8U))));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready = (1U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe[0x16U] 
                                                       >> 5U)) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__div_sqrt_arb__ready_out) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_hb092f51d_0_2))));
    vlSelfRef.__PVT__g_fncp__DOT__fncp_fire = ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__78__result, vlSelfRef.__Vtask_dpi_itof__78__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0U] = (IData)(vlSelfRef.__Vtask_dpi_itof__78__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__78__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hfe10685b__0 = vlSelfRef.__Vtask_dpi_itof__78__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_hfe10685b__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__79__result, vlSelfRef.__Vtask_dpi_utof__79__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0U] = (IData)(vlSelfRef.__Vtask_dpi_utof__79__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__79__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h28cd2d5a__0 = vlSelfRef.__Vtask_dpi_utof__79__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h28cd2d5a__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__80__result, vlSelfRef.__Vtask_dpi_ftoi__80__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__80__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__80__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he591c311__0 = vlSelfRef.__Vtask_dpi_ftoi__80__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_he591c311__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__81__result, vlSelfRef.__Vtask_dpi_ftou__81__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__81__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__81__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h7e29cf30__0 = vlSelfRef.__Vtask_dpi_ftou__81__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h7e29cf30__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), vlSelfRef.__Vtask_dpi_f2f__82__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__82__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__82__result 
                                                            >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt = ((0xffffffff00000000ULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
                                                 | (IData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__is_itof)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[0U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_utof)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fcvt__DOT__result_utof[0U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[0U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_ftou)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[0U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_f2f)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[0U]
                                                                         : 0U))))))));
    vlSelfRef.__Vlvbound_h5bd473e8__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_itof)
                                                   ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_utof)
                                                    ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                     ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_ftou)
                                                      ? (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)
                                                      : 0U)))));
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h5bd473e8__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_itof__78__result, vlSelfRef.__Vtask_dpi_itof__78__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[2U] = (IData)(vlSelfRef.__Vtask_dpi_itof__78__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_itof[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_itof__78__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hfe10685b__0 = vlSelfRef.__Vtask_dpi_itof__78__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_hfe10685b__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_utof__79__result, vlSelfRef.__Vtask_dpi_utof__79__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[2U] = (IData)(vlSelfRef.__Vtask_dpi_utof__79__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_utof[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_utof__79__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h28cd2d5a__0 = vlSelfRef.__Vtask_dpi_utof__79__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h28cd2d5a__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftoi__80__result, vlSelfRef.__Vtask_dpi_ftoi__80__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[2U] = (IData)(vlSelfRef.__Vtask_dpi_ftoi__80__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftoi__80__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he591c311__0 = vlSelfRef.__Vtask_dpi_ftoi__80__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_he591c311__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xbU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_ftou__81__result, vlSelfRef.__Vtask_dpi_ftou__81__fflags);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[2U] = (IData)(vlSelfRef.__Vtask_dpi_ftou__81__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_ftou__81__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h7e29cf30__0 = vlSelfRef.__Vtask_dpi_ftou__81__fflags;
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h7e29cf30__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((0x400U 
                                                                  & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U])
                                                                  ? 0U
                                                                  : 1U), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), vlSelfRef.__Vtask_dpi_f2f__82__result);
    vlSelfRef.__Vlvbound_h5bd473e8__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_itof)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_itof) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_utof)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_utof) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftoi) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_ftou)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_ftou) 
                                                      >> 5U)
                                                      : 0U)))));
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[2U] = (IData)(vlSelfRef.__Vtask_dpi_f2f__82__result);
    vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_f2f__82__result 
                                                            >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt = ((0xffffffffULL 
                                                  & vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
                                                 | ((QData)((IData)(
                                                                    ((IData)(vlSelfRef.__PVT__is_itof)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fcvt__DOT__result_itof[2U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_utof)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fcvt__DOT__result_utof[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_ftoi)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fcvt__DOT__result_ftoi[2U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_ftou)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fcvt__DOT__result_ftou[2U]
                                                                         : 
                                                                        ((IData)(vlSelfRef.__PVT__is_f2f)
                                                                          ? 
                                                                         vlSelfRef.__PVT__g_fcvt__DOT__result_f2f[2U]
                                                                          : 0U))))))) 
                                                    << 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h5bd473e8__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__69__result, vlSelfRef.__Vtask_dpi_fadd__69__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[0U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__69__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__69__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h6231ca99__0 = vlSelfRef.__Vtask_dpi_fadd__69__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h6231ca99__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__70__result, vlSelfRef.__Vtask_dpi_fsub__70__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[0U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__70__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__70__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0abda082__0 = vlSelfRef.__Vtask_dpi_fsub__70__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h0abda082__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__71__result, vlSelfRef.__Vtask_dpi_fmul__71__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__71__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__71__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h15445df1__0 = vlSelfRef.__Vtask_dpi_fmul__71__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h15445df1__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__72__result, vlSelfRef.__Vtask_dpi_fmadd__72__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__72__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__72__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h80136d17__0 = vlSelfRef.__Vtask_dpi_fmadd__72__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h80136d17__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__73__result, vlSelfRef.__Vtask_dpi_fmsub__73__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__73__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__73__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbed391a6__0 = vlSelfRef.__Vtask_dpi_fmsub__73__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_hbed391a6__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__74__result, vlSelfRef.__Vtask_dpi_fnmadd__74__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__74__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__74__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb52fe345__0 = vlSelfRef.__Vtask_dpi_fnmadd__74__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0x3e0U 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)) 
                                                  | (IData)(vlSelfRef.__Vlvbound_hb52fe345__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__75__result, vlSelfRef.__Vtask_dpi_fnmsub__75__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__75__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__75__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h6250e315__0 = vlSelfRef.__Vtask_dpi_fnmsub__75__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0x3e0U 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)) 
                                                  | (IData)(vlSelfRef.__Vlvbound_h6250e315__0));
    vlSelfRef.__PVT__g_fma__DOT__result_fma = ((0xffffffff00000000ULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__result_fma) 
                                               | (IData)((IData)(
                                                                 ((IData)(vlSelfRef.__PVT__is_fadd)
                                                                   ? 
                                                                  vlSelfRef.__PVT__g_fma__DOT__result_fadd[0U]
                                                                   : 
                                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                                    ? 
                                                                   vlSelfRef.__PVT__g_fma__DOT__result_fsub[0U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fma__DOT__result_fmul[0U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fma__DOT__result_fmadd[0U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fma__DOT__result_fmsub[0U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[0U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[0U]
                                                                         : 0U))))))))));
    vlSelfRef.__Vlvbound_h3dfb837d__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_fadd)
                                                   ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                    ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                     ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                      ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                       ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                        ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                         ? (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)
                                                         : 0U))))))));
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0x3e0U 
                                                & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma)) 
                                               | (IData)(vlSelfRef.__Vlvbound_h3dfb837d__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fadd__69__result, vlSelfRef.__Vtask_dpi_fadd__69__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[2U] = (IData)(vlSelfRef.__Vtask_dpi_fadd__69__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fadd[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fadd__69__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h6231ca99__0 = vlSelfRef.__Vtask_dpi_fadd__69__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fadd = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h6231ca99__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsub__70__result, vlSelfRef.__Vtask_dpi_fsub__70__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[2U] = (IData)(vlSelfRef.__Vtask_dpi_fsub__70__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fsub[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fsub__70__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h0abda082__0 = vlSelfRef.__Vtask_dpi_fsub__70__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fsub = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h0abda082__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmul__71__result, vlSelfRef.__Vtask_dpi_fmul__71__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmul__71__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmul[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fmul__71__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h15445df1__0 = vlSelfRef.__Vtask_dpi_fmul__71__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmul = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h15445df1__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmadd__72__result, vlSelfRef.__Vtask_dpi_fmadd__72__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmadd__72__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmadd[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmadd__72__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h80136d17__0 = vlSelfRef.__Vtask_dpi_fmadd__72__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h80136d17__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fmsub__73__result, vlSelfRef.__Vtask_dpi_fmsub__73__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmsub__73__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fmsub[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmsub__73__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_hbed391a6__0 = vlSelfRef.__Vtask_dpi_fmsub__73__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_hbed391a6__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmadd__74__result, vlSelfRef.__Vtask_dpi_fnmadd__74__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmadd__74__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmadd__74__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_hb52fe345__0 = vlSelfRef.__Vtask_dpi_fnmadd__74__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd = ((0x1fU 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_hb52fe345__0) 
                                                     << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelfRef.__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fnmsub__75__result, vlSelfRef.__Vtask_dpi_fnmsub__75__fflags);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fnmsub__75__result);
    vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fnmsub__75__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h6250e315__0 = vlSelfRef.__Vtask_dpi_fnmsub__75__fflags;
    vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub = ((0x1fU 
                                                   & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub)) 
                                                  | ((IData)(vlSelfRef.__Vlvbound_h6250e315__0) 
                                                     << 5U));
    vlSelfRef.__Vlvbound_h3dfb837d__0 = (0x1fU & ((IData)(vlSelfRef.__PVT__is_fadd)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fadd) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_fsub)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fsub) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__is_fmul)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmul) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmadd) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fmsub) 
                                                       >> 5U)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmadd) 
                                                        >> 5U)
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fnmsub) 
                                                         >> 5U)
                                                         : 0U))))))));
    vlSelfRef.__PVT__g_fma__DOT__result_fma = ((0xffffffffULL 
                                                & vlSelfRef.__PVT__g_fma__DOT__result_fma) 
                                               | ((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__is_fadd)
                                                                    ? 
                                                                   vlSelfRef.__PVT__g_fma__DOT__result_fadd[2U]
                                                                    : 
                                                                   ((IData)(vlSelfRef.__PVT__is_fsub)
                                                                     ? 
                                                                    vlSelfRef.__PVT__g_fma__DOT__result_fsub[2U]
                                                                     : 
                                                                    ((IData)(vlSelfRef.__PVT__is_fmul)
                                                                      ? 
                                                                     vlSelfRef.__PVT__g_fma__DOT__result_fmul[2U]
                                                                      : 
                                                                     ((IData)(vlSelfRef.__PVT__is_fmadd)
                                                                       ? 
                                                                      vlSelfRef.__PVT__g_fma__DOT__result_fmadd[2U]
                                                                       : 
                                                                      ((IData)(vlSelfRef.__PVT__is_fmsub)
                                                                        ? 
                                                                       vlSelfRef.__PVT__g_fma__DOT__result_fmsub[2U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__PVT__is_fnmadd)
                                                                         ? 
                                                                        vlSelfRef.__PVT__g_fma__DOT__result_fnmadd[2U]
                                                                         : 
                                                                        ((IData)(vlSelfRef.__PVT__is_fnmsub)
                                                                          ? 
                                                                         vlSelfRef.__PVT__g_fma__DOT__result_fnmsub[2U]
                                                                          : 0U))))))))) 
                                                  << 0x20U));
    vlSelfRef.__PVT__g_fma__DOT__fflags_fma = ((0x1fU 
                                                & (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma)) 
                                               | ((IData)(vlSelfRef.__Vlvbound_h3dfb837d__0) 
                                                  << 5U));
    vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire = ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid) 
                                               & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_ready));
    vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire = ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid) 
                                                 & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), vlSelfRef.__Vtask_dpi_fclss__83__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__83__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__83__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fle__84__result, vlSelfRef.__Vtask_dpi_fle__84__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[0U] = (IData)(vlSelfRef.__Vtask_dpi_fle__84__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__84__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h039f89f3__0 = vlSelfRef.__Vtask_dpi_fle__84__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h039f89f3__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_flt__85__result, vlSelfRef.__Vtask_dpi_flt__85__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[0U] = (IData)(vlSelfRef.__Vtask_dpi_flt__85__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__85__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h5f26c9f9__0 = vlSelfRef.__Vtask_dpi_flt__85__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h5f26c9f9__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_feq__86__result, vlSelfRef.__Vtask_dpi_feq__86__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[0U] = (IData)(vlSelfRef.__Vtask_dpi_feq__86__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[1U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__86__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h968cac1b__0 = vlSelfRef.__Vtask_dpi_feq__86__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0x3e0U 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq)) 
                                                | (IData)(vlSelfRef.__Vlvbound_h968cac1b__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fmin__87__result, vlSelfRef.__Vtask_dpi_fmin__87__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__87__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__87__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h581913c0__0 = vlSelfRef.__Vtask_dpi_fmin__87__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h581913c0__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fmax__88__result, vlSelfRef.__Vtask_dpi_fmax__88__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__88__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__88__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he1ea5c1e__0 = vlSelfRef.__Vtask_dpi_fmax__88__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_he1ea5c1e__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnj__89__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__89__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__89__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnjn__90__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__90__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__90__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), vlSelfRef.__Vtask_dpi_fsgnjx__91__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__91__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__91__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), vlSelfRef.__Vtask_dpi_fclss__83__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fclss__83__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fclss[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fclss__83__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fle__84__result, vlSelfRef.__Vtask_dpi_fle__84__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[2U] = (IData)(vlSelfRef.__Vtask_dpi_fle__84__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fle[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_fle__84__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h039f89f3__0 = vlSelfRef.__Vtask_dpi_fle__84__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fle = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h039f89f3__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_flt__85__result, vlSelfRef.__Vtask_dpi_flt__85__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[2U] = (IData)(vlSelfRef.__Vtask_dpi_flt__85__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_flt[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_flt__85__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h5f26c9f9__0 = vlSelfRef.__Vtask_dpi_flt__85__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_flt = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h5f26c9f9__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                    >> 0xaU)), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_feq__86__result, vlSelfRef.__Vtask_dpi_feq__86__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[2U] = (IData)(vlSelfRef.__Vtask_dpi_feq__86__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_feq[3U] = (IData)(
                                                           (vlSelfRef.__Vtask_dpi_feq__86__result 
                                                            >> 0x20U));
    vlSelfRef.__Vlvbound_h968cac1b__0 = vlSelfRef.__Vtask_dpi_feq__86__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_feq = ((0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq)) 
                                                | ((IData)(vlSelfRef.__Vlvbound_h968cac1b__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fmin__87__result, vlSelfRef.__Vtask_dpi_fmin__87__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmin__87__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmin[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmin__87__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h581913c0__0 = vlSelfRef.__Vtask_dpi_fmin__87__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h581913c0__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fmax__88__result, vlSelfRef.__Vtask_dpi_fmax__88__fflags);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[2U] = (IData)(vlSelfRef.__Vtask_dpi_fmax__88__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fmax[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fmax__88__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_he1ea5c1e__0 = vlSelfRef.__Vtask_dpi_fmax__88__fflags;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_he1ea5c1e__0) 
                                                    << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnj__89__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnj__89__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnj__89__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnjn__90__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjn__90__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjn__90__result 
                   >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelfRef.__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                       >> 0xaU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), vlSelfRef.__Vtask_dpi_fsgnjx__91__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsgnjx__91__result);
    vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsgnjx__91__result 
                   >> 0x20U));
    vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged = 0U;
    vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma))));
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fflags_fcvt) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fma__DOT__fflags_fma) 
                                      >> 9U))) << 4U));
    }
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__76__result, vlSelfRef.__Vtask_dpi_fdiv__76__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__76__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[1U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__76__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3c57a994__0 = vlSelfRef.__Vtask_dpi_fdiv__76__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0x3e0U 
                                                  & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv)) 
                                                 | (IData)(vlSelfRef.__Vlvbound_h3c57a994__0));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r = (
                                                   (0xffffffff00000000ULL 
                                                    & vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
                                                   | (IData)((IData)(
                                                                     vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[0U])));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                     >> 0xaU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fdiv__76__result, vlSelfRef.__Vtask_dpi_fdiv__76__fflags);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[2U] = (IData)(vlSelfRef.__Vtask_dpi_fdiv__76__result);
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[3U] = (IData)(
                                                            (vlSelfRef.__Vtask_dpi_fdiv__76__result 
                                                             >> 0x20U));
    vlSelfRef.__Vlvbound_h3c57a994__0 = vlSelfRef.__Vtask_dpi_fdiv__76__fflags;
    vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv = ((0x1fU 
                                                  & (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv)) 
                                                 | ((IData)(vlSelfRef.__Vlvbound_h3c57a994__0) 
                                                    << 5U));
    vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r = (
                                                   (0xffffffffULL 
                                                    & vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv[2U])) 
                                                      << 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__77__result, vlSelfRef.__Vtask_dpi_fsqrt__77__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__77__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[1U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__77__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3bb99f94__0 = vlSelfRef.__Vtask_dpi_fsqrt__77__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0x3e0U 
                                                    & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt)) 
                                                   | (IData)(vlSelfRef.__Vlvbound_h3bb99f94__0));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r = 
        ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
         | (IData)((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[0U])));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
                                                                      >> 0xaU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm), vlSelfRef.__Vtask_dpi_fsqrt__77__result, vlSelfRef.__Vtask_dpi_fsqrt__77__fflags);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[2U] 
        = (IData)(vlSelfRef.__Vtask_dpi_fsqrt__77__result);
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[3U] 
        = (IData)((vlSelfRef.__Vtask_dpi_fsqrt__77__result 
                   >> 0x20U));
    vlSelfRef.__Vlvbound_h3bb99f94__0 = vlSelfRef.__Vtask_dpi_fsqrt__77__fflags;
    vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt = (
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt)) 
                                                   | ((IData)(vlSelfRef.__Vlvbound_h3bb99f94__0) 
                                                      << 5U));
    vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r = 
        ((0xffffffffULL & vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
         | ((QData)((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt[2U])) 
            << 0x20U));
    vlSelfRef.__PVT__g_fncp__DOT__result_fncp = vlSelfRef.__Vxrand_h7d2804ec__0;
    vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp = vlSelfRef.__Vxrand_h8d93e5fb__0;
    if (((((((((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)))) {
        vlSelfRef.__PVT__g_fncp__DOT__result_fncp = 
            ((0xffffffff00000000ULL & vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
             | (IData)((IData)(((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                 ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                     ? vlSelfRef.__PVT__g_fncp__DOT__result_fle[0U]
                                     : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[0U])
                                 : ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                     ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                         ? vlSelfRef.__PVT__g_fncp__DOT__result_flt[0U]
                                         : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[0U])
                                     : ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                         ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                             ? vlSelfRef.__PVT__g_fncp__DOT__result_feq[0U]
                                             : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[0U])
                                         : ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                             ? vlSelfRef.__PVT__g_fncp__DOT__result_fclss[0U]
                                             : ((4U 
                                                 == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                 ? 
                                                vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[0U]
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                  ? 
                                                 vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[0U]
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                   ? 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmin[0U]
                                                   : 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmax[0U]))))))))));
        vlSelfRef.__PVT__g_fncp__DOT__result_fncp = 
            ((0xffffffffULL & vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
             | ((QData)((IData)(((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                  ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                      ? vlSelfRef.__PVT__g_fncp__DOT__result_fle[2U]
                                      : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnj[2U])
                                  : ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                      ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                          ? vlSelfRef.__PVT__g_fncp__DOT__result_flt[2U]
                                          : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjn[2U])
                                      : ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                          ? ((IData)(vlSelfRef.__PVT__is_fcmp)
                                              ? vlSelfRef.__PVT__g_fncp__DOT__result_feq[2U]
                                              : vlSelfRef.__PVT__g_fncp__DOT__result_fsgnjx[2U])
                                          : ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                              ? vlSelfRef.__PVT__g_fncp__DOT__result_fclss[2U]
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                  ? 
                                                 vlSelfRef.__PVT__g_fncp__DOT__result_fmvx[2U]
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                   ? 
                                                  vlSelfRef.__PVT__g_fncp__DOT__result_fmvf[2U]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))
                                                    ? 
                                                   vlSelfRef.__PVT__g_fncp__DOT__result_fmin[2U]
                                                    : 
                                                   vlSelfRef.__PVT__g_fncp__DOT__result_fmax[2U]))))))))) 
                << 0x20U));
        if ((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__0 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__0));
            vlSelfRef.__Vlvbound_h975ac400__0 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fle) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__0) 
                      << 5U));
        } else if ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__1 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__1));
            vlSelfRef.__Vlvbound_h975ac400__1 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_flt) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__1) 
                      << 5U));
        } else if ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            vlSelfRef.__Vlvbound_h975ac400__2 = (0x1fU 
                                                 & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | (IData)(vlSelfRef.__Vlvbound_h975ac400__2));
            vlSelfRef.__Vlvbound_h975ac400__2 = (0x1fU 
                                                 & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_feq) 
                                                    >> 5U));
            vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                   | ((IData)(vlSelfRef.__Vlvbound_h975ac400__2) 
                      << 5U));
        } else if ((3U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
            if ((4U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                if ((5U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                    if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm))) {
                        vlSelfRef.__Vlvbound_h975ac400__3 
                            = (0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelfRef.__Vlvbound_h975ac400__3));
                        vlSelfRef.__Vlvbound_h975ac400__3 
                            = (0x1fU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmin) 
                                        >> 5U));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelfRef.__Vlvbound_h975ac400__3) 
                                  << 5U));
                    } else {
                        vlSelfRef.__Vlvbound_h975ac400__4 
                            = (0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelfRef.__Vlvbound_h975ac400__4));
                        vlSelfRef.__Vlvbound_h975ac400__4 
                            = (0x1fU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fmax) 
                                        >> 5U));
                        vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelfRef.__Vlvbound_h975ac400__4) 
                                  << 5U));
                    }
                }
            }
        }
    }
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fcvt__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fcvt__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fcvt__DOT__fcvt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fcvt__DOT__result_fcvt 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__result_fma) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fma__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__result_fma) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fma__DOT__result_fma 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fma__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fma__DOT__fma_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fma__DOT__result_fma 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged = 0U;
    vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x20000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp))));
    } else {
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
    }
    if ((0x40000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U])) {
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fflags_fdiv) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                      >> 9U))) << 4U));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                           >> 5U))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelfRef.__PVT__g_fncp__DOT__fflags_fncp) 
                                      >> 9U))) << 4U));
    }
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fdiv__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fdiv__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fdiv__DOT__fdiv_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fdiv__DOT__result_fdiv_r 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fsqrt__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fsqrt__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fsqrt__DOT__fsqrt_valid) 
            << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 5U) | ((IData)((vlSelfRef.__PVT__g_fsqrt__DOT__result_fsqrt_r 
                                          >> 0x20U)) 
                                 >> 0x1bU)));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[0U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
            << 5U) | (IData)(vlSelfRef.__PVT__g_fncp__DOT_____05Ffflags_merged));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[1U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__result_fncp) 
            >> 0x1bU) | ((IData)((vlSelfRef.__PVT__g_fncp__DOT__result_fncp 
                                  >> 0x20U)) << 5U));
    vlSelfRef.__Vcellinp__g_fncp__DOT__shift_reg__data_in[2U] 
        = (((IData)(vlSelfRef.__PVT__g_fncp__DOT__fncp_valid) 
            << 7U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                       << 6U) | ((((6U <= (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_blocks__BRA__0__KET____DOT__fpu_req_frm)) 
                                   | (IData)(vlSelfRef.__PVT__is_fcmp)) 
                                  << 5U) | ((IData)(
                                                    (vlSelfRef.__PVT__g_fncp__DOT__result_fncp 
                                                     >> 0x20U)) 
                                            >> 0x1bU))));
}
