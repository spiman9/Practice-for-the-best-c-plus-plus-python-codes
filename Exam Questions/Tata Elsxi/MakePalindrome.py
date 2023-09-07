s = input()


if s == s[::-1]:
    print()
else:
    for i in range(len(s)):
        sample = s + s[:i][::-1]
        if sample == sample[::-1]:
            print(s[:i][::-1])
            break

