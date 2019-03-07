#include "soundtimer.h"
#include <iostream>

void SoundTimer::countdown() {
   Timer::countdown();
   if ( time == 0 )
      std::cout << '\a';
}
