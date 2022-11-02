// Average numbers using an array

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Let the user decide how many scores to enter
    int n = get_int("How many scores do you want to enter? ");

    // Scores
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print the average
    printf("Average: %0.3f\n", (scores[0] + scores[1] + scores[2]) / (float) n);
}