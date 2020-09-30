
#include <iostream>

using namespace std;

int main()
{
    long int k,l,m,n,d,p,x=0;
    cin>>k>>l>>m>>n>>d;
    long int arr[d];
    for(p=0;p<d;p+=1)
        arr[p]=1;

    for(p=k-1;p<d;p+=k)
    {
        if(k>d)
            break;
        if(arr[p]==1)
            {
                x++;
                arr[p]=0;
            }
    }
    for(p=l-1;p<d;p+=l)
    {
        if(l>d)
            break;
        if(arr[p]==1)
            {
                x++;
                arr[p]=0;
            }
    }
    for(p=m-1;p<d;p+=m)
    {
        if(m>d)
            break;
        if(arr[p]==1)
            {
                x++;
                arr[p]=0;
            }
    }
    for(p=n-1;p<d;p+=n)
    {
        if(n>d)
            break;
        if(arr[p]==1)
            {
                x++;
                arr[p]=0;
            }
    }
    cout<<x<<endl;


}
