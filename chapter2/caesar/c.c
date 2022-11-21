// Cipher a message by how many characters the user wants

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // TODO: Program was run with just one command-line argument DO LAST

    // TODO: Every character in argv[1] is a digit DO VERY LAST

    // TODO: Convert argv[1] from a `string` to an `int`
    //int key =

    // TODO: Prompt user for plaintext
        // Check to see if the requirements have been met
    // Essentially ensure "./exit <message>"
    if (argc <= 1)
    {
        // Print a usage error
        printf("Usage: ./caesar <message>\n");

        // Return an int for main, program stops running
        return 1;
    }

    // TODO: For each character in the plaintext:
    if (argc == 1)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            //if (int isalpha(char c));
            //{
            // Scramble
            printf("%s", argv[1] + 5);
            //}
        }
    }
    argc++;

    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[2]); i++)
        {
            //if (int isalpha(char c));
            //{
            // Scramble
            printf("%s", argv[2] + 5);
            //}
        }
    }
    argc++;

        if (argc == 3)
    {
        for (int i = 0; i < strlen(argv[3]); i++)
        {
            //if (int isalpha(char c));
            //{
            // Scramble
            printf("%s", argv[3] + 5);
            //}
        }
    }
    argc++;

        // TODO: Rotate the character if it's a letter

        // TODO: Print ciphered message
        printf("nice\n");


    return 0;
}