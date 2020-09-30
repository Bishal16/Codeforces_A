#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t,n,i,a[1000],p;
    cin>>t;
    while(t--)
    {
        p=1;
        cin>>n;
        for(i=0;i<n;i++)
            {cout<<p<<" ";
            p+=2;
            if(p>1000)
                p=2;}
        cout<<endl;
    }

}
