// Save names and numbers to a CSV file

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


    // Write to the file

    // Close the file
}