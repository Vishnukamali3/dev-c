#include<stdio.h>
int prime(int a)
{
	int i,c=0;
	for(i=1;i<=a ;i++)
	{
		if(a%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
} 
int main ()
{
	int i,n,np=0,bp=0;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		if(prime(i))
		{
			np=i;
			break;
		}
	}
	for(i=n-1;;i--)
	{
		if(prime(i))
		{
			bp=i;
		    break;
		}
		
	}
	if(n-bp<np-n)
	{
		printf("%d",bp);
	}
	else if(n-bp>np-n)
	{
		printf("%d",np);
	}
}
