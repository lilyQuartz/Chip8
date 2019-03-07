#ifndef DISPLAY_H
#define DISPLAY_H

#include "types.h"

class Display {
public:
   Display();
   ~Display();
   void drawSprite(int, int, int);
private:
   int* display; // each int represents a line of pixels in a 64x32 display
};

#endif
