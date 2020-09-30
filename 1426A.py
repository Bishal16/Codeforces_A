for t in range(int(input())):
    n ,x = map(int,input().split())
    if n<=2:
        print("1")
        continue
    s,c=2,1
    for i in range(2,100000000):
        s=s+x
        c+=1
        if n<=s:
            print(c)
            break
    
