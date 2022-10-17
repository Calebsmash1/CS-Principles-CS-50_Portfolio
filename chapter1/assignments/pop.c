#include <cs50.h>
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
    int size;
    do
    {
        size = get_int("Start size: ");
    }
    while (size < 9);

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
    printf("Years:%0.1i\n", size);
}