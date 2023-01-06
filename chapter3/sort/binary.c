// Find a needle in a sorted haystack
#include <cs50.h>
#include <stdio.h>

bool binary_search(int needle, int haystack[], int size);

int main(void)
{
    // Initialize a haystack
    int haystack[8] = {4, 8, 15, 16, 23, 42, 50, 108};

    // Get the needle for user
    int n = get_int("Needle: ");

    // TODO: Search haystack for needle and print result
    if ("")
    {
        printf("Needle is in the haystack.\n");
    }
    else
    {
        printf("Needle is not in the haystack.\n");
    }

}

// TDOD: Binary search function
bool binary_search(int needle, int haystack[], int size)
{
    // Initialize start, middle, and end

    // While still a valid search

        // Calculate the middle

        // If the target is at the middle, stop

        // Otherwise, if the target is less, change end to left of middle

        // Otherwise, the target is greater, change the start to right of middle

    // If start !<= end, target not found

return 0;
}