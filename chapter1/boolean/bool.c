/**
 * Conditional and relational operators
 */

#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // Prompt a user for a number
    int x = get_int("Integer please: ");

    // Prompt a user for another number
    int y = get_int("Another integer please: ");

    // Compare the numbers
    if (x < y)
    {
        printf("%i is less than %i\n", x, y);
    }
    else if (x > y)
    {
        printf("%i is greater than %i\n", x, y);
    }
    else
    {
        printf("%i is equal to %i\n", x, y);
    }
}