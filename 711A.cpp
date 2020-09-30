#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i,j,c=0,p=0,a,b;
    cin>>n;
    char arr[n][5];
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(j==4 && arr[i][0]=='O' && arr[i][1]=='O')
                p=1;
            if(j==4 && arr[i][3]=='O' && arr[i][4]=='O'&& p==0)
                p=1;
        }
    if(p==1){
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
                if(j==0 && arr[i][j]=='O' && arr[i][j+1]=='O' && c==0)
                    {cout<<"++";
                    j++;
                    c++;}
                else if(j==3 && arr[i][j]=='O' && arr[i][j+1]=='O' && c==0)
                    {cout<<"++";
                    j++;
                    c++;}
                else
                    cout<<arr[i][j];
            cout<<endl;
        }
    }
    else cout<<"NO";
}
