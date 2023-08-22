s=input()
s=list(s)
c=0
for i in s:
    if  not  (i.isdigit() or i.isalpha() or i.isspace()):
        c+=1
    
print(c)