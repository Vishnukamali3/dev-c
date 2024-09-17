#include<stdio.h>
void perfect()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("PERFECT");
	}
	else
	{
		printf("NOT PERFECT");
	}
}
int main()
{
	perfect();
}
