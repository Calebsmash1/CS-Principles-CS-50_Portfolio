// Open a txt file and print to the screen

#include <stdio.h>

int main(void)
{
    // Open .txt file
    FILE *txt = fopen("Chapter3.Quiz.docx", "r");

    // Check if opened successfully
    if (!txt)
    {
        return 1;
    }

    // Read the .txt file
    char ch = fgetc(txt);

    // Print every character
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(txt); // Moves buffer to next character
    }

    printf("\n");

    // Close file
    fclose(txt);
}