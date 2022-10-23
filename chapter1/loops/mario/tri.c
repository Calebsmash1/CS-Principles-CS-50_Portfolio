// Print a triangle of blocks
#include <cs50.h>
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
    blank
    for (int row = 0; row < height; row++)
    {
        // For each column
        for (int col = height - 1; col < height + row; col++)
        {
            // Print a block
            printf("%i#", blank);
        }
        // Print a new line to prepare for next row
        printf("\n");
    }
}