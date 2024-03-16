#ifndef LOOKUP_H
#define LOOKUP_H

#include <cstdint>
#include <cassert>

#define REPEAT(n) for (int repeat_index = 0; repeat_index < n; repeat_index++)

uint8_t l_get_first_bit(uint8_t x);
uint8_t l_right_shift_one(uint8_t x);
uint8_t l_left_shift_one(uint8_t x);
uint8_t l_set_last_bit(uint8_t x, uint8_t one_bit);
uint8_t l_concat_bits(uint8_t one_a, uint8_t one_b);
uint8_t l_xor_bits(uint8_t one_a, uint8_t one_b);
uint8_t l_and_bits(uint8_t one_a, uint8_t one_b);
uint8_t l_or_bits(uint8_t one_a, uint8_t one_b);
uint8_t l_not_bits(uint8_t one_a);
uint8_t l_xor(uint8_t a, uint8_t b);
void l_add_bits(uint8_t one_a, uint8_t one_b, uint8_t one_c, uint8_t* sum, uint8_t* carry);
uint8_t l_add(uint8_t a, uint8_t b);
uint8_t l_get_last_bit(uint8_t x);
uint8_t l_greater_than(uint8_t a, uint8_t b);

#endif