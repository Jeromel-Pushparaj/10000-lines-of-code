n = 5
arr = [111,222,333,444,555]
rever = []
value = 1
for i in range(n):
    ori = arr[i]
    num_str = str(ori)
    rev = num_str[::-1]
    rever.append(int(rev))
print(arr)
print(rever)
for j in range(n):
    print(arr[j]-rever[j])
    if(arr[j]-rever[j]==0):
        
        value = value*1
    else:
        value = value*0
print(value)