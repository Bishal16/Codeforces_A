#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i,n,c=0;
    cin>>n>>s;
    for(i=0;i<n;i++)
    if(s[i]=='n')
    c++;
    for(i=1;i<= c;i++)
    cout<<1<<" ";
    for(i=1;i<=(n-3*c)/4;i++)
    cout<<0<<" ";
    }
