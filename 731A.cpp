#include<bits/stdc++.h>
using namespace std;

int main(){

    char j,k,p='a';
    string s;int sum=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int c1=0,c2=0;j=p;k=p;
        while(1){
            if(j==s[i])
            {
                p=s[i];
                break;
            }
            else c1++;
            if(j=='z')
                j='a';
            else
                j++;
        }

        while(1){
            if(k==s[i])
            {
                p=s[i];
                break;
            }
            else c2++;

            if(k=='a')
                k='z';
            else k--;
        }
        //cout<<min(c1,c2)<<endl;
        sum=sum+min(c1,c2);//cout<<sum<<endl;
    }
    cout<<sum;
}
