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
    int pennies = round(change * 100);


    // Finds out the least amount of coins that should
    // be returned to the user through while statements
    int coins = 0;
    while (pennies >= 25)
    {
        coins = (coins + 1);
        pennies = (pennies - 25);
    }
    while (pennies >= 10)
    {
        coins = (coins + 1);
        pennies = (pennies - 10);
    }
    while (pennies >= 5)
    {
        coins = (coins + 1);
        pennies = (pennies - 5);
    }
    while (pennies >= 1)
    {
        coins = (coins + 1);
        pennies = (pennies - 1);
    }

    // Returns change to user
    printf("%i\n", coins);
}