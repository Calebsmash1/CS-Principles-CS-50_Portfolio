from cs50 import get_string

s= get_string("Do you agree? ")

# Converts to lower case
s = s.lower()
if s in ["yes", "y"]:
    print("yes")
elif s in ["no", "n"]:
    print("no")