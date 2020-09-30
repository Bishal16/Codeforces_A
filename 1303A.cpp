#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--){
    int c=0,p=-1,q=0;
    cin>>s;
        for(i=0;i<s.length();i++)
            if(s[i]=='1' && p==-1)
                p=i;
            else if(s[i]=='1')
                q=i;
        for(i=p+1;i<q;i++)
            if(s[i]=='0')
                c++;
        cout<<c<<endl;
    }
}
