#include <stdio.h>

#define FOO 2 // Preprocess
// #define ADD(x, y) x + y // This will just replace the text
// So when we do int x = 5 * ADD(2, 3);
// Output should be 25 but we get 13
// beacuse preprocess just replaces text
// So the code translate to 5 * 2 + 3

// Instead we should add parenthesis to function macros
#define ADD(x, y) ((x) + (y))

// Multiline macros
#define SUM_RANGE(start, end)             \
    {                                     \
        int sum = 0;                      \
        for (int x = start; x < end; x++) \
            sum += x;                     \
        printf("sum : %d", sum);          \
    }

int main(void)
{

    int x = 5 * ADD(2, 3);
    printf("%d\n", x);

    SUM_RANGE(1, 11);
    return 0;
}