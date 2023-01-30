// Open a txt file and print to the screen

#include <stdio.h>

int main(void)
{
    // Open .txt file
    FILE *txt = fopen("cs50.txt", "r");

    // Check if opened successfully
    if (!txt)
    {
        return 1;
    }

    // For every character in the file
    for (char ch = fgetc(txt); ch != EOF; ch = fgetc(txt))
    {
        // Print the character
        printf("%c", ch);
    }


    // Close file
    fclose(txt);
}