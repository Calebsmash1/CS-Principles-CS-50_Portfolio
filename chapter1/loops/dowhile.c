// Get a positive integer

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do
    {
        int n = get_int("Positive integer: ");
    }
    while (n < 0);
}