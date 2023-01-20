// Store and print an integers address

#include <stdio.h>

int main(void)
{
    int n = 50;

    printf("%p\n", *&n);
}