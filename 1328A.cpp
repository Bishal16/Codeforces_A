#include <iostream>

using namespace std;

int main()
{
    long long int n,i,p;
    cin>>n;
    long long int a[n],b[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for (i=0;i<n;i++)
    {
        if(a[i]<b[i])
            cout<<b[i]-a[i]<<endl;
        else if(a[i]>b[i])
            {

                p=a[i]%b[i];
                if(p==0)
                    cout<<0<<endl;
                else
                cout<<b[i]-p<<endl;
            }
        else
            cout<<0<<endl;
    }
}
