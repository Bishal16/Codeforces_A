#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,mx=0,s=0;
    cin>>n;
    long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
            mx=arr[i];

    }
    for(i=0;i<n;i++)
    {
        s=s+(mx-arr[i]);
    }
    cout<<s;
}
