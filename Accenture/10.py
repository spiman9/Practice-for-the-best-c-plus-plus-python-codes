def NumberOfCarry(a , b):
    s1 = str(a)[::-1]
    s2 = str(b)[::-1]
    count = 0
    carry = 0
    i = 0
    j=0
    while i<len(s1) and j<len(s2):
        first = int(s1[i])
        second = int(s2[j])
        sum = first + second + carry
        count+= sum //10
        carry = sum //10
        i+=1
        j+=1
    return count


num1 , num2 = map(int , input().split())
print(NumberOfCarry(num1 , num2))