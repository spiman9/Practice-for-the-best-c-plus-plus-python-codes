n = int(input())
l = []

k = int(input())

for i in range(n):
    x = int(input())
    l.append(x)

sum = []
mod = pow(10 , 9) + 7
for i in range(0 , n):
    s= 0 
    for j in  range(i , n):
        s = (s%mod + l[j] % mod) % mod
        sum.append(s)

print(l)
print(sum)
sum.sort()
sum = sum[::-1]

print(sum[k-1])

