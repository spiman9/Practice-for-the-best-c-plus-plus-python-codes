

def maxExponent(a , b):
    mx = -1
    ans = -1
    for i in  range(a , b+1):
        t = i
        ct = 0
        while(i>0):
            ct+=1
            i//=2
        if ct > mx:
            mx = ct
            ans = t
    return ans





a = int(input())
b = int(input())
print(maxExponent(a , b))