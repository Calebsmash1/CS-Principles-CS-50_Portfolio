// Ciphers to selected amount

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        // Print a usage error
        printf("Usage: ./caesar <message>\n");

        // Return an int for main, program stops running
        return 1;
    }

    // TODO: Make sure program was run with just one command-line argument (2nd to Last)

    // TODO: Make sure every character in argv[1] is a digit (Last)

    // TODO: Convert argv[1] from a `string` to an `int`

    int key = atoi (argv[1]);

    // TODO: Prompt user for plaintext
    string message = get_string(plaintext:);

    // TODO: For each character in the plaintext:
    for (int i = 0; i < strlen(message); i++)
    {
        // Go back 5 ASCII characters with "wrapping" (Only works for upper case)
        printf("%c", (message[i] + 5 - 'a') % 26 + 'a');
    }

        // TODO: Rotate the character if it's a letter

    // Prints out hidden message

    printf("\n");

    // Returns 0 to end program
    return 0;
}