#include<stdio.h>
int palin(int n)
{
	int rem,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
int main()
{
	int n;
	scanf("%d",&n);
	int rev=palin(n);
	printf("%d",rev);
}
