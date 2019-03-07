#include "timer.h"

void Timer::countdown() {
   if ( time > 0 )
      time --;
}

byte Timer::get() {
   return time;
}

void Timer::set(byte val) {
   time = val;
}
