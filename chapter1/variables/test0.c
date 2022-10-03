/**
 * This program will create variables, assign values, and
 * prints them out.
 *
 * Ernani Caleb Rosse
 * CS50 AP
 * Mount Greylock
 */

#include <stdio.h>
int main(void)
{
    //Declare an integer variable called x and assign 7 to it
    int x;

    // Declare an integer variable called y and assign x + 1 to it
    int y = x + 1;

    //Print the current value
    printf("The value of x is %i and the value of y is %i\n", x, y);
}