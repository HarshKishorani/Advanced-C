#include <stdio.h>
#include <stdbool.h>

// We can hace maximum 64 boolean bit flags.

// first way of Defining a bit flag
// typedef unsigned int t_flag;
// #define FLAG_A (1 << 0) // In FLAG_A, 1st bit will be set.
// #define FLAG_B (1 << 1) // In FLAG_B, 2nd bit will be set.
// #define FLAG_C (1 << 2) // In FLAG_C, 3rd bit will be set.

// second way of Defining a bit flag
typedef enum
{
    FLAG_A = (1 << 0), // In FLAG_A, 1st bit will be set.
    FLAG_B = (1 << 1), // In FLAG_B, 2nd bit will be set.
    FLAG_C = (1 << 2)  // In FLAG_C, 3rd bit will be set.
} t_flag;

// Original Function
/*
int f(int x, bool is_added, bool is_squared, bool is_not)
{
    if (is_added)
        x += x;
    if (is_squared)
        x *= x;
    if (is_not)
        x = ~x;
    return x;
}
*/

// Function using bit flags.
// (Replacing all the boolean flags with single parameter of unsigned int)
int f(int x, t_flag flags)
{
    if (flags & FLAG_A)
        x += x;
    // flags &= ~FLAG_A; // Unsetting a flag
    if (flags & FLAG_B)
        x *= x;
    if (flags & FLAG_C)
        x = ~x;
    return x;
}

int main(void)
{
    // Original way of calling the function
    // printf("%d\n", f(1234, false, false, false));
    // printf("%d\n", f(1234, true, false, false));
    // printf("%d\n", f(1234, false, true, true));

    // Using Bit flags. Now more readable
    // Using first way
    // printf("%d\n", f(1234, 0));               // All flags are false
    // printf("%d\n", f(1234, FLAG_A));          // Only FLAG_A is true
    // printf("%d\n", f(1234, FLAG_B | FLAG_C)); // FLAG_B and FLAG_C are true.

    // Using second way
    printf("%d\n", f(1234, (t_flag)0));       // All flags are false
    printf("%d\n", f(1234, FLAG_A));          // Only FLAG_A is true
    printf("%d\n", f(1234, (t_flag)(FLAG_B | FLAG_C))); // FLAG_B and FLAG_C are true.
    return 0;
}