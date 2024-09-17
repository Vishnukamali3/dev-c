#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=min_array(a,n);
	printf("%d",min);
}
int min_array(int *a ,int m)
{
	int i ,minval=a[0];
	for(i=0;i<m;i++)
	{
		if(a[i]<minval)
		{
			minval=a[i];
		}
	}
	return minval;
}
