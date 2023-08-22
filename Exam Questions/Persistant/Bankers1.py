n = int(input())
avail = list(map(int , input().split()))
x , y = map(int , input().split())
alloc = []

for i in range(x):
    l = list(map(int , input().split()))
    alloc.append(l)

x , y = map(int , input().split())
max = []
for i in range(x):
    l = list(map(int , input().split()))
    max.append(l)

# print("Alloc : " , alloc)
# print("max : " , max)

req = []

for i in range(x):
    temp = list()
    for j in range(y):
        temp.append(max[i][j] - alloc[i][j])
    req.append(temp)


# print("Required : " , req)

ct = 0
flag = [False for i in range(x)]
# print(flag)
ans = []
i = 0

# print("Avail : " , avail)
# print("Allocate : " , alloc)
# print("max : " , max)
# print("need : " , req)

while ct < x:
    if flag[i] == True:
        i+=1
        if i == x:
            i = 0
        continue
    temp = req[i]
    c = 0
    for j in range(y):
        if req[i][j] <= avail[j]:
            c+=1

    if c == y:
        flag[i] = True
        ans.append(i)
        for j in range(y):
            avail[j] += alloc[i][j]
        i = i + 1
        if i == x:
            i = 0
        ct+=1
    else:
        i+=1
        if i == x:
            i = 0



print(ans)