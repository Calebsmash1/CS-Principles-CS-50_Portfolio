# Program serves as a tool to help the tryout process
# by taking in player names and stats and returning
# the best player.
# Assumes there are not players of equal skill

def main():
    # Asks how many strikers are trying out
    s = input("How manys strikers are trying out?: ")
    s = int(s)
    if s == 1:
        print("They are the best!")
        exit()
    if s <= 0:
        print("Then why use program?.")
        exit()

    # Asks for and saves striker names in a list
    striker_name = []
    for i in range(s):
        name = input("Striker name: ")
        striker_name.append(name)

    striker_new = accuracy_finder(striker_accuracy)

    # Calculates player's Overall Rating using their stat averages and saves in a list
    striker_ovr = []
    for i in range(s):
        ovr = 0
        ovr = ((striker_new[i] + 2))
        ovr = int(ovr)
        striker_ovr.append(ovr)

    print(f"{striker_name}")
    print(f"{striker_new}")
    print(f"{striker_ovr}")


    # Compares player Overalls and finds best player
    spot = 0
    great = max(striker_ovr)

    for i in range(striker_ovr[i]):
        if striker_ovr[i] == great:
            spot = i
            break
    spot = int(spot)

    # Prints who the best player is
    print(f"Best Striker is {striker_name[spot]}")

def accuracy_finder(s, striker_accuracy):

    # Asks for striker's shot accuracy and saves in a list
    striker_accuracy = []
    for i in range(s):
        shots = input(f"{striker_name[i]} How many shots taken?: ")
        shots = int(shots)
        target = input(f"{striker_name[i]} How many shots on target?: ")
        target = int(target)
        if target > shots:
            print("Please provide accurate information.")
            exit()
        accuracy = target / shots
        accuracy = accuracy * 100
        striker_accuracy.append(accuracy)
    return striker_accuracy


#def dribble_success_rate_finder():
#def ovr_calculator():


main()