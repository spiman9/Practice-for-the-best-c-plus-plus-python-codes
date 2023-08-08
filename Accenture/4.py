

def findCount(arr , num , diff):
    count = 0
    for i in arr:
        temp = abs(i - num)
        if temp<= diff:
            count+=1
    return count

n = int(input())
l = list(map(int , input().split()))
diff = int(input())
print(findCount(l , n , diff))