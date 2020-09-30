#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long n,i=0;
    cin>>n;

        while(n)
        {
            if(n%2==1)
                i++;
            n/=2;
        }
        cout<<i;

}
