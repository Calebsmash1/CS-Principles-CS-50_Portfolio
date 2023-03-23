def main():

    # Asks how many spots are there
    v = input("How many spots are there?: ")
    v = int(v)

    # Asks how many strikers are trying out
    s = input("How manys strikers are trying out?: ")
    s = int(s)
    if s <= v:
        print("Recruit them all!")
        exit()
    striker_name = []
    for i in range(s):
        name = input("Striker name: ")
        striker_name.append(name)

    striker_score = []
    for i in range(s):
        shots = input(f"{striker_name[i]} shots?: ")
        shots = int(shots)
        target = input(f"{striker_name[i]} on target?: ")
        target = int(target)
        #if target > shots
            #print(f"Please provide acurate information)
        score = target / shots
        score = score * 100
        print(f"{score}%")
        
def score()
        striker_score.append(score)
        #target = input(f"{striker_name[i]} shots on target?: ")
    for i in range (s):
        print(f"{striker_name[i]}: ", end="")
        print(f"{striker_score[i]}")

    print(f"{striker_name}")
    print(f"{striker_score}")

main()