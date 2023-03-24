# Program that helps find the best striker among a group
# to aid in the tryout process, helping user recruit the best player
# (Assumes no 2 players are of equal skill)

def main():
    # Asks how many strikers are trying out
    s = input("How manys strikers are trying out?: ")
    s = int(s)
    if s == 1:
        print("They made the cut!")
        exit()
    if s <= 0:
        print("Please provide at least one player.")
        exit()
    striker_name = []
    for i in range(s):
        name = input("Striker name: ")
        striker_name.append(name)

    striker_score = shot_finder()
    striker_rate = rate_finder()

    print(f"{striker_name}")
    print(f"{striker_score}")

def shot_finder(s):
    striker_score = []
    for i in range(s):
        shots = input(f"{striker_name[i]} shots?: ")
        shots = int(shots)
        target = input(f"{striker_name[i]} on target?: ")
        target = int(target)
        score = target / shots
        score = score * 100
        striker_score.append(score)
        return {striker_score}

def rate_finder(s):
    for i in range(s):
        dribbles = input(f"{striker_name[i]} dribbles?: ")
        dribbles = int(dribbles)
        success = input(f"{striker_name[i]} succesful?: ")
        success = int(success)
        rate = success / dribbles
        rate = rate * 100
        striker_rate.append(rate)
        return {striker_rate}

main()