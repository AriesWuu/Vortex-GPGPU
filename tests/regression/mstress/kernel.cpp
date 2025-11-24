#include <vx_spawn.h>
#ifdef ENABLE_UNIFIED_CACHE
#include <vx_intrinsics.h>
#ifndef UNIFIED_CACHE_PERCENT
#define UNIFIED_CACHE_PERCENT 50
#endif
#endif
#include "common.h"

void kernel_body(kernel_arg_t* __UNIFORM__ arg) {
	uint32_t stride    = arg->stride;
	uint32_t* addr_ptr = (uint32_t*)arg->src0_addr;
	float* src_ptr     = (float*)arg->src1_addr;
	float* dst_ptr     = (float*)arg->dst_addr;

	uint32_t offset = blockIdx.x * stride;

	for (uint32_t i = 0; i < stride; ++i) {
		float value = 0.0f;
		for (uint32_t j = 0; j < NUM_LOADS; ++j) {
			uint32_t addr  = offset + i + j;
			uint32_t index = addr_ptr[addr];
			value *= src_ptr[index];
		}
		dst_ptr[offset+i] = value;
	}
}

int main() {
	kernel_arg_t* arg = (kernel_arg_t*)csr_read(VX_CSR_MSCRATCH);
#ifdef ENABLE_UNIFIED_CACHE
	vx_cache_partition(UNIFIED_CACHE_PERCENT);
#endif
	return vx_spawn_threads(1, &arg->num_tasks, nullptr, (vx_kernel_func_cb)kernel_body, arg);
}
