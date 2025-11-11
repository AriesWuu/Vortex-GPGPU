// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_ipdom_stack__W26_D7.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W26_D7___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack(Vrtlsim_shim_VX_ipdom_stack__W26_D7* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W26_D7___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__Vxrand_h8d9675de__0 = (7U & VL_RAND_RESET_ASSIGN_I(3));
    VL_RAND_RESET_ASSIGN_W(77, __Vtemp_2);
    vlSelfRef.ipdom_store__DOT____Vxrand_haa071004__1[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.ipdom_store__DOT____Vxrand_haa071004__1[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.ipdom_store__DOT____Vxrand_haa071004__1[2U] 
        = (0x1fffU & __Vtemp_2[2U]);
    VL_RAND_RESET_ASSIGN_W(77, __Vtemp_4);
    vlSelfRef.ipdom_store__DOT____Vxrand_haa071004__0[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.ipdom_store__DOT____Vxrand_haa071004__0[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.ipdom_store__DOT____Vxrand_haa071004__0[2U] 
        = (0x1fffU & __Vtemp_4[2U]);
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W26_D7___ctor_var_reset(Vrtlsim_shim_VX_ipdom_stack__W26_D7* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W26_D7___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vxrand_h8d9675de__0 = VL_RAND_RESET_I(3);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->wid = VL_RAND_RESET_I(3);
    vlSelf->d0 = VL_RAND_RESET_Q(38);
    vlSelf->d1 = VL_RAND_RESET_Q(38);
    vlSelf->rd_ptr = VL_RAND_RESET_I(3);
    vlSelf->push = VL_RAND_RESET_I(1);
    vlSelf->pop = VL_RAND_RESET_I(1);
    vlSelf->q_val = VL_RAND_RESET_Q(38);
    vlSelf->q_idx = VL_RAND_RESET_I(1);
    vlSelf->wr_ptr = VL_RAND_RESET_I(24);
    vlSelf->__PVT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__waddr = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(77, vlSelf->__Vcellout__ipdom_store__rdata);
    vlSelf->__Vcellinp__ipdom_store__write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__push_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__0__KET____DOT__pop_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__push_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__1__KET____DOT__pop_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__push_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__2__KET____DOT__pop_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__push_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__3__KET____DOT__pop_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__push_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__4__KET____DOT__pop_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__push_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__5__KET____DOT__pop_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__push_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__6__KET____DOT__pop_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__push_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_addressing__BRA__7__KET____DOT__pop_s = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->ipdom_store__DOT____Vxrand_haa071004__1);
    VL_RAND_RESET_W(77, vlSelf->ipdom_store__DOT____Vxrand_haa071004__0);
    for (int __Vi0 = 0; __Vi0 < 56; ++__Vi0) {
        VL_RAND_RESET_W(77, vlSelf->__PVT__ipdom_store__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(77, vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data);
    vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->ipdom_store__DOT____Vlvbound_h15370f8f__0);
}
