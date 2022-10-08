/**
 * Converts Celsius into Farenheit
 */

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompts the user for a temperature in Celsius
    float number1 = get_float("C: ");

    // Converts the user's input into farenheit and displays it
    printf("F: %0.1f\n", number1 * 9 / 5 + 32);

}