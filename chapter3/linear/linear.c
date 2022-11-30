/**
 * Linear search for an element in an array
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // an array of numbers
    int numbers[] = {4, 8, 50, 16, 23, 42};

    // Search for 50
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found at index %i\n", i);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}