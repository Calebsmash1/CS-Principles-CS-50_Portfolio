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
    int finalchange = 1;
    do
    {
        finalchange = (finalchange + 1);
        change = (change - 0.25);
    }
    while (change >= 0.25);
    do
    {
        finalchange = (change + 1);
        change = (change - 0.10);
    }
    while (change >= 0.10);
    do
    {
        finalchange = (finalchange + 1);
        change = (change - 0.05);
    }
    while (change >= 0.05);
    do
    {
        finalchange = (finalchange + change);
    }
    while (change >= 0.01);

    // Returns change to user
    printf("%0.0i\n", finalchange);
}