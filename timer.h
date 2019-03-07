#ifndef TIMER_H
#define TIMER_H

#include "types.h"

class Timer {
public:
   void countdown();
   byte get();
   void set(byte);
protected:
   byte time = 0;
};

#endif
