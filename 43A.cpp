#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,team1,team2;
    int n,c1=0,c2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(c1==0)
            team1=s;

        if(s==team1)
            c1++;
        else if(c2==0)
            team2=s;
        if(team2==s)
            c2++;
    }
    if(c1>c2)
        cout<<team1;
    else
    cout<<team2;
}
