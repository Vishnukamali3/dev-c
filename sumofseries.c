#include<stdio.h>
int main()
{
	int i,n;
	int a[6]={1 ,2, 3, 4, 5};
	for(i=0;i<n;i++)
	{
	    printf("%d",a[i]);
	}
	a[2]=10;
	for(i=0;i<n;i++)
	{
	    printf("%d",a[i]);
	}
}
