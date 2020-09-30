#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,hh,mm,i,s=0;
    cin>>x;
    cin>>hh>>mm;
    while(1){
        if(mm%10==7 || (mm/10)%10==7 || hh%10==7 || (hh/10)%10==7)
        {
            cout<<s;
            break;
        }
        s++;
        mm=mm-x;
        if(mm<0)
        {
            mm=60+mm;
            hh--;
            if(hh<0)
                hh=23;
        }
    }
}
