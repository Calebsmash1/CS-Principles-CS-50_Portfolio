from cs50 import get_int

# Get the height from the user
h = get_int("Height: ")

# Print block vertically
for i in range(h):
    print("#")

# Print block
for i in range(h - 1):