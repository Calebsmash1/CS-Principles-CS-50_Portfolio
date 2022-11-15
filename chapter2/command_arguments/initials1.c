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
    if (argc == 3)
    {
        printf("hello, %c.%c.\n", toupper(argv[1][0]), toupper(argv[2][0]));
    }
    else if (argc == 2)
    {
        printf("hello, %c.\n", toupper(argv[1][0]));
    }
    else
    {
        printf("hello, world\n");
    }
}