/**
 * A program that first asks the user how much
 * change is owed and then prints the minmum
 * number of coins with which that change can be made
*/

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Asks user for the amount of change owed
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    // Finds out the least amount of coins that should
    // be returned to the user through while statements
    int coins = 0;
    while (change >= 0.25)
    {
        coins = (coins + 1);
        change = (change - .25);
    }
    while (change >= 0.10)
    {
        coins = (coins + 1);
        change = (change - .10);
    }
    while (change >= 0.05)
    {
        coins = (coins + 1);
        change = (change - .05);
    }
    while (change >= 0.01)
    {
        coins = (coins + 1);
        change = (change - .01);
    }

    // Returns change to user
    printf("%i\n", coins);
}