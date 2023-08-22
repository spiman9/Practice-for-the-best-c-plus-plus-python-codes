data = input()
k = int(input())

k = k % len(data)

print(data[k:] + data[:k])
