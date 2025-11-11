// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_LSU_MEM_IF__D20_T4_H_
#define VERILATED_VRTLSIM_SHIM_VX_LSU_MEM_IF__D20_T4_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_lsu_mem_if__D20_T4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<11>/*323:0*/ req_data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_lsu_mem_if__D20_T4(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_lsu_mem_if__D20_T4();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_lsu_mem_if__D20_T4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_lsu_mem_if__D20_T4* obj);

#endif  // guard
