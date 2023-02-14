from cs50 import get_int


def main():
    # Asks how many cents the customer needs
    c = get_cents()

    # Checks how many quarters are owed
    c = c - quarters * 25;


def get_cents():
    while True:
        c = get_int("Cents? ")
        if c > 0:
            break
    return c