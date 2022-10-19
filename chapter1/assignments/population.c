#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompts the user for start size
    int startsize;
    do
    {
        startsize = get_int("Start size: ");
    }
    while (startsize < 9);

    // Prompts the user for end size
    int endsize;
    do
    {
        endsize = get_int("End size: ");
    }
    while (endsize < startsize);

    // Calculate number of years until we reach threshold
    int years = 0;
    while (startsize < endsize)
    {
        int born = (startsize / 3);
        int dead = (startsize / 4);
        startsize = (startsize + born - dead);
        years = (years + 1);
    }

    // Print number of years
    printf("Years: %i", years);
}