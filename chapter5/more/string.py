from cs50 import get_string

before = get_string("Before : ")
print("After: ", end="")
# Print each character of before 1 at a time
for c in before:
    print(c.upper(), end="")
print()