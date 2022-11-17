// Cipher a message with 5 characters

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string message = "Voila!";

    // Cipher the message
    printf("The cipher message is: ");

    // For each character in the message
    for (int i = 0; i < strlen(message); i++)
    {
        // Go back 5 ASCII characters
        printf("%c", message[i] + 5);
    }
    // New line
    printf("\n");

    // Return success
    return 0;
}