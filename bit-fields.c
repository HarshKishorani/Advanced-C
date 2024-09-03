#include <stdio.h>

// A way to say how many bits does a field of struct take in memory.
// Use case Like when cerating ipv4 packets

struct foo
{
    int first_4 : 4; // will take 4 bits
    int next_4 : 4;  // will take 4 bits
    int alone : 1;   // will take 1 bit
    int rest : 7;    // will take 7 bits
};

int main(void)
{
    printf("%zu", sizeof(struct foo));
    struct foo f;
    f.first_4 = 2;
    f.next_4 = 6;
    f.alone = 1234; // will cause overflow

    return 0; 
}