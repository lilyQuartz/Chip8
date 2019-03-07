#include "memory4k.h"

Memory4k::Memory4k() {
   memsize = 4096;
   memory = new byte[memsize];
}
Memory4k::~Memory4k() {
   delete memory;
}
byte* Memory4k::get(word16 address) {

}
void Memory4k::set(word16 address, byte* valuePtr, word16 length) {

}
