#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i,p=0,c=0;
    cin>>n;
    long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==-1 && p==0)
            c++;
        else if(arr[i]==-1 && p>0)
            p--;
        else if(arr[i]!=-1 )
            p=p+arr[i];
    }
    cout<<c;
}
