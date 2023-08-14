from math import gcd

n , a = map(int  , input().split())

ans = 0
l = []
for i in range(a , n+1):
    for j in range(i , n+1):
        if gcd(i , j) == a:
            ans += 1
            l.append((i , j))

print(ans)
print(l)
