/**
 * Make division actually happen
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompts user for a number and saves it
    float first = get_float("Number: ");

    // Prompts the user for another number and saves it
    float second = get_float("Another number: ");

    // Divide these two numbers and print the value rounding to three decimals with %.03
    printf("%0.3f divided by %0.3f is %0.3f\n", first, second, first / second);

}