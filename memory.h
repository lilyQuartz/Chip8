#ifndef MEMORY_H
#define MEMORY_H

#include "types.h"

class Memory {
public:
   virtual byte* get(word16) = 0;
   virtual void set(word16, byte*, word16) = 0;
protected:
   byte* memory;
   int memsize;
};

#endif
