#include <vx_spawn.h>
#include <vx_intrinsics.h>
#include "common.h"

void kernel_body(kernel_arg_t* __UNIFORM__ arg) {
	auto A = reinterpret_cast<INPUT_TYPE*>(arg->A_addr);
	auto B = reinterpret_cast<INPUT_TYPE*>(arg->B_addr);
	auto C = reinterpret_cast<OUTPUT_TYPE*>(arg->C_addr);
    auto size = arg->size;

    int col = blockIdx.x;
    int row = blockIdx.y;

    OUTPUT_TYPE sum = 0;
    for (int e = 0; e < size; e += 4) {
        // Pack 4 int8_t elements from A (row-major access)
        int32_t A_pack = *reinterpret_cast<int32_t*>(&A[row * size + e]);
        
        // Pack 4 int8_t elements from B (column access)
        // B[k][j] = B[k * size + j] in row-major layout
        int32_t B_pack = ((int32_t)(int8_t)B[(e+0) * size + col] << 0)
                       | ((int32_t)(int8_t)B[(e+1) * size + col] << 8)
                       | ((int32_t)(int8_t)B[(e+2) * size + col] << 16)
                       | ((int32_t)(int8_t)B[(e+3) * size + col] << 24);

        // Use vx_dot8 intrinsic function
        int32_t dot_product = vx_dot8(A_pack, B_pack);
        sum += dot_product;
    }

    C[row * size + col] = sum;
}

int main() {
	kernel_arg_t* arg = (kernel_arg_t*)csr_read(VX_CSR_MSCRATCH);
	return vx_spawn_threads(2, arg->grid_dim, nullptr, (vx_kernel_func_cb)kernel_body, arg);
}
