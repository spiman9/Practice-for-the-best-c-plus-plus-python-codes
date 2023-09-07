s = input()

i = 0
cur = ""
ans = ""
times = 0
while i < len(s):
    if cur != s[i]:
        if cur != "":
            if times == 1:
                ans += cur
            else:
                ans += cur + str(times)
            times = 1
            cur = s[i]
        else:
            cur = s[i]
            times = 1
    else:
        times+=1
    i+=1
    if i == len(s):
        if times == 1:
            ans += cur
        else:
            ans += cur + str(times)
print(ans)