#include "lyra2/Lyra2.h"

void lyra2z_hash(const char* input, char* output, uint32_t len) {
  LYRA2(output, 32, input, 80, input, 80, 2, 8192, 256);
}
