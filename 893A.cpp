#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100],i,pp,l,c=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    if(arr[0]==3)
        {cout<<"NO";return 0;}
    else if(arr[0]==2)
        l=1;
    else if(arr[0]==1)
        l=2;
    for(i=1;i<n;i++)
        if(arr[i]==l)
            {cout<<"NO";return 0;}
        else
        {
            if(arr[i]==1 && l==2)
                l=3;
            else if(arr[i]==1 && l==3)
                l=2;
            else if(arr[i]==2 && l==1)
                l=3;
            else if(arr[i]==2 && l==3)
                l=1;
            else if(arr[i]==3 && l==1)
                l=2;
            else if(arr[i]==3 && l==2)
                l=1;
        }
    cout<<"YES";
}
