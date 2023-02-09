from cs50 import get_int

#Get the height from the user
n = get_int("Height: ")

#Print block vertically
for i in range(n):
    print("#")

#Print block
for i in range(n - 1):
    print(" ")
    print("#" end=="")
print("")