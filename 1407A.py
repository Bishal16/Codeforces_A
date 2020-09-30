t=int(input())
for t in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    one=0
    n2=int(n/2)
    for i in range(n):
        if a[i]==1:
            one=one+1
    zero=n-one
    if n==2 and a[0]==1 and a[1]==1:
        print(2)
        print("1 1")
        continue
    
    if n==2 :
        print(1)
        print("0")
        continue
    
    if one==zero and n2%2==0:
        print(n2)
        for i in range(one):print('0',end=' ')
    elif one==zero and n2%2==1:
        print(n2+1)
        if a[0]==0:
            for i in range(n2-1): 
                print('0',end=' ')        
            print("1 1")
        else:
            for i in range(n2-1): 
                print('1',end=' ')        
            print("0 0")
    elif one<zero and n2%2==0:
        print(n2)
        for i in range(n2):print('0',end=' ')  
    elif one>zero and n2%2==0:
        print(n2)
        for i in range(n2):print('1',end=' ') 
    elif one<zero and n2%2==1 :
        print(n2+1)
        for i in range(n2+1):print('0',end=' ') 
    elif one>zero and n2%2==1 :
        print(n2+1)
        for i in range(n2+1):print('1',end=' ') 
        
        
        