// Average numbers using an array

#include <cs50.h>
#include <stdio.h>

// Function prototype
float array_average(int length, int array[]);

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
    printf("Average: %0.3f\n",
}

float array_average(int length, int array[]);
{
    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < length; i++)
    {

    }
}