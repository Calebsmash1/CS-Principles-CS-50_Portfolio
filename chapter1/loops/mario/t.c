

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
        // For each column
        for (int col = -1; col < row; col++)
        {
            int h = height;
            for(int blank = 1; blank < h - 1; blank++)
            {
                printf(" ");
                h = h - 1;
                printf("#");
            }
            // Print a block
        }

        // Print a new line to prepare for next row
        printf("\n");
    }
}