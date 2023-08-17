n = input()

while n != n[::-1]:
    a = int(n)
    b = int(n[::-1])
    n = str(a+b)
print(n)