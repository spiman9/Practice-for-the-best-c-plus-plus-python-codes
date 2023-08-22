s = input()
temp = ""

for i in range(len(s)):
    if s[i].isupper():
        print(temp)
        temp = s[i].lower()
    else:
        temp += s[i].upper()
        
print(temp)
