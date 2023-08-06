
def helper(n):
    if n == 0:
        return 0
    return n + helper(n-1)


n = int(input("Enter the number : "))
sum = helper(n)

print("Sum = " , sum)
