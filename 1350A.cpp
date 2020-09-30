#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,k,i,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
//        for(i=0;i<k;i++)
//            for(int j=2;j<n;j++)
//            {
//                if(n%j==0)
//                    {n+=j;break;}
//                else if(j>n/2)
//                    {n*=2;break;}
//            }
        c=0;
        if(n%2==0)
            cout<<n+2*k<<endl;
        else{
            for(i=2;i*i<=n;i++)
                if(n%i==0)
                    {c=i;break;}
            if(c==0)
                c=n;
            cout<<n+c+(k-1)*2<<endl;
        }
    }
}
