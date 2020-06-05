#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age);                  // %lf would be for input of a double.  (long float)
                                        // %c would be for input of a single character.
                                        // %s would be for input of a string.  You would need to have a 
                                        //      string set to a certain length of the character array.  So it
                                        //      knows how much memory to store.

    printf("You are %d years old.\n", age);

    char string_of_chars[20];
    fgets(string_of_chars, 20, stdin);          // Gathers a line of input up to a certain about of data from
                                                //      stdin (Standard Input).  fgets also grabs the new-line
                                                //      character.

    return 0;
}