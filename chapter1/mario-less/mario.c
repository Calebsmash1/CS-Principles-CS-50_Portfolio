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

    // Calculates how many spaces should exist and prints the triangle
    for (int h = 0; h < height; h++)
    {
        for (int l = 0; l < lenght; l++)
        printf("#\n");
    }
}