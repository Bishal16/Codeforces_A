#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i,c1=0,c2=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='B' && s[i+1]=='A' && c1==0)
            {c1=1;i++;}

        else if(s[i]=='A' && s[i+1]=='B'&& c2==0)
            {c2=1;i++;}

        if(c1==1 && c2==1)
            {cout<<"YES";return 0;}
    }
    c1=0;c2=0;
    for(i=0;i<s.length();i++)
        if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B' && c1==0)
            {c1=1;i+=2;}
        else if(s[i]=='B' && s[i+1]=='A'&& c2==0)
            c2=1;
    if(c1==1 && c2==1)
            {cout<<"YES";return 0;}
    c1=0;c2=0;
    for(i=0;i<s.length();i++)
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='A' && c1==0)
            {c1=1;i+=2;}
        else if(s[i]=='A' && s[i+1]=='B'&& c2==0)
            {c2=1;i++;}

   if(c1==1 && c2==1)
            {cout<<"YES";return 0;}
    cout<<"NO";
}
