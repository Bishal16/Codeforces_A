#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i,t,c;
cin>>t;
while(t--)
{
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);c=0;
    for(i=0;i<n-1;i++)
    {
        int p=a[i]-a[i+1];
        int q=a[i+1]-a[i];
        if(p>1 || q>1)
            {cout<<"NO"<<endl;c++;break;}
    }
    if(c==0)
        cout<<"YES"<<endl;
}

}
