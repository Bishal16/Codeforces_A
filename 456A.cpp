#include <iostream>

using namespace std;

int main()
{
    long long int n,s=0,i;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
        if(a[i]!=b[i])
            {cout<<"Happy Alex";
            return 0;}
    }

    cout<<"Poor Alex";

}
