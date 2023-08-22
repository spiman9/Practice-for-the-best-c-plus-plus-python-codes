def isPrime(n):
    if n == 1:
        return False
    if n == 2 or n == 3:
        return True
    for i in range(2 , n//2):
        if n%i == 0:
            return False
    return True

l = int(input())
r = int(input())

lar = 0
i = r
while i>=l:
    if isPrime(i):
        lar = i
        break
    i-=1

small = 0
i = l
while i<=r:
    if isPrime(i):
        small = i
        break
    i+=1


print(small + lar)

