#include <stdio.h>

// Creation of bool type in C if not C++
#ifndef __cplusplus
typedef char bool;
#define True 1
#define False 0
#endif // !__cplusplus

// Creation of byte type in C if not C++
#ifndef __cplusplus
typedef unsigned char byte;
#endif // !__cplusplus

// Using a typedef to create a color structure variable.
typedef struct
{
    int red;
    int green;
    int blue;
    float alpha;
} color;

int main()
{
    color rgb = { 23, 15, 64, 0.5};
    rgb.red = 23;
    printf("%d R, %d G, %d B, %f Alpha\n", rgb.red, rgb.green, rgb.blue, rgb.alpha);
    return 0;
}
