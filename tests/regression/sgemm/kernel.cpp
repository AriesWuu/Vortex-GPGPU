#include <vx_spawn.h>
#ifdef ENABLE_UNIFIED_CACHE
#include <vx_intrinsics.h>
#ifndef UNIFIED_CACHE_PERCENT
#define UNIFIED_CACHE_PERCENT 50
#endif
#endif
#include "common.h"

void kernel_body(kernel_arg_t* __UNIFORM__ arg) {
	auto A = reinterpret_cast<INPUT_TYPE*>(arg->A_addr);
	auto B = reinterpret_cast<INPUT_TYPE*>(arg->B_addr);
	auto C = reinterpret_cast<OUTPUT_TYPE*>(arg->C_addr);
    auto size = arg->size;

    int col = blockIdx.x;
    int row = blockIdx.y;

    OUTPUT_TYPE sum = 0;  // Use int32_t accumulator to prevent overflow
    for (int e = 0; e < size; ++e) {
        sum += (OUTPUT_TYPE)A[row * size + e] * (OUTPUT_TYPE)B[e * size + col];
    }

    C[row * size + col] = sum;
}

int main() {
	kernel_arg_t* arg = (kernel_arg_t*)csr_read(VX_CSR_MSCRATCH);
#ifdef ENABLE_UNIFIED_CACHE
    vx_cache_partition(UNIFIED_CACHE_PERCENT);
#endif
	return vx_spawn_threads(2, arg->grid_dim, nullptr, (vx_kernel_func_cb)kernel_body, arg);
}
