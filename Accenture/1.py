r = int(input())
unit = int(input())
n = int(input())
arr = list(map(int , input().split()))

total = r * unit
if len(arr) == 0:
    print(0)

i = 0
while total>0 and i < n:
    total -= arr[i]
    i+=1
if total > 0:
    print(0)
else:
    print(i)

