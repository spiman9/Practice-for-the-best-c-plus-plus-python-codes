l1 = []
l2 = []
n = int(input())

for i in range(n):
    x = int(input())
    l1.append(x)

for i in range(n):
    x = int(input())
    l2.append(x)


score = -1
for op in range(n+1):
    val = l1[n-1]
    l1.pop(n-1)
    l1.insert(0 , val)
    ct = 0
    for i in range(n):
        if l1[i] == l2[i]:
            ct+=1
    score = max(ct , score)
    # print(l1 , l2)

print(score)