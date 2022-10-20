// Prints a square
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    // For each row
    for (int i = 0; i < height; i++)
    {
        // For each column
        for (int j = 0; j < height; j++)
        {
            printf("#")
        }

        printf("\n";)
    }

}