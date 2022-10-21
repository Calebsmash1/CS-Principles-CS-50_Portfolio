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
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}