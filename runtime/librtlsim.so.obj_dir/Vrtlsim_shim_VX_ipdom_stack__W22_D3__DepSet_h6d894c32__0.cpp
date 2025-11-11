// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_ipdom_stack__W22_D3.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0;
    VlWide<3>/*68:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(69, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if (vlSelfRef.__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) {
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U] 
                = (IData)(((QData)((IData)((0xfU & 
                                            (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                               << 0x13U) 
                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   >> 9U)))))) 
                           << 0x1eU));
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    << 2U) | (IData)((((QData)((IData)(
                                                       (0xfU 
                                                        & (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               >> 0xdU)) 
                                                           | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               << 0x17U) 
                                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 >> 9U)))))) 
                                       << 0x1eU) >> 0x20U)));
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 2U));
        } else {
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U] 
                = vlSelfRef.__Vcellout__ipdom_store__rdata[0U];
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U] 
                = vlSelfRef.__Vcellout__ipdom_store__rdata[1U];
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U] 
                = (0x10U | (0xfU & vlSelfRef.__Vcellout__ipdom_store__rdata[2U]));
        }
        if ((0x17U >= (IData)(vlSelfRef.__PVT__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelfRef.__PVT__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write 
        = ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) 
           && (IData)(vlSelfRef.__Vcellinp__ipdom_store__write));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] = 0U;
        __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr 
            = vlSelfRef.__PVT__waddr;
        if ((0x17U >= (IData)(vlSelfRef.__PVT__waddr))) {
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][0U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][1U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][2U];
        } else {
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[0U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[1U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[2U];
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    vlSelfRef.wr_ptr = (((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         << 0xeU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                      << 0xcU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                               << 2U) 
                                                              | (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
    vlSelfRef.__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                               ? ((0x18U & (((IData)(vlSelfRef.wr_ptr) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                        >> 0x1fU))), 1U))) 
                                            << 3U)) 
                                  | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                              >> 0x1fU))))
                               : (IData)(__PVT__raddr));
    if (((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][2U];
    } else {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0;
    VlWide<3>/*68:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(69, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if (vlSelfRef.__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) {
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U] 
                = (IData)(((QData)((IData)((0xfU & 
                                            (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                               << 0x13U) 
                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   >> 9U)))))) 
                           << 0x1eU));
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    << 2U) | (IData)((((QData)((IData)(
                                                       (0xfU 
                                                        & (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               >> 0xdU)) 
                                                           | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               << 0x17U) 
                                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 >> 9U)))))) 
                                       << 0x1eU) >> 0x20U)));
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 2U));
        } else {
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U] 
                = vlSelfRef.__Vcellout__ipdom_store__rdata[0U];
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U] 
                = vlSelfRef.__Vcellout__ipdom_store__rdata[1U];
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U] 
                = (0x10U | (0xfU & vlSelfRef.__Vcellout__ipdom_store__rdata[2U]));
        }
        if ((0x17U >= (IData)(vlSelfRef.__PVT__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelfRef.__PVT__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write 
        = ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) 
           && (IData)(vlSelfRef.__Vcellinp__ipdom_store__write));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] = 0U;
        __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr 
            = vlSelfRef.__PVT__waddr;
        if ((0x17U >= (IData)(vlSelfRef.__PVT__waddr))) {
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][0U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][1U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][2U];
        } else {
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[0U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[1U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[2U];
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    vlSelfRef.wr_ptr = (((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         << 0xeU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                      << 0xcU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                               << 2U) 
                                                              | (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
    vlSelfRef.__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                               ? ((0x18U & (((IData)(vlSelfRef.wr_ptr) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                        >> 0x1fU))), 1U))) 
                                            << 3U)) 
                                  | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                              >> 0x1fU))))
                               : (IData)(__PVT__raddr));
    if (((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][2U];
    } else {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0;
    VlWide<3>/*68:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(69, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if (vlSelfRef.__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) {
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U] 
                = (IData)(((QData)((IData)((0xfU & 
                                            (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                               << 0x13U) 
                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   >> 9U)))))) 
                           << 0x1eU));
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    << 2U) | (IData)((((QData)((IData)(
                                                       (0xfU 
                                                        & (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               >> 0xdU)) 
                                                           | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               << 0x17U) 
                                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 >> 9U)))))) 
                                       << 0x1eU) >> 0x20U)));
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 2U));
        } else {
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U] 
                = vlSelfRef.__Vcellout__ipdom_store__rdata[0U];
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U] 
                = vlSelfRef.__Vcellout__ipdom_store__rdata[1U];
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U] 
                = (0x10U | (0xfU & vlSelfRef.__Vcellout__ipdom_store__rdata[2U]));
        }
        if ((0x17U >= (IData)(vlSelfRef.__PVT__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelfRef.__PVT__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write 
        = ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) 
           && (IData)(vlSelfRef.__Vcellinp__ipdom_store__write));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] = 0U;
        __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr 
            = vlSelfRef.__PVT__waddr;
        if ((0x17U >= (IData)(vlSelfRef.__PVT__waddr))) {
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][0U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][1U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][2U];
        } else {
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[0U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[1U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[2U];
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    vlSelfRef.wr_ptr = (((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         << 0xeU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                      << 0xcU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                               << 2U) 
                                                              | (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
    vlSelfRef.__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                               ? ((0x18U & (((IData)(vlSelfRef.wr_ptr) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                        >> 0x1fU))), 1U))) 
                                            << 3U)) 
                                  | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                              >> 0x1fU))))
                               : (IData)(__PVT__raddr));
    if (((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][2U];
    } else {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0;
    CData/*1:0*/ __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0;
    VlWide<3>/*68:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(69, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:52: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: push and pop in same cycle not supported!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 52, "");
            }
        }
    }
    __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:50: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: writing to a full stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 50, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[0]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[1]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[2]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[3]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[4]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[5]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[6]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s) 
                             & (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r)))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:51: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_enable.ipdom_stack.g_addressing[7]: %t: runtime error: reading an empty stack!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/home/kejunwu/vortex/hw/rtl/core/VX_ipdom_stack.sv", 51, "");
            }
        }
    }
    if (vlSelfRef.__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) {
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U] 
                = (IData)(((QData)((IData)((0xfU & 
                                            (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                               << 0x13U) 
                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                   >> 9U)))))) 
                           << 0x1eU));
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    << 2U) | (IData)((((QData)((IData)(
                                                       (0xfU 
                                                        & (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                             << 0x13U) 
                                                            | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               >> 0xdU)) 
                                                           | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                               << 0x17U) 
                                                              | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U] 
                                                                 >> 9U)))))) 
                                       << 0x1eU) >> 0x20U)));
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U] 
                = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 2U));
        } else {
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U] 
                = vlSelfRef.__Vcellout__ipdom_store__rdata[0U];
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U] 
                = vlSelfRef.__Vcellout__ipdom_store__rdata[1U];
            vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U] 
                = (0x10U | (0xfU & vlSelfRef.__Vcellout__ipdom_store__rdata[2U]));
        }
        if ((0x17U >= (IData)(vlSelfRef.__PVT__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelfRef.ipdom_store__DOT____Vlvbound_hf546616b__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelfRef.__PVT__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write 
        = ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) 
           && (IData)(vlSelfRef.__Vcellinp__ipdom_store__write));
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] = 0U;
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] = 0U;
        __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
        __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
        vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 1U;
        vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr 
            = vlSelfRef.__PVT__waddr;
        if ((0x17U >= (IData)(vlSelfRef.__PVT__waddr))) {
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][0U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][1U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelfRef.__PVT__ipdom_store__DOT__ram
                [vlSelfRef.__PVT__waddr][2U];
        } else {
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[0U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[1U];
            vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U] 
                = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__0[2U];
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
        if (vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r)));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r 
                = (2U == (IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r = 0U;
        } else if (vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s) {
            __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
                = (3U & ((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         - (1U & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                                  >> 4U))));
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__full_r = 0U;
            vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__empty_r 
                = (IData)(((0U == (0x300U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U])) 
                           & (vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
                              >> 4U)));
        }
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelfRef.__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__0__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__1__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__2__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__3__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__4__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__5__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__6__KET____DOT__wr_ptr_r;
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r 
        = __Vdly__g_addressing__BRA__7__KET____DOT__wr_ptr_r;
    vlSelfRef.wr_ptr = (((IData)(vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__wr_ptr_r) 
                         << 0xeU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__wr_ptr_r) 
                                      << 0xcU) | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__wr_ptr_r) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__wr_ptr_r) 
                                                      << 8U) 
                                                     | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__wr_ptr_r) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__wr_ptr_r) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__wr_ptr_r) 
                                                               << 2U) 
                                                              | (IData)(vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__wr_ptr_r))))))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1(Vrtlsim_shim_VX_ipdom_stack__W22_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W22_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_stack__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__raddr;
    __PVT__raddr = 0;
    // Body
    __PVT__raddr = ((0x18U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[0U] 
                              >> 5U)) | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                << 1U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                  >> 0x1fU))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__push_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__0__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (0U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__1__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (1U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__2__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (2U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__3__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (3U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__4__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (4U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__5__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (5U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__6__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (6U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__PVT__g_addressing__BRA__7__KET____DOT__pop_s 
        = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
           & (7U == (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                            << 1U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                      >> 0x1fU)))));
    vlSelfRef.__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_pop) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push));
    vlSelfRef.__PVT__waddr = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_enable__DOT__ipdom_push)
                               ? ((0x18U & (((IData)(vlSelfRef.wr_ptr) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                                      << 1U) 
                                                                     | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                                                        >> 0x1fU))), 1U))) 
                                            << 3U)) 
                                  | (7U & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[2U] 
                                              >> 0x1fU))))
                               : (IData)(__PVT__raddr));
    if (((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_write) 
         & ((IData)(vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_waddr) 
            == (IData)(__PVT__raddr)))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__g_async__DOT__g_read_first__DOT__prev_data[2U];
    } else if ((0x17U >= (IData)(__PVT__raddr))) {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.__PVT__ipdom_store__DOT__ram
            [__PVT__raddr][2U];
    } else {
        vlSelfRef.__Vcellout__ipdom_store__rdata[0U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[0U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[1U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[1U];
        vlSelfRef.__Vcellout__ipdom_store__rdata[2U] 
            = vlSelfRef.ipdom_store__DOT____Vxrand_h91116ad2__1[2U];
    }
}
