n1 = int(input())
n2 = int(input())

if n1 < n2:
    print("Not possible")
else:
    ans = 0
    n1 = str(n1)[::-1]
    n2 = str(n2)[::-1]

    for i in range(0 , min(len(n1) , len(n2))):
        if n1[i] != n2[i]:
            ans+=1
    print(ans)

    