n = int(input())
s = input()
v = ['a' , 'e' , 'i' , 'o' , 'u' , 'A' , 'E' , 'I' , 'O' , 'U']
ans = ""
for i in s:
    ans+= i if i not in v else ""
print(ans)

