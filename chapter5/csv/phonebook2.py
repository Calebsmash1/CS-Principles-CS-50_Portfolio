import csv
from cs50 import get_int

n = get_int("How many people?: ")

for i in range(n):
    # Get numbers from the user
    name = input("Name: ")
    number = input("Number: ")

    with open("phonebook.csv", "a") as file:
        writer = csv.writer(file)
        writer.writerow((name, number))