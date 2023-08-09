def FindAutoCount(s):
    d= {}
    for i in s:
        if int(i) not in d.keys():
            d[int(i)] = 1
        else:
            d[int(i)] += 1
    
    flag = True
    # print(d)

    for i in range(len(s)):
        num = i
        if num not in d.keys():
            if s[i] == '0':
                pass
            else:
                flag = False
        else:
            freq = d[i]
            if freq == int(s[i]):
                pass
            else:
                flag = False
    if not flag:
        return 0
    return len(d)



n= input()
ans = FindAutoCount(n)
print(ans)