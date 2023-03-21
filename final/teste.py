
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
    
    striker_score.append(shots)
    #target = input(f"{striker_name[i]} shots on target?: ")
print(f"{striker_name[0]}: ", end="")
print(f"{striker_score[0]})
#for i in range(s):
    #print(f"{striker_name[i]}")
