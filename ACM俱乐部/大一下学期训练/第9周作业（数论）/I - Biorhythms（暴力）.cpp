#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,num=0;
	while(cin>>a>>b>>c>>d)
	{
		if(a==-1) break;
		num++;
		a%=23;
		b%=28;
		c%=33;
		int t=0;
		for(int i=1;i<=21252;i++)
			if((d+i)%23==a&&(d+i)%28==b&&(d+i)%33==c)
			{
				t=i;
				break;
			}
		cout<<"Case "<<num<<": the next triple peak occurs in "<<t<<" days."<<endl;
	}
	return 0;
}
