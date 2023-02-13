from cs50 import get_int
def main():

    # Get the height from the user
    n = get_height()

    # Print square
    for i in range(n):
        for j in range(n - 1):
            print("#", end="")
        print()



def get_height():
    while True:
        n = get_int("Height: ")
        if n > 0:
            break
    return n

main()