for t in range(int(input())):
    n=int(input())
    sl=[]
    ln=0
    s=""
    for i in range(n):
        s1=input()
        s=s+s1
    #print(s)
    ln=len(s)  
    char='a'
    while char<='z':
        c=0
        for i in range (ln):
            if char==s[i]:
                c=c+1
        sl.append(c)
        #print(char)
        char=chr(ord(char) + 1)
    x=0
    for i in range (len(sl)):
        if sl[i]%n!=0:
            print("NO")
            x=-1
            break
    if x!=-1:
        print("YES")
        
        
"""
4
2
caa
cbb
3
cba
cba
cbb
4
ccab
cbac
bca
acbcc
4
acb
caf
c
cbafc
"""