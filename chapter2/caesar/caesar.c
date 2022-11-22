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

    // Make sure every character in argv[1] is a digit

    // Convert argv[1] from a `string` to an `int`
    int key = atoi (argv[1]);

    //if (isdigit(key))
    //{
        // Prompt user for plaintext
        string message = get_string("plaintext: ");

        printf("ciphertext: ");

        // For each character in the plaintext:
        for (int i = 0; i < strlen(message); i++)
        {
            // Rotate the character if it's a letter
            if (isalpha(message[i]))
            {
                // Prints ciphered message letter by letter
                printf("%c", (message[i] + key - 'a') % 26 + 'a');
            }
        }

        // Prints new line
        printf("\n");

        // Returns 0 to end program
        return 0;
    //}
    //else
    //{
        // Print a usage error
       // printf("Usage2: ./caesar <key>\n");

        // Return an int for main, program stops running
        return 1;
    //}
}