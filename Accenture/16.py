n = int(input())

sum = 0

for i in range(1 , 11):
    print(i * n , end=" ")
    sum = sum + i*n
print()
print(sum)