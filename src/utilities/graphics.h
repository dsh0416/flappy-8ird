#ifndef H_GRAPHICS_UTILITIES
#define H_GRAPHICS_UTILITIES

#include <conio.h>
#include "helpers.h"

#define MAX_TEXT_X 
#define MAX_TEXT_Y

enum GraphicsColor {
  BLACK = 0,
  WHITE = 1,
  RED = 2,
  CYAN = 3,
  VIOLET = 4,
  GREEN = 5,
  BLUE = 6,
  YELLOW = 7,
  ORANGE = 8,
  BROWN = 9,
  LIGHT_RED = 10,
  DARK_GREY = 11,
  GREY = 12,
  LIGHT_GREEN = 13,
  LIGHT_BLUE = 14,
  LIGHT_GREY = 15,
};

void utilities_graphics_init() {
  clrscr();
  utilities_helpers_poke((byte*)0xD018, 0x15); // POKE 53272, 21: REM Setup PETSCII Mode
}

void utilities_graphics_frame_color_set(byte color) {
  utilities_helpers_poke((byte*)0xD020, color); // POKE 53280, color
}

void utilities_graphics_background_color_set(byte color) {
  utilities_helpers_poke((byte*)0xD021, color); // POKE 53281, color
}

void utilities_graphics_text_color_set(byte color) {
  utilities_helpers_poke((byte*)0x286, color); // POKE 646, color
}
#endif
