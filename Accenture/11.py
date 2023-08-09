def Replace(s , n , c1 , c2):
    s = s.replace(c1 , '$').replace(c2 , '@').replace('$' , c2).replace('@' , c1)
    print(s)
    

n = int(input())
s = input()
c1 = input()
c2 = input()
Replace(s , n , c1 , c2)
