import csv
from cs50 import get_string, get_int

# Get number of names to add to phonebook
n = get_int("How many names would you like to add? ")
print()

# For each addition
for i in range(n):

    # Get numbers from user
    name = get_string("Name: ")
    number = get_string("Number: ")

    # Add number to phonebook.csv
    with open("phonebook.csv", "a") as file:
        writer = csv.writer(file)
        writer.writerow((name, number))

    # Print a new line
    print()