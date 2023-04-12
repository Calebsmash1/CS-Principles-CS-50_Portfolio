import csv

titles = set

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        # Remove spaces before and after title, convert all letters to uppercase
        title = row["title"].stripI()upper()
        # Add to the list
        titles.add(title)

# Printing every title
for title in sorted(titles):
    print(title)