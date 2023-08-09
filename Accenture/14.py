

def Calculate(n , m):
    sum = 0
    for i in range(n , m+1):
        sum+=i if i%3 == 0 and i%5 ==0 else 0
    return sum




n , m = map(int , input().split())
sum = Calculate(n , m)
print(sum)
