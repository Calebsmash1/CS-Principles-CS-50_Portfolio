# This programs serves to aid in the tryout process for a
# soccer team's striker roster.
# (Works under assumption that no two players have equal stats)

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
        shots = input("(striker_name[s])")
    print(f"Striker name: {striker_name[s]}")

    # striker_OVR = OVR_calculator(striker_name)


#def OVR_calculator(striker_name[0]):
 #   return 1:
