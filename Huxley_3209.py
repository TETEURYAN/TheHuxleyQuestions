num = int(input(' '))
i = 0

while i < num:
    a,b,c = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    
    print((a*b)%c)
    i = i + 1
