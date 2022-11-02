// Count down from 9

#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Initialize an array to hold our counting values
    int countdown[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // Print out each element in the array
    for(int i = 0; i < 10; i++)
    {
        printf("%i, ", countdown[i]);
        sleep(1);
    }
    
    printf("\n");
}