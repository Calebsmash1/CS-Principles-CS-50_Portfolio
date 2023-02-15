# Find the number of names
name = input("Full name: ")

# Start a counter
names = 1

# Look for spaces
for c in name:
    if c == " ":
        names += 1
print(f"You have {names} names.")