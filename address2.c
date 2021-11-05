#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* you must provide this function somewhere */
extern void write_char(char);

char hex_digit(int v) {
    if (v >= 0 && v < 10)
        return '0' + v;
    else
        return 'a' + v - 10; // <-- Here
}

void print_address_hex(void* p0) {
    int i;
    uintptr_t p = (uintptr_t)p0;

    write_char('0'); write_char('x');
    for(i = (sizeof(p) << 3) - 4; i >= 0; i -= 4) {
        write_char(hex_digit((p >> i) & 0xf));
    }
}
