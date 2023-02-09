from cs50 import get_int

#Get the height from the user
n = get_int("Height: ")

#Print block horizontally
for i in range(n):
    print("#", end="")
print()

#Print block vertically
for i in range(n):
    print("#")

main()