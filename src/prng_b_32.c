#include "prng_b_32.h"

uint32_t prng_b_32(struct prng_b_32_s *s) {
  s->a = ((s->a << 13) | (s->a >> 19)) ^ s->b;
  s->b += 1111111111;
  return s->a + s->b;
}
