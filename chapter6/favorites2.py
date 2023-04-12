import csv

titles = []

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        # If title is not in the list
        if not row["title"] in titles:
            # Add to the list
            titles.append(row["titles"])

# Printing every title in the list
    print(row["title"])