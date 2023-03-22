
# def main():
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
    score = target / shots
    score = score * 100
    print(f"{score}%")

    striker_score.append(score)
    #target = input(f"{striker_name[i]} shots on target?: ")
for i in range (s):
    print(f"{striker_name[i]}: ", end="")
    print(f"{striker_score[i]}")

for i in range (s):
    for j in range (s):
        if {striker_score[i]} < {striker_score[i + 1]}
            

# for i in range(s):
    #print(f"{striker_name[i]}")
