/**
 * A program that first asks the user how much
 * change is owed and then prints the minmum
 * number of coins with which that change can be made
*/

#include <cs50.h>
// #include <math.h>
#include <stdio.h>

int main(void)
{
    // Asks user for the amount of change owed
    int change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);
    int cents = round(dollars * 100);

    // Establishes available change options
    //int dollar = (1);
    //float quarter = (0.25);
    //float dime = (0.10);
    //float nickel = (0.05);
    //float penny = (0.01);
    // Finds the least amount of coins that should be
    // returned to the user using floor decision
    // and displays it

    printf("%0.0f\n", change / 0.25 + 1);

    //Returns change to user
    // printf("%0.2f\n", finalchange);

    /**
     *  // Floor division
    printf("%i divided by %i is %i\n", number1, number2, number1 / number2);
    */
}