n = int(input())
l = list(map(int , input().split()))

even = []
odd = []

for i in range(0 , n):
    if i%2 ==0:
        even.append(l[i])
    else:
        odd.append(l[i])

even.sort()
odd.sort()

for i in even:
    print(i , end=" ")
print()
for i in odd:
    print(i , end=" ")
