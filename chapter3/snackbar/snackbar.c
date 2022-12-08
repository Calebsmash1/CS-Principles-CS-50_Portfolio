// Find your total cost at a snackbar

/**
 * Beach Burger Shack has the following 10 items on their menu
 * Burger: $9.5
 * Vegan Burger: $11
 * Hot Dog: $5
 * Cheese Dog: $7
 * Fries: $5
 * Cheese Fries: $6
 * Cold Pressed Juice: $7
 * Cold Brew: $3
 * Water: $2
 * Soda: $2
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

// Number of menu items
menu item[10];

    menu[0].item = ;
    menu[0].price = ;

    menu[1].item = ;
    menu[1].price = ;

    menu[2].item = ;
    menu[2].price = ;

    menu[3].item = ;
    menu[3].price = ;

    menu[4].item = ;
    menu[4].price = ;

    menu[5].item = ;
    menu[5].price = ;

    menu[6].item = ;
    menu[6].price = ;

    menu[7].item = ;
    menu[7].price = ;

    menu[8].item = ;
    menu[8].price = ;

    menu[9].item = ;
    menu[9].price = 2.00;

// Adjust this value (10) to number of items input below
#define NUM_ITEMS 10

// Menu itmes have item name and price
typedef struct
{
    string item;
    float price;
}
menu_item;

// Array of menu items
menu_item menu[NUM_ITEMS];

// Add items to menu
void add_items(void);

// Calculate total cost
float get_cost(string item);

int main(void)
{
    add_items();

    printf("\nWelcome to Beach Burger Shack!\n");
    printf("Choose from the following menu to order. Press enter when done.\n\n");

    for (int i = 0; i < NUM_ITEMS; i++)
    {
        printf("%s: $%.2f\n", menu[i].item, menu[i].price);
    }
    printf("\n");

    float total = 0;
    while (true)
    {
        string item = get_string("Enter a food item: ");
        if (strlen(item) == 0)
        {
            printf("\n");
            break;
        }

        total += get_cost(item);
    }

    printf("Your total cost is: $%.2f\n", total);
}

// Add at least the first for items to the menu array
void add_items(void)
{
    // TODO
    return;
}

// Search through the menu array to find an item's cost
float get_cost(string item)
{
    // TODO Linear search for the item
        // TODO If found, return the price

    // TODO Item was not found
    return 0.0;
}
