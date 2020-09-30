#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,n,c=0,p;
    cin>>t;
    while(t--)
    {
		cin>>n;
		//long long int a[n];
		vector<int>vec;
		//std::vector<int>::iterator it;
		for(i=0;i<n;i++)
		{
			cin>>p;
			vec.push_back(p);
		}

		int mx=0;
		for(int i=0;i<vec.size()-1;i++)
			if(vec[i]!=vec[i+1] && vec[i]+vec[i+1]>mx)
				{p=i;mx=vec[i];}
		if(mx!=0){
		vec[p]=vec[p]+vec[p+1];
		vec.erase(vec.begin()+p+1);cout<<endl;
		for(int i=0;i<vec.size()-1;i++)
		{
			if(vec[i]!=vec[i+1])
			{
				vec[i]=vec[i]+vec[i+1];
				vec.erase(vec.begin()+i+1);
				i=-1;
				continue;
			}
		}}
		cout<<vec.size()<<endl;
	}
}
