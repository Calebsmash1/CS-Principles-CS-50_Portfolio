from sys import argv

if len(argv) >= 2:
    print(f"Hello, ", end="")
    for arg in argv[1:]:
        print(f"{arg} ", end="")
    print()
else:
    print("Hello, world")