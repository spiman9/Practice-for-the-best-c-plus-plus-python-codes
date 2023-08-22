n=int(input())
avail=list(map(int,input().strip().split()))[:n]
x,y=map(int,input().strip().split())
has=[]
req=[]
needs=[]
for i in range(x):
    has.append(list(map(int,input().strip().split()))[:y])
x,y=map(int,input().strip().split())
for i in range(x):
    p=list(map(int,input().strip().split()))[:y]
    req.append(p)
    t=[]
    o=has[i]
    for j in range(y):
        t.append(p[j]-o[j])
    needs.append(t)
ans=[]
i=0
u=0
need=needs.copy()
while(len(need)>=0):
    t=need[i]
    #print(t,avail)
    c=0
    for j in range(n):
        if avail[j]>=t[j]:
            c+=1
    if c==n:
        a=needs.index(need[i])
        for j in range(n):
            avail[j]+=t[j]
        ans.append(a)
        need.remove(t)
        i=0
        u+=1
        if u==n:
            break
    else:
        i+=1
print(ans)