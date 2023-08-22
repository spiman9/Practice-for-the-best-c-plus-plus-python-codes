def maxfind(coords):
    x1,y1=coords[0]
    x2,y2=coords[1]
    sl=(y2-y1)/(x2-x1)
    c=[sl]
    for i in range(2,len(coords)):
        x,y=coords[i]
        #print(x,y)
        ct=(y-y1)//(x-x1)
        if ct not in c:
            c.append(ct)
    print(c)
    return(len(c)-1)

n=int(input())
coords=[]
for i in range(n):
    a=list(map(int,input().split()))
    coords.append(a)
res=maxfind(coords)
print(res)