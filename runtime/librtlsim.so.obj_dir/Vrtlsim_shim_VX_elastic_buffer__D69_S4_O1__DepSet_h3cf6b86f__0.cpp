// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0;

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[0].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[0].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx1 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx1])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                            & (0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[1].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[1].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx2 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx2])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx2];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                            & (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[2].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[2].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx3 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx3])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx3];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                            & (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[3].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[3].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx4 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx4];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                            & (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[0].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[0].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx5 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx5])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx5];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 1U) 
                                            & (0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[1].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[1].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx6 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx6];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 1U) 
                                            & (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[2].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[2].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx7 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx7])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx7];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 1U) 
                                            & (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[3].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[3].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx8 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx8])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx8];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 1U) 
                                            & (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[0].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[0].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx9 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                     << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx9])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx9];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 2U) 
                                            & (0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[1].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[1].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx10 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                      << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                 << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx10])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx10];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 2U) 
                                            & (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[2].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[2].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx11 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                      << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                 << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx11])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx11];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 2U) 
                                            & (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[3].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[3].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx12 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                      << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                 << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx12])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx12];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 2U) 
                                            & (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[0].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[0].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx13 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                      << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                 << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx13])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx13];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 3U) 
                                            & (0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[1].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[1].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__1__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx14 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                      << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                 << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx14])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx14];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 3U) 
                                            & (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[2].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[2].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__2__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx15 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                      << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                 << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx15])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx15];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 3U) 
                                            & (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__pop = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                                        & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_active)
                                            ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_done))
                                            : (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__ready
                                               [0U] 
                                               & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer__DOT__uop_hold)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<4>/*104:0*/ __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(105, __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[3].instr_buf.g_ebN.fifo_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                          & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) 
                                      | (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.issue.g_slices[0].issue_slice.ibuffer.g_instr_bufs[3].instr_buf.g_ebN.fifo_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_ebN__DOT__push) {
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[0U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[1U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[2U];
        __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[3U];
        __VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
         & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r) 
            | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r) 
               & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop))))) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_instr_bufs__BRA__3__KET____DOT__instr_buf__data_in[3U];
    } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[0U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[1U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[2U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[3U] 
            = vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram
            [vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r][3U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = 1U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)));
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r) 
                     + (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)));
        __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (3U & ((IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                     + ((((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)) 
                          & (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)) 
                         << 1U) | ((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                   ^ (IData)(vlSelfRef.__PVT__g_ebN__DOT__push)))));
        if (vlSelfRef.__PVT__g_ebN__DOT__push) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__pop)))) {
                if ((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSelfRef.__PVT__g_ebN__DOT__pop) {
            vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    if (__VdlySet__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
    }
    __Vtableidx16 = (((3U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                      << 5U) | (((2U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                 << 4U) | (((1U == (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r)) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__pop) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__g_ebN__DOT__push) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))))));
    if ((1U & Vrtlsim_shim__ConstPool__TABLE_h60d6882c_0
         [__Vtableidx16])) {
        vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r 
            = Vrtlsim_shim__ConstPool__TABLE_h44b1fe3b_0
            [__Vtableidx16];
    }
    vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                             >> 3U) 
                                            & (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__decode_wis))));
}
