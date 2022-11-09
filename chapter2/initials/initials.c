// Implement our own version of strlen

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get string (Full name) from user
    string s = get_string("Full name: ");

    // Prints first initial
    for (int i = 0; i < 1; i++)
    {
        // Print each character with a new line to make it vertical
        printf("%c", s[i]);

    }

    // Initializes a counter

    for (int i = 1; i < strlen(s); i++)
    {
        
        printf("%c", s[i]);
    }


    printf("\n");
}