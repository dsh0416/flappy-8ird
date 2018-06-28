#ifndef H_HELPERS_UTILITIES
#define H_HELPERS_UTILITIES

#include "types.h"

void utilities_helpers_poke(byte* addr, byte val) {
  *addr = val;
}

void utilities_helpers_pokew(word* addr, word val) {
  *addr = val;
}

byte utilities_helpers_peek(byte* addr) {
  return *addr;
}

word utilities_helpers_peekw(word* addr) {
  return *addr;
}

#endif
