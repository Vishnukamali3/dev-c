#include<stdio.h>
int neon(int n)
{
	int s,sum=0,rem,t;
	s=n*n;
	while(s>0)
	{
		rem=s%10;
		sum=sum+rem;
		s=s/10;	
	}
	if(sum==n)
	{
		printf("NEON");
	}
	else
	{
		printf("NOT NEON");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	neon(n); 
}
