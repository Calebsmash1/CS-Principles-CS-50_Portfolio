// Average three numbers (hardcoded) using an array

#include <cs50.h>
#include <stdio.h>



int main(void)
{
    // Scores
    int scores[3];
    scores[0] = 63;
    scores[1] = 42;
    scores[2] = 98;

    // Print the average
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}