num = int(input("Enter the number : "))
squared_num = pow(num , 2)

if(str(num) == str(squared_num)[(-1 * len(str(num))) : ]):
    print("Yepse")
else:
    print("Nopse")