s = input()

for i in range(len(s)):
    char = s[i]
    flag = True
    for  j in range(len(s)):
        if j == i:
            continue
        else:
            if char == s[j]:
                flag = False
                break
    if flag:
        print(char)