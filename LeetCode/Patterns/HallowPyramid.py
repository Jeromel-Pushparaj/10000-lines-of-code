n = int(input("Enter n: "))

for i in range(0, n+1):
    for j in range(i,n+1):
        print(" ", end="")
    for k in range(0, i):
        if((k==0 or i==n) or i == k+1):
            # Debug code : print(f"({i, k})")
            print("* ", end="")
        else: 
            print(" ", end=" ")
    print("")