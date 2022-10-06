#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt the user their name then saves it to a variable called name
    string name = get_string("Name: ");

    //Say hello to user using their name
    printf("hello, %s\n", name);
}