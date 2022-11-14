// Computes the approximate grade level needed to comprehend some text

#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Function prototype
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

// Program start
int main(void)
{
    // Ask the user for some text
    string text = get_string("Text: ");

    // Call a function to count the number of letters
    int letters = count_letters(text);

    // Call a function to count the number of words
    int words = count_words(text);

    // Call a function to count the number of sentences
    int sentences = count_sentences(text);

    // Calculate average letters
    float averagel = (float)letters / words * 100;
    float averages = (float)sentences / words * 100;

    // Rounding
    float averagel = 

    // TODO: Calculate the Coleman-Liau index
    int level = (0.0588 * averagel - 0.296 * averages - 15.8);

    // TODO: Print the reading level
    printf("Letters: %i\n", letters);
    printf("Words: %i\n", words);
    printf("Sentences: %i\n", sentences);
    printf("Average: %f : %f\n", averagel, averages);
    printf("Grade %i\n", level);
}

/**
 * A function that returns the number of letters
*/
int count_letters(string text)
{
    // Initialize a counter
    int counter = 0;

    // Loop through the text
    while(text[counter] != '\0')
    {
        // If a letter (isalpha)
        for (int i = 0; i < strlen(text); i++)
        {
            if(isalpha(text[i]))
            {
            // Add 1 to the counter
            counter++;
            }
        }
    }
    // Return the value of the counter/the number of letters
    counter = counter / 2;
    return counter;
}
/**
 * A function that returns the number of words
*/
int count_words(string text)
{
    // Initializes counter
    int counter = 1;

    // Loops through text
    for (int i = 1; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            counter++;
        }
    }
    return counter;
}

/**
 * A function that returns the number of sentences
*/
int count_sentences(string text)
{
    // Initializes counter
    int counter = 0;

    // Loops through text
    for (int i = 1; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            counter++;
        }
    }
    return counter;
}