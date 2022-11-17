// Cipher a message with 5 characters with "wrapping"

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string message = "Voila!";

    // De-cipher the message
    printf("The cipher message is: ");

    // For each character in the message
    for (int i = 0; i < strlen(message); i++)
    {
        // Go back 5 ASCII characters with "wrapping" (Only works for upper case)
        printf("%c", (message[i] + 5 - 'a') % 26 + 'a');
    }
    // New line
    printf("\n");

    // Return success
    return 0;
}