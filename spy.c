#include<stdio.h>
void spy()
{
	int n,i,p=1,s=0,rem; 
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		s=s+rem;
		p=p*rem;
		n=n/10;
	}
	if(s==p)
	{
		printf("SPY");
	}
	else
	{
		printf("NOT SPY");
	}
}
int main()
{
	
	spy();
}
