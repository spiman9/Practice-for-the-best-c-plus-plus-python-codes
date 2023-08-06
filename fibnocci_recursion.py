def fibnocci(i):
    if i == 0 or i == 1:
        return i
    return fibnocci(i-1) + fibnocci(i-2)


n = int(input("Enter the number upto which you want the series : "))


for i in range(0 , n):
    print(fibnocci(i) , end=" ")