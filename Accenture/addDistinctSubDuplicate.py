

def function(a , b , c , d):
    l = [a , b , c , d]
    d = {}

    for i in l:
        if i not in d:
            d[i] = 1
        else:
            d[i] += 1

    sum = 0
    sub = 0
    for key in d.keys():
        if d[key] != 1:
            sub += key
        else:
            sum += key
    return sum - sub

a = int(input())
b = int(input())
c = int(input())
d = int(input())
print(function(a , b , c , d))