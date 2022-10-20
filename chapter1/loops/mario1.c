// Print the number of question marks provided by the user

#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Get the number of ? that the user wants
    int q = get_int("Number: ");

    // For each question mark
    for (int i = 0; i < q; i++)
    {
        // Print a ?
        printf("?");
    }

    // Prints a new line
    printf("\n");
}