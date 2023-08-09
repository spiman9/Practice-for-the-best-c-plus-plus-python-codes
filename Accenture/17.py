n , m = map(int , input().split())

for i in range(n+1 , m):
    s = str(i)
    if s == s[::-1]:
        print(s , end=" ")
