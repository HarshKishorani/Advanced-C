#include <stdio.h>
#include <stdarg.h>

// Everything is contained in stdarg
/*

    void va_start(va_list ap, last);
    type va_arg(va_list ap, type);
    void va_end(va_list ap);
    void va_copy(va_list dest, va_list src);

*/
int sum_all(int count, ...)
{
    va_list ap; // Variable argument list
    va_start(ap, count);
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        int x = va_arg(ap, int);
        sum += x;
    }
    va_end(ap);
    return sum;
}

int main(void)
{
    printf("%d", sum_all(3, 1, 2, 3));
    return 0;
}