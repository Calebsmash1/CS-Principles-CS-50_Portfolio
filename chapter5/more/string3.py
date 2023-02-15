# Find the number of names
name = input("Full name: ")

# Start a counter
names = 1

special_char = [" ", "-"]

# Look for spaces
for c in name:
    if c in special_char:
        names += 1
print(f"You have {names} names.")