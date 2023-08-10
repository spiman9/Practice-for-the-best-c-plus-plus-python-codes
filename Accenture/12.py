def operation(c ,  a , b):
    res = 0
    if c == 1:
        res = a+b
    elif c == 2:
        res = a-b
    elif res == 3:
        res = a*b
    elif res == 4 :
        res = a//b
    return res


c = int(input())
a = int(input())
b = int(input())
print(operation(c , a , b))
