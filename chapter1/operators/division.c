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

    // Divide these two numbers and print the value
    printf("%f divided by %f is %f\n", first, second, first / second);

}