#ifndef CPU_H
#define CPU_H

#include "types.h"
#include "timer.h"
#include "soundtimer.h"
#include "display.h"
#include "memory.h"

class Cpu {
public:
   Cpu(Memory*, Display*, SoundTimer*, Timer*);
   int tick();
private:
   // chip 8 registers (minus timers and operand register)
   word16 PC = 0;
   word16 I  = 0;
   word16 SP = 0;
   byte*  V  = new byte[16];
   // references to other components that cpu interacts with
   Memory*  memory;
   Display* display;
   Timer*   delayTimer;
   Timer*   soundTimer;
};

#endif
