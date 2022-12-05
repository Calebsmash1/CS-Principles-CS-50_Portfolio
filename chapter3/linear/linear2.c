/**
 * Linear search for a phone number
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // A string of names
    string names[] = {"Tyler", "Will", "Matt", "John", "Aiden"};

    // An array of phone numbers
    string numbers[] = {"413-555-5555", "800-123-4567", "603-000-9876", "555-555-5555", "518-518-5185"};

    // Ask the user what to search for
    string name = get_string("Name: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}