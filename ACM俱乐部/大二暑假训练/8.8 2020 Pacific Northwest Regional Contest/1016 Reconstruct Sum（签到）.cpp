#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,a[10005],sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]*2==sum)
		{
			cout<<a[i]<<endl;
			return 0;
		}
	}
	cout<<"BAD"<<endl;
	return 0;
}
