#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i,c,c1,mp,m;
    cin>>n;
    long long int arr[n];
    cin>>arr[0];
    m=arr[0];
    for(i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<m)
            {m=arr[i];mp=i;}
    }
    if(arr[0]==m) mp=0;
    c=1;c1=n-1;
    for(i=mp+1;i<n;i++)
    {
        if(arr[i]!=m)
            c++;
        else
        {
            if(c<c1)
                c1=c;
            c=1;
        }
    }
   //if(n==100000) cout<<m<<" "<<mp<<endl;
    cout<<c1;
}
