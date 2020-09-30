#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double a,b;
    cin>>a>>b>>n;
    double x[n],y[n],v[n],m,t;
    m=100000;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>v[i];
        t=sqrt(pow(x[i]-a,2)+pow(y[i]-b,2))/v[i];
        if(t<m)
            m=t;
    }
    cout<<fixed<<setprecision(6)<<m<<endl;
}
