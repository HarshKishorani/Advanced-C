#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// Type defining a fucntion pointer
typedef int (*t_my_func)(int,int);

int add(int x, int y)
{
    return x + y;
}

bool numberIsEven(int c)
{
    return !(c % 2);
}

bool numberIsOdd(int c)
{
    return c % 2;
}

// use case : function that takes in function as parameter.
void print_if(int xs[10], bool (*predicate)(int))
{
    for (int i = 0; i < 10; i++)
    {
        if (predicate(xs[i]))
        {
            printf("%d\n", xs[i]);
        }
    }
}

int compare(const void *x1, const void *x2)
{
    return (*(int *)x2) - (*(int *)x1);
}

int main(void)
{
    int xs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // eg : pointer to function
    // int (*addition_function)(int, int) = add; // Without using typedef
    // t_my_func addition_function = add;        // With using typedef
    // int c = addition_function(3, 5);
    // printf("%d\n", c);

    // printf("Odd Numbers : \n");
    // print_if(xs,numberIsOdd);

    // printf("Even Numbers : \n");
    // print_if(xs, numberIsEven);

    // example : qsort function in standard lib uses function pointers
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", xs[i]);
    // }
    // printf("-------------------------@@-----------------------\n");

    // qsort(xs, 10, sizeof(int), compare);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", xs[i]);
    // }

    return 0;
}