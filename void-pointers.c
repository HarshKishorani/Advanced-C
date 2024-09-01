#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

void *mymemset(void *data, uint8_t c, size_t n)
{
    uint8_t *data_as_bytes = (uint8_t *)data;
    for (size_t i = 0; i < n; i++)
    {
        data_as_bytes[i] = c;
    }
    return data;
}

void map(void *xs, size_t n, size_t size, void (*f)(void *))
{
    uint8_t *xs_as_bytes = (uint8_t *)xs;
    for (size_t i = 0; i < n; i++)
    {
        f(&xs_as_bytes[i * size]);
    }
}

void square(void *x)
{
    int *p = (int *)x; 
    *p = *p * *p;
}

int main(void)
{
    int xs[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", xs[i]);
    }
    printf("\n");
    // mymemset(xs, 0, sizeof xs);
    map(xs, 5, sizeof(int), square);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", xs[i]);
    }
    printf("\n");

    // int a = 5;
    // void *p = &a; // void pointer to the address of a
    // printf("%p\n", p);
    // printf("%d\n", *(int *)p);

    return 0;
}