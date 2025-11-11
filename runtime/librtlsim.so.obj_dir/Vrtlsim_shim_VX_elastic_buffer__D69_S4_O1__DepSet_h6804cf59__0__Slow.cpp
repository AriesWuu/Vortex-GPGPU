// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___ctor_var_reset(Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D69_S4_O1___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->valid_in = VL_RAND_RESET_I(1);
    vlSelf->ready_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(105, vlSelf->data_in);
    VL_RAND_RESET_W(105, vlSelf->data_out);
    vlSelf->ready_out = VL_RAND_RESET_I(1);
    vlSelf->valid_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_ebN__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_ebN__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(105, vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(105, vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__Vi0]);
    }
}
