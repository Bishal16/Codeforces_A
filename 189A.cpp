#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n,a[3],i,j,k;
    cin>>n;
    for(int p=0;p<3;p++)
        cin>>a[p];

    sort(a,a+3);
    int mx=0;
    for(i=0;i<=n/a[2];i++)
        for(j=0;j<=n/a[1];j++)
            for(k=0;k<=n/a[0];k++)
                {
                    if(i*a[2] + j*a[1] + k*a[0] == n)
                        {
                       // cout<<a[0]<<a[1]<<a[2]<<" ";
                            //cout<<i<<" "<<j<<" "<<k;
                            //return 0;
                            if(a[0]<=10 &&a[1]<=10 && a[2]<=10 || n>3300)
                                {cout<<i+j+k;
                                return 0;}

                            if(i+j+k>=mx)
                                mx=i+j+k;
                        }
                }
cout<<mx;
}
