
def main():
    # Asks how many strikers are trying out
    s = input("How manys strikers are trying out?: ")
    s = int(s)
    if s == 1:
        print("They are the best!")
        exit()
    if s <= 0:
        print("Please provide at least one player.")
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
        score = target / shots
        score = score * 100
        striker_accuracy.append(accuracy)
        print(f"{accuracy}")

    striker_dribble_rate = []
    for i in range(s):
        dribbles = input(f"{striker_name[i]} How many dribbles done?: ")
        dribbles = int(dribbles)
        successful = input(f"{striker_name[i]} How many were successful?: ")
        successful = int(suc)
        rate = successful / dribbles
        rate = rate * 100
        striker_rate.append(rate)
        print(f"{rate}")

    striker_ovr = []
        for i in range(s):
        ovr = input(f"{striker_ovr})

    print(f"{striker_rate}")
    print(f"{striker_name}")
    print(f"{striker_accuracy}")

main()