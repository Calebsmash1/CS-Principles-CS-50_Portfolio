// Computes the approximate grade level needed to comprehend some text

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function prototype
int count_letters(string s);

int main(void)
{
    // Ask the user for some text
    string s = get_string("Text: ");

    // TODO: Call a function to count the number of letters

    // TODO: Call a function to count the number of words

    // TODO: Call a function to count the number of sentences

    // TODO: Calculate the Coleman-Liau index

    // TODO: Print the reading level
    printf("Letters: %i", counter);
    printf("\n");

}

/**
 * A function that returns the number of letters
*/
int count_letters(string s)
{
    // Initialize a counter
    int counter = 0;

    // Loop through the text
    while(s[counter] != '\0')
    {
        // If a letter (isalpha)
        for (int i = 1; i < strlen(s); i++)
        {

            // Add 1 to the counter
            counter++;
        }
    }
    // Returm the value of the counter/the number of letters
    return counter;

/**
 * A function that returns the number of words
*/

/**
 * A function that returns the number of sentences
*/
}