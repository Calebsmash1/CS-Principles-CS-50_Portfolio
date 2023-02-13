#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Iterate over pyramid's rows
    for (int i = 0; i < height; i++)
    {
        // Iterate over pyramid colum
        for (int j = 0; j < height; j++)
        {
            // Space
            if (j < height - i - 1)
            {
                printf(" ");
            }

            // Has
            else
            {
                printf("#");
            }
        }

        // Newline
        printf("\n");
    }
}