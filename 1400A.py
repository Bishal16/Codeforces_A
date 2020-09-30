for t in range(int(input())):
    n=int(input())
    s=input()
    z=0
    ln=len(s)
    
    for i in range(ln):
        if s[i]=='0':
            z=z+1
    ans=""
    if z>=n:
        #ans=s[n-1]
        for i in range(n):
            ans=ans+"0"
    else:
        #ans=s[n-1]
        for i in range(n):
            ans=ans+"1"
            
            
    print(ans)