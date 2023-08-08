def operationBinaryString(s):
    l1 = []
    operation = ""
    for i in s:
        if i == '0' or i == '1':
            l1.append(int(i))
        else:
            operation+=i
    # print(operation , l1)
    l1 = l1[::-1]

    i =0 
    while i < len(operation):
        first = l1[0]
        second = l1[1]
        l1.remove(first)
        l1.remove(second)
        ans = 0
        if operation[i] == 'A':
            #and
            ans = first & second
        elif operation[i] == 'B':
            #OR
            ans = first | second
        else:
            #xor
            ans = first | second
        i+=1
        l1.insert(0 , ans)
    return l1[0]

        

s = input()
print(operationBinaryString(s))
