num = int(input("Enter the number : "))

l = list(str(num))

sum = 0
for i in l:
    sum += pow(int(i) , 4)

if sum == num:
    print("Yepse")
else:
    print("Nopse")