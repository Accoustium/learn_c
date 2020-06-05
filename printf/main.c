#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello\nWorld");         // \n is a new-line character.
    printf("Hello\"World");         // \ is used to escape characters to print the character.
    print("%d", 4);                 // %d is called a format specifier, for integers.
    print("%s", "Hello");           // %s is for strings.
    pring("%f", 3.4);               // %f is used for float or double numbers.

    return 0;
}