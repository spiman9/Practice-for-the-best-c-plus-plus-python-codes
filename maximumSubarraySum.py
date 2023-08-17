n = int(input())
l = list(map(int , input().split()))

sum = 0
mx = -1
for i in l:
    sum += i
    if sum > mx:
        mx = sum
    if sum < 0:
        sum = 0
print(mx)