// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_EXECUTE_IF__TZ102_H_
#define VERILATED_VRTLSIM_SHIM_VX_EXECUTE_IF__TZ102_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_execute_if__Tz102 final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_execute_if__Tz102(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_execute_if__Tz102();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_execute_if__Tz102);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_execute_if__Tz102* obj);

#endif  // guard
