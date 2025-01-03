#include <iostream>
#include <cstdio>
//#include <stack>
using namespace std;
int n,m,ans=0;
int a[105][105];
int dirx[4]={-1,0,0,1};
int diry[4]={0,-1,1,0};
void DFS(int x,int y)
{
	a[x][y]=0;
	for(int i=0;i<4;i++)
		if(a[x+dirx[i]][y+diry[i]]!=0)
			DFS(x+dirx[i],y+diry[i]);
}
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		char c;
		cin>>c;
		a[i][j]=c-'0';
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		if(a[i][j]!=0)
		{
			ans++;
			DFS(i,j);
		}
	}
	cout<<ans<<endl;
	return 0;
}
