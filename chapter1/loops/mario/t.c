

// Print a triangle of blocks
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Get a height from the user
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    // For each row
    for (int row = 0; row < height; row++)
    {
        // For each blank space
        int h = height;
        int r = row - 1;
        for(int blank = 0; blank < h - r; blank++)
        {
            printf(" ");
        }
            // For each column
            for (int col = 0; col <= row; col++)
            {
                // Print a block
                printf("#");
            }
        // Print a new line to prepare for next row
        printf("\n");
    }
}