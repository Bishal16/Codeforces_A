#include<iostream>
using namespace std;
int main()
{
    int t,n,i,c,j,r,s;
    int z=1,arr[100];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        c=0,s=0;
        while(n!=0){
            r=n%10;
            if(r!=0)
            {
                if(c>0)
                    z=z*10;
                //cout<<r*z<<" ";
                arr[s]=r*z;
                s++;
            }
            else
            if(c>0)
                z=z*10;
            c++;
            n=n/10;
        }
        z=1;
        cout<<s<<endl;
        for(j=0;j<s;j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
}
