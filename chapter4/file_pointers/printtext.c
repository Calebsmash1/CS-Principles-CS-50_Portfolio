// Open a txt file and print to the screen

#include <stdio.h>

int main(void)
{
    // Open .txt file

    // Check if opened successfully



        return 1;
    }

    // Read the .txt file
    char ch = fgetc(txt);

    // Print every character
    while (ch ! = EOF)
    {
        printf("%c", ch);
        ch = fgetc(txt);
    }

    printf("\n");

    // Close file
    fclose(txt);
}