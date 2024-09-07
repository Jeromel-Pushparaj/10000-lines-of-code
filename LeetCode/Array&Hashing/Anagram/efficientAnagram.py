def isAnagram(s,t):
    if(len(s) != len(t)):
        return False
    freq = [0] * 26
    for i in range(len(s)):
        freq[ord(s[i]) - ord('a')] += 1
        freq[ord(t[i]) - ord('a')] -= 1
        
    for j in range(len(freq)):
        if(freq[j] != 0):
            return False
        
    return True
        
s = "ac"
t = "bb"
result = isAnagram(s,t)
print(result)