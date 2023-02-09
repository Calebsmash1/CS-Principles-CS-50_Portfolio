from cs50 import get_string

s= get_string("Do you agree? ")

if s in ["yes", "Yes", "Y", "y"]:
    print("yes")
elif s in ["no", "No", "N", "n"]:
    print("no")