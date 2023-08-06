s = input("Enter the binary string : ")

base = 1
ans = 0
for i in s[::-1]:
    ans = ans + base * int(i)
    base = base * 2
print("decimal number is : " , ans)