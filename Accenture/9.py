s = input()

count = s.count('-')

l = s.split('-')

ans = '-' * count

for c in l:
    ans = ans + c

print(ans)