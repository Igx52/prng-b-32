#ifndef PRNG_B_32_H
#define PRNG_B_32_H

#include <stdint.h>

struct prng_b_32_s {
  uint32_t a;
  uint32_t b;
};

uint32_t prng_b_32(struct prng_b_32_s *s);

#endif
