#include <stdio.h>
int main()
{
	int n,a[10000],i,j,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j]) sum++;
	printf("%d",sum);
	return 0;
}
