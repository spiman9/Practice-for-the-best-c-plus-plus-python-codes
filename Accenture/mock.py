s = input()

l = []

i = 0
temp = ""
while i< len(s):
    ch = s[i]
    if ch >= 'a' and ch<='z':
        temp+=ch
    else:
        l.append(temp)
        temp = s[i]
    i+=1
l.append(temp)
l2 = []

print(l)
for s in l:
    temp = str()
    for ch in s:
        if ch.isupper():
            ch = ch.lower()
            temp+=ch
        else:
            ch = ch.upper()
            temp+=ch
    l2.append(temp)
for s in l2:
    print(s)