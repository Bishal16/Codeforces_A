#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,g1,g2,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        g1=pow(2,n);
        g2=pow(2,n-1);
        p=(n-2)/2;
        for(i=n-2;i>=1;i--)
        {
            if(p>0)
            {
                g2=g2+pow(2,i);
                p--;
            }
            else
                g1=g1+pow(2,i);
        }
        cout<<g1-g2<<endl;
    }
}
