// Ciphers to selected amount

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        // Print a usage error
        printf("Usage: ./caesar <key>\n");

        // Return an int for main, program stops running
        return 1;
    }

    // Make sure program only accepts numbers


    // Convert argv[1] from a `string` to an `int`
    int key = atoi(argv[1]);

    // Prompt user for plaintext
    string message = get_string("plaintext: ");

    // Begins the printing process for the ciphered message
    printf("ciphertext: ");

    // For each character in the plaintext:
    for (int i = 0; i < strlen(message); i++)
    {
        // Rotate the character if it's a letter
        if (isalpha(message[i]))
        {
            // Rotates characters differently depending if they
            // are upper case, or lowe case
            if (isupper(message[i]))
            {
                printf("%c", (message[i] + key - 'A') % 26 + 'A');
            }
            else
            {
                printf("%c", (message[i] + key - 'a') % 26 + 'a');
            }
        }
        else
        {
            printf("%c", message[i]);
        }
    }

    // Prints new line
    printf("\n");

    // Returns 0 to end program
    return 0;

    // Return an int for main, program stops running
    return 1;
}