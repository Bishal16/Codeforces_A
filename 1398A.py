for  t in range(int(input())):
    s=input()
    ans=0
    p=0
    en=0
    while '1' in s:
        mx=0
        c=1
        for i in range(len(s)-1):
            
            if s[i]=='1' and s[i+1]=='1':
                
                c=c+1
                if c>mx:
                    mx=c
                    en=i+1
            else:
                c=1
        st=en-mx+1
        s1=""
        for j in range (len(s)):
            if j<st or j>en:
                s1=s1+s[j]
        s=s1
        if p%2==0:
            ans=ans+mx
        #print(s,mx,en,st)
        if mx==0:
            break
        else:p=p+1
    #print(p)
    c=0
    for i in range(len(s)):
        if s[i]=='1':
            c=c+1
    if p%2==1:
        ans=ans+int(c/2)
    else:
        ans=ans+int(c/2)+c%2
    print(ans)
            
            