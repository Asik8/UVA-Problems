while True:
    a = int(input())
    if a <0:
        break
    l = []
    
    while a!=0:
        l.append(a%3)
        a //= 3
    l.reverse()
    for i in range(len(l)):
        print(l[i],end='')
    print()