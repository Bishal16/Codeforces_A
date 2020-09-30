#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    int r1,d,nn,mm;
    cin>>n>>m>>a>>b;
    double r=(double)b/(double)m;
    if(r>=a)
        cout<<n*a;
    else
        {
            //nn=n,mm=m;
            r1=n%m;
            d=n/m;
            if(a>b)
            {   if(r1==0)
                    cout<<b*d;
                else
                    cout<<d*b+b;
            }
            else
            {

                if(m>n && n*a>b)
                    cout<<b;
                else
                    cout<< (d*b+r1*a);

            }   //std::cout << std::fixed <<(d*b+r1*a);
        }
}
