# PRNG B 32

It's a fast, statistically-strong PRNG with 32-bit integers and a period of 2³².

`prng_b_32()` is the randomization function that generates a 32-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It's in the same class as Xorshift32 with 1 auxiliary 32-bit state integer.

It has a minimum period of 2³² without broken cycles.

Incrementing `b` outside of `prng_b_32()` behaves as an interdimensional jump function that starts a different cycle with a period of at least 2³².

Zeroland escapes immediately after generating 1 subsequent number.

It's the fastest 32-bit PRNG that generates numbers individually, has a period of at least 2³² and passes statistical tests in `stdin32` PractRand with 8MB of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
