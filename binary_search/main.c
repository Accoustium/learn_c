#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int indexOf(int array[], int find, int left, int right);
int compare(int num1, int num2);

int main()
{
    // Attempt: 1 --- Failed first with recursion.
    // Attempt: 2 --- Adding print for printing out middle number.
    // Attempt: 3 --- Adding print of left and right numbers.
    // Attempt: 4 --- Change right value to 4 (index of last item).
    // Attempt: 5 --- Find out value of (2 - 1) / 2.
    // Attempt: 6 --- Find out value of (int)(floor((2 - 1) / 2)).
    // Attempt: 7 --- Implement changes to middle.  Remove print of left and right.
    // Attempt: 8 --- Don't just copy paste into middle (need variables, not numbers).
    // Attempt: 9 --- Adding back the print of left and right.
    // Attempt: 10 --- Remove extra(?) braces from switch statement.
    // Attempt: 11 --- Maybe syntax... but failed.
    // Attempt: 12 --- Test query (compare function).
    // Attempt: 13 --- Find what array[middle] I am sending in.
    // Attempt: 14 --- Adding in left value?  Removing print of query. -- WINNER WINNER -- Clean up time.
    // Attempt: 15 --- Test finding 1 in value.
    int array[] = {1, 2, 3, 4, 5};

    // Finding 3 in array.
    printf("%d\n", indexOf(array, 3, 0, 4));

    // Finding 4 in array.
    printf("%d\n", indexOf(array, 4, 0, 4));

    // Finding 1 in array.
    printf("%d\n", indexOf(array, 1, 0, (int)(sizeof(array) / sizeof(array[0]))));

    return 0;
}

int indexOf(int array[], int find, int left, int right)
{
    // If left is greater than right, object not found in array.
    if (left > right) { return -1; }

    int middle = (int)(floor((right - left) / 2)) + left;
    int query = compare(find, array[middle]);
    switch(query) {
        case 1 :
            left = middle + 1;
            break;
        case -1 :
            right = middle - 1;
            break;
        default :
            return middle;
    }

    indexOf(array, find, left, right);
}

int compare(int num1, int num2)
{
    if (num1 > num2) { return 1; }
    if (num1 < num2) { return -1; }
    return 0;
}