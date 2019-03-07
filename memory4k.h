#ifndef MEMORY4K_H
#define MEMORY4K_H

#include "memory.h"

class Memory4k: public Memory {
public:
   Memory4k();
   ~Memory4k();
   byte* read(word16);
   void write(word16, byte*, word16);
};

#endif
