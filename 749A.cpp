#include <iostream>

using namespace std;

int main()
{
    long int n,i;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2!=0)
    {

        for(i=1;i<=(n/2)-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;

    }
    else if(n%2==0)
    {
        for(i=1;i<=n/2;i++)
        {
        if(i==n/2)
            cout<<2;
        else
            cout<<2<<" ";
        }
    }
}
