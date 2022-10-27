// Multiplies two floats using an integer

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    // Get two floats from the user
    float first = get_float("A float, please: ");
    float second = get_float("Another float, please: ");

    // Multiply by calling a function
    float mult = float_times_float(first, second);

    // Display result
    printf("%f times %f is %f\n", first, second, mult);
}

float float_times_float(float one, float two)
{
    return one * two;
}