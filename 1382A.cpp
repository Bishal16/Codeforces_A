#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,t,m,i,j,c;
    cin>>t;

    while(t--){
        cin>>n>>m;
        int a[n],b[m];

        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];
c=0;
        for(i=0;i<n;i++)
        {

            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    cout<<"YES"<<endl<<1<<" "<<a[i]<<endl;
                    c=1;
                    break;
                }

            }if(c==1)
                    break;
        }
        if(c==0)
            cout<<"NO"<<endl;

    }
}
