def checker(s ):
    if(len(s)<4):
        return False
    numCheck = False
    capitalCheck = False
    space = True
    if s[0].isdigit():
        return False
    
    for ch in s:
        if ch == " " or ch == "/":
            space = False
            break
        elif ch>='0' and ch<='9':
            numCheck = True
        elif ch >= 'A' and ch<='Z':
            capitalCheck = True
    
    return numCheck and space and capitalCheck

s = input()
print(1 if checker(s) else 0)

