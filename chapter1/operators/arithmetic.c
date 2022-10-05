/**
 * Test out some integer arithmetic
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for an integer and save it
    int number1 = get_int("Integer: ");

    // Prompt the user for another integer
    int number2 = get_int("Another Integer: ");

    // Addition using an extra variable
    // int add = number1 + number2;
    // printf("%i plus %i is %i\n", number1, number2, add);

    printf("%i plus %i is %i\n, number1, number2, number1 + number2);
}