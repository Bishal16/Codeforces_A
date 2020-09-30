#include <iostream>

using namespace std;

int main()
{
    long long n,a1,a2,a3,a4,a5,r1,r2,r3,r4;
    cin>>n;
    a1=n/100;
    r1=n%100;

    a2=r1/20;
    r2=r1%20;

    a3=r2/10;
    r3=r2%10;

    a4=r3/5;
    r4=r3%5;

    a5=r4/1;

    cout<<a1+a2+a3+a4+a5;
}
