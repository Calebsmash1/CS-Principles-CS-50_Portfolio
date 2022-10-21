#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompts the user for height of pyramid
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <=0);

    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}