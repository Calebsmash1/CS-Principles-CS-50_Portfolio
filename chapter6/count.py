import csv

# Curly brace makes it a dictionary
titles = {}

with open ("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    for now in reader:
        title = row["title"].strip().upper()
        titles[title} += 1

for title in sorted(titles):
    print(title)