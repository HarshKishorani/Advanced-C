#include <stdio.h>
#include <stdint.h> // contains specific int types like int32_t, uint32_t, ...

int main(void)
{
    // int b = 32; // Initialise in int
    // int b = 0xff; // initialise in hexadecimal starting 0x
    // int b = 0377; // initialise in octadecimal staring 0
    int b = 0b01010; // initialise in binary starting 0b

    printf("b in hexadecimal : %x\n", b);
    printf("b in int : %d\n", b);
    printf("b in octadecimal : %o\n", b);
    printf("b in binary : %o\n", b);


}