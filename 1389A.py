for i in range(int(input())):
    l,r=map(int,input().split())
    if r/l>=2:
        print(l,2*l)
    else:
        print(-1,-1)