n = int(input())

r , c = map(int , input().split())

l = [i for i in range(1 , n + 1)]

for i in range(r):
    a , b = map(int , input().split())
    first = l.index(a)
    second = l.index(b)
    temp = [first , second]
    temp.sort()
    first , second = temp
    l =l[:first] +  l[first:second+1][::-1] + l[second+1 :]

    # print(l)


k = int(input())
print(l[k-1])