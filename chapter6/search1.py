import csv
import re

title = input("Title: ").strip().upper()

counter = 0

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        if re.search(title, row["title"].strip().upper()):
            #print(row)
            print(row["Timestamp"] + ", " + row["title"])
            counter += 1

print(f"There are {counter} favorite shows that contain the word {title}.")