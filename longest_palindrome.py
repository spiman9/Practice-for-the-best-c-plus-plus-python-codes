s = input("Enter the string : ")

l = []


for i in range(0 , len(s)):
    for j in range(i+1 , len(s)+1):
        sample = s[i : j]
        if sample == sample[::-1]:
            l.append(sample)

print(l)
mx = -1
ans = ""

for temp in l:
    if len(temp) > mx:
        mx = len(temp)
        ans = temp

print("Largest palindrome is : " , ans)