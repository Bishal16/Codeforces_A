#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,j,cn,n,a,b,c;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        cn=0;
        for(i=1;i<n-1;i++)
        {
            for(j=0;j<i;j++)
                if(arr[j]<arr[i])
                    {
                        cn=1;
                        a=j;//cout<<" A ";
                        break;}


            if(cn==1)
            //cout<<" A1 ";
                for(j=i+1;j<n;j++)
                    if(arr[j]<arr[i])
                        {
                            cn=2;
                            b=i;
                            c=j;//cout<<" b ";
                            break;}

            if(cn==2)
                break;
        }
        if(cn==2)
            {cout<<"YES"<<endl;
            cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;}
        else
            cout<<"NO"<<endl;
    }
}
