#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,n1,m,i;
    cin>>n>>m;
    n1=n;
    if(n%2==0)
        n=n/2;
    else
        n=n/2+1;
    for(i=n;i<=n1;i++)
        if(i%m==0)
            {cout<<i;return 0;}
    cout<<-1;
}
