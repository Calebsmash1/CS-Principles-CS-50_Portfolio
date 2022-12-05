/**
 * Linear search for a phone number
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

typedef struct
{
    string name;
    number;
}
person;

int main(void)
{
    // Create an array of called people where each index is of type person
    person people[5];

    // Filling our array
    people[0].name = "Tyler";
    people[0].number = "111-111-1111";

    people[1].name = "Will";
    people[1].number = "222-222-2222";

    people[2].name = "Matt";
    people[2].number = "333-333-3333";

    people[3].name = "John";
    people[3].number = "444-444-4444";

    people[4].name = "Aiden";
    people[4].number = "555-555-5555";

    // Ask the user what to search for
    string name = get_string("Name: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcasecmp(people[i].name  == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}