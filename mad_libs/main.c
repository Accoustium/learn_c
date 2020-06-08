#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityf[20];
    char celebrityl[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural-noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityf, celebrityl);                  // scanf grabs up to first space character.
                                                            // Using two to grab both names... but if a
                                                            // celebrity has two names.. it will break.
    
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s%s\n", celebrityf, celebrityl);

    return 0;
}