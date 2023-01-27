// Save names and numbers to a CSV file

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Open a .csv file
    FILE *fonebook = fopen("phonebook.csv", "w");
    if(!fonebook)

    // Check to see if file opened successfully
    {
        printf("Error loading file\n");
        return 1;
    }

    // Get name and number
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Write to the file

    // Close the file
}