// Print each character of a string vertically

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string from the user
    string s = get_string("Input:  ");

    // Loop through each character (strlen() returns the string length)
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        // Print each ascii value with a new line to make it vertical
        printf("%c", toupper(s[i]));

    }

    printf("\n");
}