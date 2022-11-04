// Display the first 25 Fibo numbers

#include <cs50.h>
#include <stdio.h>

//#define N 25

int main(void)
{
    // Declare an array and store the first two fibo terms
    int N = get_int("How many courses do you have homework in? ");
    int fibo[N];
    fibo[0] = 1;
    fibo[1] = 1;

    // Loop to fill in the rest
    for (int i = 2; i < N; i++)
    {
        // Add the previous two terms together
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    // Print out the array
    // Loops through each element and print it
    for (int i = 0; i < N; i++)
    {
        printf("%i\t", fibo[i]);
    }
}