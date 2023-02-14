from cs50 import get_float


def main():
    # Asks how many cents the customer needs
    c = get_cents()

    # Checks how many quarters are owed
    c = c - quarters * 25

    # Check how many dimes are owed
    c = c - dimes * 10

    # Check how many nickels are owed
    c = c - nickels * 5

    # Check how many pennies are owed
    c = c - pennies

    # Adds them all
    coins = quarters + dimes + nicke;s + pennies

    # Gives back money
    print(f)


def get_cents():
    while True:
        c = get_float("Cents? ")
        if c > 0:
            break
    return c