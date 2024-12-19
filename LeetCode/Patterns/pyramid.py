n = int(input("Enter n: "))

for i in range(0, n+1):
    for j in range(i,n+1):
        print(" ", end="")
    for k in range(0, i):
        print("* ", end="")
    print("")
        