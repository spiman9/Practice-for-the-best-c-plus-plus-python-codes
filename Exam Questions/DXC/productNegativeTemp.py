n = int(input())
l = list(map(int , input().split()))
ct = 0
for i in l:
    ct+= 1 if i<0 else 0

print(ct)

