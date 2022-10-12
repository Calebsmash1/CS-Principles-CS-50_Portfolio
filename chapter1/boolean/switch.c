/**
 * Get an answer from the user
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a character answer
    char answer = get_char("Answer (Y/N): ");

    // Confirming user's input
    {
        case 'Y':
        case 'y':
            printf("You said Yes\n"):

        case 'N':
        case 'n':
            printf("You said no\n");

        default:
            printf("Error - please provide an appropriate response\n");
    }


}