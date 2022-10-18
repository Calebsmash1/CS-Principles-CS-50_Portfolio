#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startsize;
    do
    {
        startsize = get_int("Start size: ");
    }
    while (startsize < 9);

    // TODO: Prompt for end size
    int endsize;
    do
    {
        endsize = get_int("End size: ");
    }
    while (endsize < startsize);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (startsize < endsize)
    {
        int born = (startsize / 3);
        int dead = (startsize / 4);
        int startsize = (startsize + born - dead);
    }

    // TODO: Print number of years
    printf("Years:\n");
}