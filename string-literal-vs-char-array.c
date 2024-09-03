#include <stdio.h>

int main(void)
{
    char *literal = "I am a string literal";
    char array[] = "I am a string array";

    array[0] = '#'; // array is modifieable
    // literal[0] = '$'; // will cause seg fault
    // To edit string literal will have to duplicate it using strdup()

    printf("%s\n", literal);
    printf("%s\n", array);
}