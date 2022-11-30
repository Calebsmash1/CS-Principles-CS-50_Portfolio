/**
 * Linear search for an element in an array
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // A string of names
    string names[] = {"Tyler", "Will", "Matt", "John", "Aiden"};

    // Search for Tyler
    for (int i = 0; i < 5; i++)
    {
        if (names[i] == "Tyler")
        {
            printf("Found at index %i\n", i);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}