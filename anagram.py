

s1 = list(input("Enter first string : "))
s2 = list(input("Enter the second string : "))

s1.sort()
s2.sort()

if(s1 == s2):
    print("Yepse Anagram")
else:
    print("Nopse anagram")