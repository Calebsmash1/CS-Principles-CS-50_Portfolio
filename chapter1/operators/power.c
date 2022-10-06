/**
 * Raise a number to a power
 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Prompt the user for a number
    double number = get_double("Give me a number, please: ");

    // Prompt the user for a power
    double p = get_double("Give a power, please: ");

    printf("%f raised to the power of %f is %f\n", number, p, pow(number, p));
}