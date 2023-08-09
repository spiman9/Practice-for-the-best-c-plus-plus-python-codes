s = input()

d = {}
for i in s:
    num = int(i)
    if num not in d.keys():
        d[num] = 1
    else:
        d[num]+=1


flag = True
for i in range(len(s)):
    num = i
    freq = int(s[i])
    if num not in d.keys():
        if freq == 0:
            continue
        else:
            flag = False
    if num in d.keys():
        if freq != d[num]:
            flag = False
        else:
            continue

if not flag:
    print(0)
else:
    print(len(d))
