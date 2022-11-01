// Checks to see if three side lengths would make a vaild trinagle
#include <cs50.h>
#include <stdio.h>

// Declare functions
bool valid_triangle(float x, float y, float z);

int main(void)
{
    // Get side lengths from user
    printf("Please provide the three sides lengths of a triangle.\n");
    float side1 = get_float("1st Side: ");
    float side2 = get_float("2nd Side: ");
    float side3 = get_float("3rd side: ");

    // Determine if a valid triangle by calling valid_triangle
    // then print result "Valid!" or "Invalid!"
    if(valid_triangle(side1, side2, side3))
    {
        printf("Valid!\n");
    }
    else
    {
        printf("Invalid!\n");
    }
}
// Function that checks to see if a valid triangle
bool valid_triangle(float x, float y, float z)
{

    // Check for all positive sides, return false if not
    if(x <=0 || y <=0 || z <= 0)
    {
        return false;
    }
    // Check that sum of any two sides greater than third, return false if not
    if(x + y <= z || y + z <= x || x + z <= y)
    {
        return false;
    }

    // If we passed both tests, we're good!
    return true;
}