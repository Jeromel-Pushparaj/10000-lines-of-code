def isAnagram(s,t):
    if(len(s) != len(t)):
        return False
    sumOfs = 0
    for i in range(len(s)):
        sumOfs += ord(s[i]) - ord('a')
        sumOfs -= ord(t[i]) - ord('a')
    if(sumOfs == 0):
        return True
    else:
        return False
        
        

s = "ac"
t = "bb"
result = isAnagram(s,t)
print(result)

# this is not a right solution
# I getting a value collision