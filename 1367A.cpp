#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,i;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<s[0];
        for(i=1;i<s.length();i++)
            if(i%2!=0)
                cout<<s[i];
        cout<<endl;
    }

}
