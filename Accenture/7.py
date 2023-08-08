

def productSmallestPair(sum , arr):
    if len(arr)<2:
        return -1
    ans = 10000000000000
    arr.sort()
    for i in range(0 , len(arr)-1):
        for j in range(i+1 , len(arr)):
            if arr[i] + arr[j] <= sum :
                return min( arr[i]*arr[j] , ans)
    
    return 0

sum = int(input())
l = list(map(int , input().split()))
print(productSmallestPair(sum , l))
            
