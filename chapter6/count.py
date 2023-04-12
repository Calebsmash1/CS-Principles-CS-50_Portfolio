import csv

# Curly brace makes it a dictionary
titles = {}

with open ("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    for now in reader:
        title = row["title"].strip().upper()

        # If found a new title
        if not title in titles:
            # Set count to 0
            title[title] = 0

        # Add 1 to the count
        titles[title] += 1

for title in sorted(titles):
    print(title, titles[title])