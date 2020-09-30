#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,n,s,j,p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        s=3;
        for( j=2;s<=n;j++)
        {
            if(n%s==0)
            {   p=n/s;
                break;}
            s=s+pow(2,j);
        }
        cout<<p<<endl;
    }

}
