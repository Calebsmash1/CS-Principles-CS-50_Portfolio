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
    do
    {
        change = (change / 0.25);
    }
    while (change >= 0.25);
    do
    {
        change = (change / 0.10);
    }
    while (change >= 0.10);
    do
    {
        change = (change - 0.05);
    }
    while (change >= 0.05);
    do
    {
        change = (change - 0.01);
    }
    while (change >= 0.01);
    // Finds the least amount of coins that should be
    // returned to the user using floor decision
    // and displays it

    printf("%0.0f\n", change);
}