// Get a string from the user using scanf

#include <stdio.h>

int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("The string is %s\n", s);
}