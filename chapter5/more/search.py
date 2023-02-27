fom sys import exit

numbers = [4, 6, 8, 10, 12, 14]

# Search for the number 6
if 6 in numbers:
    print("Found")
    exit(0)

print("Not found")
exit(1)