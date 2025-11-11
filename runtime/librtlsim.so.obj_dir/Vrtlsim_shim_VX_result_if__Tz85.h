// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_RESULT_IF__TZ85_H_
#define VERILATED_VRTLSIM_SHIM_VX_RESULT_IF__TZ85_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_result_if__Tz85 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<10>/*306:0*/ data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_result_if__Tz85(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_result_if__Tz85();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_result_if__Tz85);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_result_if__Tz85* obj);

#endif  // guard
