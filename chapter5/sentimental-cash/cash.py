from cs50 import get_float


def main():
    # Asks how many cents the customer needs
    cents = get_cents()

    # Checks how many quarters are owed
    quarters = calculate_quarters(cents)
    cents = cents - quarters * 25

    # Check how many dimes are owed
    dimes = calculate_dimes(cents)
    cents = cents - dimes * 10

    # Check how many nickels are owed
    nickels = calculate_nickels(cents)
    cents = cents - nickels * 5

    # Check how many pennies are owed
    pennies = calculate_pennies(cents)
    cents = cents - pennies

    # Adds them all
    coins = quarters + dimes + nickels + pennies

    # Gives back money
    print(f"{coins}")


def get_cents():
    while True:
        cents = get_float("Cents? ")
        if cents > 0:
            break
        cents = round(cents * 100, 0)
    return cents


def calculate_quarters(cents):
    # Divide by 25 (value of a quarter) for rounding
    return cents // 25


def calculate_dimes(cents):
    # Divide by 10 (value of a dime) for rounding
    return cents // 10


def calculate_nickels(cents):
    # Divide by 5 (value of a nickel) for rounding
    return cents // 5


def calculate_pennies(cents):
    # Returns the remainder (Total number of pennies)
    return cents / 1

main()