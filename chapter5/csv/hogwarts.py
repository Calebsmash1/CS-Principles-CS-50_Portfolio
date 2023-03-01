# Counts students in each house
import csv

# Open the csv
with open("hogwarts.csv", "r") as house_list:
    # Read the rows and save as a variable called reader
    reader = csv.reader(house_list)
    next(reader)
    for row in reader:
