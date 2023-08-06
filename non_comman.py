l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))

ans = list()

for i in l1:
    if i not in l2:
        ans.append(i)

for i in l2:
    if i not in l1:
        ans.append(i)

print(ans)