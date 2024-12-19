def bubble_sort(a):   
    n = len(a)
    for i in range(0,n):
        status = False 
        for j in range(0, n-i-1):
            if(a[j]>a[j+1]):
                a[j],a[j+1] = a[j+1], a[j]
                status = True
        if(status == False):
            break

def isAnagram(s, t):
    sa = [char for char in s]
    st = [char for char in t]
    bubble_sort(sa)
    bubble_sort(st)
    if(sa == st):
       return True
    return False


s = "cat"
t = "tac"
result = isAnagram(s,t)
print(result)

# it is not a efficient way because,
# sorting(s): O(n^2)
# sorting(t): O(m^2)

# comparing s&t O(min(n,m))