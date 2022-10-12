// Get a positive integer

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Initialize variable outside of the do-while loop for proper scope
    int n;

    // Prompt the user for an integer while their response is negative
    do
    {
        n = get_int("Positive integer: ");
    }
    while (n < 0);


    
}