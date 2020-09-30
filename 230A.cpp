#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    long int s,n,i,j,defeat=0;
    cin>>s>>n;
    long int x[n],y[n];
    for(i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                if(s>x[j] && x[j]!=0)
                {
                    s=s+y[j];
                    x[j]=0;
                    y[j]=0;
                    defeat++;
                }
            }
        if(defeat>=n)
            {cout<<"YES";
            return 0;}
    }
    cout<<"NO";

}
