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
    striker_name = []
    for i in range(s):
        name = input("Striker name: ")
        striker_name.append(name)

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

    striker_dribble_rate = []
    for i in range(s):
        dribbles = input(f"{striker_name[i]} How many dribbles done?: ")
        dribbles = int(dribbles)
        successful = input(f"{striker_name[i]} How many were successful?: ")
        successful = int(successful)
        if successful > dribbles:
            print("Please provide accurate information.")
            exit()
        rate = successful / dribbles
        rate = rate * 100
        striker_dribble_rate.append(rate)

    striker_ovr = []
    for i in range(s):
        ovr = 0
        ovr = ((striker_dribble_rate[i] + striker_accuracy[i]) / 2)
        ovr = int(ovr)
        striker_ovr.append(ovr)

    print(f"{striker_dribble_rate}")
    print(f"{striker_name}")
    print(f"{striker_accuracy}")
    print(f"{striker_ovr}")


    spot = 0
    great = max(striker_ovr)

    for i in range(striker_ovr[i]):
        if striker_ovr[i] == great:
            spot = i
            break
    spot = int(spot)
    print(f"{spot}")

    print(f"Best Striker is {striker_name[spot]}")

main()