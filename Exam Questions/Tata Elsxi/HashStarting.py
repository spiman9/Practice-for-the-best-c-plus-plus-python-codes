s = input()


ct = s.count('#')

s = s.replace('#' , '')


s = '#'*ct + s
print(s)