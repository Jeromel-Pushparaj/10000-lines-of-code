n = int(input("enter n: "))

for i in range(0, n):
    for j in range(0, i):
        print(" ", end="")
    for k in range(i, n):
        print("* ", end="")
    print("")