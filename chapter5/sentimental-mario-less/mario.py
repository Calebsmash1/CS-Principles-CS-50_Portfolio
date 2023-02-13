from cs50 import get_int


def main():
    # Get the height from the user (Calls function)
    n = get_height()

    # For each row
    for i in range(n):
        # For each height
        for j in range(n):
            # Prints space
            if (j < n - i - 1):
                print(" ", end="")
            else:
                print("#", end="")
        print()


def get_height():
    while True:
        n = get_int("Height: ")
        if 0 < n < 9:
            break
    return n


main()