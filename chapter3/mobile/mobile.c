#include <cs50.h>
#include <stdio.h>

// TODO: define the user_info struct below
typedefstruct
{
    string carrier;
    string name;
    long number
    float incoming_mins;
    float outgoing_mins;
    float incoming_mins;
    float outgoing_mins;
}
user_info;


int main (void)
{
    // Test use of this struct
    user_info test;
    test.carrier = "AT&T";
    test.name = "Brandon Price";
    test.number = 4134589582;
    test.incoming_mins = 134.2;
    test.outgoing_mins = 256.1;
    test.incoming_txts = 4050;
    test.outgoing_txts = 2539;

    // Print test info
    printf("User info is: \n");
    printf("carrier: %s\n", test.carrier);
    printf("name: %s\n", test.name);
    printf("number: %li\n", test.number);
    printf("incoming minutes: %.2f\n", test.incoming_mins);
    printf("outgoing minutes: %.2f\n", test.outgoing_mins);
    printf("incoming text messages: %i\n", test.incoming_txts);
    printf("outgoing text messages: %i\n", test.outgoing_txts);

    return 0;
}