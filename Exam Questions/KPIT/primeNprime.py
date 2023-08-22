def Prime(n):
    if n == 1:
        return False
    if n==2 or n==3:
        return True
    for i in range(2 , n//2 + 1):
        if n%i == 0:
            return False
    return True


n = int(input())

l = list(map(int , input().split()))

prime = []
nprime = []
for i in l:
    prime.append(i) if Prime(i) else nprime.append(i)


prime.sort()
nprime.sort()
ans = 0
if abs(len(prime) - len(nprime)) <= 1:
    print(0)
elif len(prime) > len(nprime):
    sIndex =  len(nprime)+1
    for i in range(sIndex , len(prime)):
        ans += prime[i]
    print(ans)
else:
    sIndex =  len(prime)+1
    for i in range(sIndex , len(nprime)):
        ans += nprime[i]
    print(ans)
# print(prime)
# print(nprime)