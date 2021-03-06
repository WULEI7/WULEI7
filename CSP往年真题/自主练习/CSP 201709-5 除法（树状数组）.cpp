#include <cstdio>
long long tree[100005];
int n,m,a[100005];
void update(int i,int val)
{
	while(i<=n)
	{
		tree[i]+=val;
		i+=-i&i;
	}
}//树状数组更新 
long long getsum(int i)
{
	long long sum=0;
	while(i>0)
	{
		sum+=tree[i];
		i-=-i&i;
	}
	return sum;
}//树状数组求和 
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		update(i,a[i]);
	}
	for(int i=1;i<=m;i++)
	{
		int opt,l,r,w;
		scanf("%d %d %d",&opt,&l,&r);
		if(opt==2) printf("%lld\n",getsum(r)-getsum(l-1));
		else
		{
			scanf("%d",&w);
			if(w==1)continue;
			while(l<=r)
			{
				if(a[l]>=w&&a[l]%w==0)
				{
					update(l,-(a[l]-a[l]/w));//注意细节 
					a[l]/=w;
				}
				l++;
			}
		}
	}
	return 0;
}
