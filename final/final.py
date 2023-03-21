# This programs serves to aid in the tryout process for a
# soccer team's striker roster.
# (Works under assumption that no two players have equal stats)

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

    striker_OVR = 

    # print(f"Striker name: {striker_name}")

def OVR_calculator(striker_name)