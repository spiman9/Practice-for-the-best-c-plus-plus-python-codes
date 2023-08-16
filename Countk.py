k = input()
n = int(input())

l = list(map(str , input().split()))
ans = []
for i in l:
    ans.append(i.count(k))
# print(ans)

a = ans[0]
index = 0

for i in range(1 , len(l)):
    if(a < ans[i]):
        a = ans[i]
        index = i
print(l[index])
