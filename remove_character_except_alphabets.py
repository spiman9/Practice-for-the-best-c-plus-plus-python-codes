s = input("Enter the string : ")
l = []

for i in s:
    if i.isalpha():
        l.append(i)

ans = ""
for i in l:
    ans += i
print("String : " , ans)