// Multiplies two floats using an integer

#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Function prototype
float float_times_float(float one, float two);

int main(void)
{
    // Get two floats from the user
    float first = get_float("A float, please: ");
    float second = get_float("Another float, please: ");

    // Multiply by calling a function
    float mult = float_times_float(first, second);

    // Display result
    printf("%0.3f times %0.3f is %0.3f\n", first, second, mult);
}

float float_times_float(float one, float two)
{
    return one * two;
}