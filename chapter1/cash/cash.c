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

    // Finds the least amount of coins that should be
    // returned to the user using floor decision
    // and displays it
    float finalchange;
    finalchange = change / 1 / 0.25 / 0.10 / 0.5 / 0.1
    printf("%0.2f\n", change / )

    //Returns change to user
    printf("%0.2f\n", finalchange);

    /**
     *  // Floor division
    printf("%i divided by %i is %i\n", number1, number2, number1 / number2);
    */
}