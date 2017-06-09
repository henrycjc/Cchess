#include <stdint.h>
#include <inttypes.h>



int main(void) {

    uint64_t x = 0xff000000000;
    x & 0xf000000000;
    return 0;
}
