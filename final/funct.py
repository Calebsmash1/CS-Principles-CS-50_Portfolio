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

    acc = accuracy_finder(s, striker_name)
    drr = dribble_finder(s, striker_name)
    pss = pass_finder(s, striker_name)
    cll = ovr_calculator(s, acc, drr, pss)


    print(f"{acc}")
    print(f"{drr}")
    print(f"{pss}")
    print(f"{cll}")
    print(f"{striker_name}")

def accuracy_finder(s, striker_name):

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

def dribble_finder(s, striker_name):
    # Asks for striker's dribbling success rate and saves in a list
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
    return striker_dribble_rate

def pass_finder(s, striker_name):

    # Asks for striker's passing success rate and saves in a list
    striker_pass_rate = []
    for i in range(s):
        passes = input(f"{striker_name[i]} How many passes made?: ")
        passes = int(passes)
        through = input(f"{striker_name[i]} How many were received?: ")
        through = int(through)
        if through > passes:
            print("Please provide accurate information.")
            exit()
        vision = through / passes
        vision = vision * 100
        striker_pass_rate.append(vision)
    return striker_pass_rate

def ovr_calculator(s, acc, drr, pss):

    # Calculates player's Overall Rating using their stat averages and saves in a list
    striker_ovr = []
    for i in range(s):
        ovr = 0
        ovr = ((acc[i] + drr[i] + pss[i]) / 3)
        ovr = int(ovr)
        striker_ovr.append(ovr)
    return striker_ovr


main()