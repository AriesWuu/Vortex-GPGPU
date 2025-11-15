// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_TCU_FEDP_DPI__L4_N2_H_
#define VERILATED_VRTLSIM_SHIM_VX_TCU_FEDP_DPI__L4_N2_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(enable,0,0);
        VL_IN8(fmt_s,2,0);
        VL_IN8(fmt_d,2,0);
        CData/*4:0*/ __Vtask_dpi_fmadd__2__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__5__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__8__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__11__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__12__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__13__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__16__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__19__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__22__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__25__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__26__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__27__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__30__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__33__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__36__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__39__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__40__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__41__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__44__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__47__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__50__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__53__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__54__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__55__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__58__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__61__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__64__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__67__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__68__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__69__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__72__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__75__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__78__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__81__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__82__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__83__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__86__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__89__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__92__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__95__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__96__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__97__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__100__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__103__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__106__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__109__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__110__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__111__fflags;
        VL_IN64(a_row,63,0);
        VL_IN64(b_col,63,0);
        VL_IN(c_val,31,0);
        VL_OUT(d_val,31,0);
        QData/*63:0*/ __PVT__pipe_c__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*63:0*/ __PVT__pipe_acc__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*63:0*/ __PVT__g_prod__BRA__0__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*63:0*/ __PVT__g_prod__BRA__1__KET____DOT__pipe_mult__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        QData/*63:0*/ __Vxrand_h7d2804ec__1;
        QData/*63:0*/ __Vxrand_h7d2804ec__0;
        QData/*63:0*/ __PVT__xacc;
    };
    struct {
        QData/*63:0*/ __PVT__g_prod__BRA__0__KET____DOT__a_f;
        QData/*63:0*/ __PVT__g_prod__BRA__0__KET____DOT__b_f;
        QData/*63:0*/ __PVT__g_prod__BRA__0__KET____DOT__xprod;
        QData/*63:0*/ __PVT__g_prod__BRA__1__KET____DOT__a_f;
        QData/*63:0*/ __PVT__g_prod__BRA__1__KET____DOT__b_f;
        QData/*63:0*/ __PVT__g_prod__BRA__1__KET____DOT__xprod;
        QData/*63:0*/ __Vtask_dpi_f2f__0__result;
        QData/*63:0*/ __Vtask_dpi_f2f__1__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__2__result;
        QData/*63:0*/ __Vtask_dpi_f2f__3__result;
        QData/*63:0*/ __Vtask_dpi_f2f__4__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__5__result;
        QData/*63:0*/ __Vtask_dpi_f2f__6__result;
        QData/*63:0*/ __Vtask_dpi_f2f__7__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__8__result;
        QData/*63:0*/ __Vtask_dpi_f2f__9__result;
        QData/*63:0*/ __Vtask_dpi_f2f__10__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__11__result;
        QData/*63:0*/ __Vtask_dpi_fadd__12__result;
        QData/*63:0*/ __Vtask_dpi_fadd__13__result;
        QData/*63:0*/ __Vtask_dpi_f2f__14__result;
        QData/*63:0*/ __Vtask_dpi_f2f__15__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__16__result;
        QData/*63:0*/ __Vtask_dpi_f2f__17__result;
        QData/*63:0*/ __Vtask_dpi_f2f__18__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__19__result;
        QData/*63:0*/ __Vtask_dpi_f2f__20__result;
        QData/*63:0*/ __Vtask_dpi_f2f__21__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__22__result;
        QData/*63:0*/ __Vtask_dpi_f2f__23__result;
        QData/*63:0*/ __Vtask_dpi_f2f__24__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__25__result;
        QData/*63:0*/ __Vtask_dpi_fadd__26__result;
        QData/*63:0*/ __Vtask_dpi_fadd__27__result;
        QData/*63:0*/ __Vtask_dpi_f2f__28__result;
        QData/*63:0*/ __Vtask_dpi_f2f__29__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__30__result;
        QData/*63:0*/ __Vtask_dpi_f2f__31__result;
        QData/*63:0*/ __Vtask_dpi_f2f__32__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__33__result;
        QData/*63:0*/ __Vtask_dpi_f2f__34__result;
        QData/*63:0*/ __Vtask_dpi_f2f__35__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__36__result;
        QData/*63:0*/ __Vtask_dpi_f2f__37__result;
        QData/*63:0*/ __Vtask_dpi_f2f__38__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__39__result;
        QData/*63:0*/ __Vtask_dpi_fadd__40__result;
        QData/*63:0*/ __Vtask_dpi_fadd__41__result;
        QData/*63:0*/ __Vtask_dpi_f2f__42__result;
        QData/*63:0*/ __Vtask_dpi_f2f__43__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__44__result;
        QData/*63:0*/ __Vtask_dpi_f2f__45__result;
        QData/*63:0*/ __Vtask_dpi_f2f__46__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__47__result;
        QData/*63:0*/ __Vtask_dpi_f2f__48__result;
        QData/*63:0*/ __Vtask_dpi_f2f__49__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__50__result;
        QData/*63:0*/ __Vtask_dpi_f2f__51__result;
        QData/*63:0*/ __Vtask_dpi_f2f__52__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__53__result;
        QData/*63:0*/ __Vtask_dpi_fadd__54__result;
        QData/*63:0*/ __Vtask_dpi_fadd__55__result;
        QData/*63:0*/ __Vtask_dpi_f2f__56__result;
        QData/*63:0*/ __Vtask_dpi_f2f__57__result;
    };
    struct {
        QData/*63:0*/ __Vtask_dpi_fmadd__58__result;
        QData/*63:0*/ __Vtask_dpi_f2f__59__result;
        QData/*63:0*/ __Vtask_dpi_f2f__60__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__61__result;
        QData/*63:0*/ __Vtask_dpi_f2f__62__result;
        QData/*63:0*/ __Vtask_dpi_f2f__63__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__64__result;
        QData/*63:0*/ __Vtask_dpi_f2f__65__result;
        QData/*63:0*/ __Vtask_dpi_f2f__66__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__67__result;
        QData/*63:0*/ __Vtask_dpi_fadd__68__result;
        QData/*63:0*/ __Vtask_dpi_fadd__69__result;
        QData/*63:0*/ __Vtask_dpi_f2f__70__result;
        QData/*63:0*/ __Vtask_dpi_f2f__71__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__72__result;
        QData/*63:0*/ __Vtask_dpi_f2f__73__result;
        QData/*63:0*/ __Vtask_dpi_f2f__74__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__75__result;
        QData/*63:0*/ __Vtask_dpi_f2f__76__result;
        QData/*63:0*/ __Vtask_dpi_f2f__77__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__78__result;
        QData/*63:0*/ __Vtask_dpi_f2f__79__result;
        QData/*63:0*/ __Vtask_dpi_f2f__80__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__81__result;
        QData/*63:0*/ __Vtask_dpi_fadd__82__result;
        QData/*63:0*/ __Vtask_dpi_fadd__83__result;
        QData/*63:0*/ __Vtask_dpi_f2f__84__result;
        QData/*63:0*/ __Vtask_dpi_f2f__85__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__86__result;
        QData/*63:0*/ __Vtask_dpi_f2f__87__result;
        QData/*63:0*/ __Vtask_dpi_f2f__88__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__89__result;
        QData/*63:0*/ __Vtask_dpi_f2f__90__result;
        QData/*63:0*/ __Vtask_dpi_f2f__91__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__92__result;
        QData/*63:0*/ __Vtask_dpi_f2f__93__result;
        QData/*63:0*/ __Vtask_dpi_f2f__94__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__95__result;
        QData/*63:0*/ __Vtask_dpi_fadd__96__result;
        QData/*63:0*/ __Vtask_dpi_fadd__97__result;
        QData/*63:0*/ __Vtask_dpi_f2f__98__result;
        QData/*63:0*/ __Vtask_dpi_f2f__99__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__100__result;
        QData/*63:0*/ __Vtask_dpi_f2f__101__result;
        QData/*63:0*/ __Vtask_dpi_f2f__102__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__103__result;
        QData/*63:0*/ __Vtask_dpi_f2f__104__result;
        QData/*63:0*/ __Vtask_dpi_f2f__105__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__106__result;
        QData/*63:0*/ __Vtask_dpi_f2f__107__result;
        QData/*63:0*/ __Vtask_dpi_f2f__108__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__109__result;
        QData/*63:0*/ __Vtask_dpi_fadd__110__result;
        QData/*63:0*/ __Vtask_dpi_fadd__111__result;
        VlUnpacked<IData/*31:0*/, 2> __PVT__nult_result;
    };

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_tcu_fedp_dpi__L4_N2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
