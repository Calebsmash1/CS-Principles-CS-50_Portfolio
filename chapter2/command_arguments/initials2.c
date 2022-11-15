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
        // Loop through each command line argument
        for (int i = 1; i < argc; i++)
        {
        printf("%c", toupper(argv[i][0]));
        }
    }
    else if (argc == 2)
    {
        printf("hello world, %c.\n", toupper(argv[1][0]));
    }
    else
    {
        printf("hello, world\n");
    }
}