#include<stdio.h>
int main()
{
	int max=0,i,n;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
	{
		max=a[i];
	}
	}
	
	printf("%d",max);
	
}
