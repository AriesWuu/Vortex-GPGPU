#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdint.h>

// For int8_t input and int32_t output comparison with dot8
#ifndef INPUT_TYPE
#define INPUT_TYPE int8_t
#endif

#ifndef OUTPUT_TYPE
#define OUTPUT_TYPE int32_t  // Prevent overflow, match dot8 behavior
#endif

// For backward compatibility with TYPE macro
#ifndef TYPE
#define TYPE INPUT_TYPE
#endif

typedef struct {
  uint32_t grid_dim[2];
  uint32_t size;
  uint64_t A_addr;
  uint64_t B_addr;
  uint64_t C_addr;
} kernel_arg_t;

#endif
