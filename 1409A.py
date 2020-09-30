for t in range(int(input())):
    a,b=map(int, input().split())
    
    if a==b:
        print(0)
        continue
    elif a<b:
        a=b-a        
    else:
        a=a-b        
            
    if a%10==0:
        print(int(a/10))
    else:
        print(1+int(a/10))