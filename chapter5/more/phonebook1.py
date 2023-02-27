import csv

# Open phonebook.csv in "a"ppend mode
file = open("phonebook.csv", "a")

# Get numbers from the user
name = input("Name: ")
number = input(Number: ")

# Write the name and number to the file
writer = csv.writer(file)
writer.writrow([name, number])

# Close the open file
file.close