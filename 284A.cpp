#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,t;
    cin>>n>>t;
    if(n==1 && t<=9)
        cout<<t;
    else if(t>pow(10,n-1))
        cout<<-1;
    else
    {
        if(t==10)
        {   for(i=0;i<n-2;i++)
                cout<<1;
                cout<<10;
        }
        else
           for(i=0;i<n;i++)
            cout<<t;

    }


}
