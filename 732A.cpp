#include<iostream>
using namespace std;
int main()
{
    int k,r1,n,r,k1;
    cin>>k>>r1;
    k1=k;
    for(int i=1;i<=1000;i++)
    {
        if(k<10)
        {
            if(k==1)
                {cout<<r1;
                return 0;}
            else if(r1==k)
                {cout<<1;
                return 0;}
            else if(r1<k)
                while(k<10)
                    {i++;
                    k=k*i;
                    }
            else if(r1>k)
                {if(r1%k==0)
                    {cout<<r1/k;
                    return 0;}
                 else
                    while(k<10)
                    {i++;
                      k=k*i;
                    }
                }
        }
        n=k1*i;
        r=n%10;
        if(r==0)
        {
            cout<<i;
            return 0;
        }
        else if((n-r1)%10==0)
        {
            cout<<i;
            return 0;
        }

    }
}
