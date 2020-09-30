#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p;
    cin>>n>>m;
    if(n<=m)
        p=n;
    else
        p=m;
    if(p%2==0)
    cout<<"Malvika";
    else
    cout<<"Akshat";
}
