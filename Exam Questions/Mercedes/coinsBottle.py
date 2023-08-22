n = int(input())

num = n

bottle = 0



while n != 4:
    if(n%2 == 0):
        n = int(n / 2)
    else:
        n = 3 * n + 1
    bottle += 1
    if(bottle >= num):
        break


if n==4:
    print(bottle - 1)
else:
    print(bottle)
        


