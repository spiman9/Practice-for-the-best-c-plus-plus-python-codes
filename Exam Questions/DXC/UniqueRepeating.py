n = input()
l=[]
l[:] = n
d = dict()

for i in l:
    if i not in d.keys():
        d[i] = 1
    else:
        d[i]+=1

ans=0
for value in d.values():
    if value > 1:
        ans+=1
print(ans)
