
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

for q in range(s):
    shots = input("{striker_name[0]} shots?: ")
    print(f"Striker name: {striker_name[0]}")
