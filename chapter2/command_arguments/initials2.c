/**
 * Say hello to a user (using their initials) if they provide their
 * first and last name in the command line
 *
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        // Start printing hello
        printf("hello, ");

        // Loop through each command line argument
        for (int i = 1; i < argc; i++)
        {
        printf("%c.", toupper(argv[i][0]));
        }
    }

    // New line
    
}