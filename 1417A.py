for t  in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    a.sort()
    c= 0
    for i in range(1,n):
        c = c + (k-a[i])//a[0]
    
    print(c)
    
    
