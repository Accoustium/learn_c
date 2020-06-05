#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello\nWorld");         // \n is a new-line character.
    printf("Hello\"World");         // \ is used to escape characters to print the character.
    printf("%d", 4);                // %d is called a format specifier, for integers.
    printf("%s", "Hello");          // %s is for strings.
    printf("%f", 3.4);              // %f is used for float or double numbers.
    print("%c", 'i');               // %c is for single characters.  Cannot be used on strings.

    return 0;
}