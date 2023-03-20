# This programs serves to aid in the tryout process for a
# soccer team's striker roster.
# (Works under assumption that no two players have equal stats)


# Asks how many spots are there
v = input("How many spots are there?: ")

# Asks how many strikers are trying out
s = input("How manys strikers are trying out?: ")

if s <= v:
    print("Recruit them all!")
    exit()
strikers = []
for i in range(s):
    name = input("Striker name: ")
    strikers.append(name)

print(f"Striker name: {strikers}")