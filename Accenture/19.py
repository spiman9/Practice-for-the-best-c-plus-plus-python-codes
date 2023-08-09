def maxinarray(l , n):
    index = 0
    m = l[0]
    for i in range(1, n):
        if l[i] >= m:
            m = l[i]
            index = i
    print(m)
    print(index)

n = int(input())
l = list(map(int , input().split()))
maxinarray(l , n)