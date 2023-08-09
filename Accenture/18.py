
from math import sqrt

a,b = map(int , input().split())
c,d = map(int , input().split())
e,f = map(int , input().split())

sum = 0
sum+= sqrt(pow(a-c , 2) + pow(b-d , 2))
sum+= sqrt(pow(a-e , 2) + pow(b-f , 2))
sum+= sqrt(pow(e-c , 2) + pow(f-d , 2))
print(sum)
