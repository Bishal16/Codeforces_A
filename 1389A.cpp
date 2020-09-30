#include <iostream>
#include <numeric>

#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
long long int lcm(long long int a, long long int b)
{
    return (a*b)/gcd(a, b);
}

 int main(){
    long long int t,i,j,x,y,l,r,lc;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        x=l;y=0;
        for(i=x;i<r;i++)
        {   for(j=i+1;j<=r;j++)
            {
                lc=lcm(i, j);
                if(lc>=l && lc<=r)
                    {cout<<i<<" "<<j<<endl;y=1;break;}
            }
            if(y==1)
                break;
        }
        if(y==0)
            cout<<"-1 -1"<<endl;
    }
}
