/**
 * Say hello to a user
 *
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for their name
    string name = get_string("Name: ");

    // Say hello to the user
    printf("Hello, %s!\n", name);
}