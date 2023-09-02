# input : Hello World
#output: Olleh Dlrow

s = input()

words = s.split()


for i in range(len(words)):
    words[i] = words[i][::-1].capitalize()



ans = ""

for word in words:
    ans += word + " "

print(ans[:-1])