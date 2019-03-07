#include "cpu.h"

Cpu::Cpu(Memory* mem, Display* disp, SoundTimer* soundTimer, Timer* delayTimer) {
   this->memory = mem;
   this->display = disp;
   this->soundTimer = soundTimer;
   this->delayTimer = delayTimer;
};

int Cpu::tick() {
   word16 opcode = *((word16*) memory->get(PC));
   PC += 2;

   switch(opcode)
   {

   }

   return 0;
}
