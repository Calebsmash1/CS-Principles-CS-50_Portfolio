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
        striker_score.append(score)
        print(f"{score}%")

        #striker_score.append(score)
        #target = input(f"{striker_name[i]} shots on target?: ")
    #for i in range (s):
     #   print(f"{striker_name[i]}: ", end="")
      #  print(f"{striker_score[i]}")

    print(f"{striker_name}")
    print(f"{striker_score}")

main()