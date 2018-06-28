#include <stdio.h>
#include "utilities/graphics.h"

int main() {
  utilities_graphics_init();
  utilities_graphics_frame_color_set(LIGHT_GREEN);
  utilities_graphics_background_color_set(LIGHT_BLUE);
  utilities_graphics_text_color_set(WHITE);
  printf("hello commodore 64");

  while (true) {}
  return 0;
}


