 #include<stdio.h>
int prime(int n)
{
	int i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
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
void count_of_prime(int a[],int n)
{
	int i,pc=0,npc=0;
	for(i=1;i<=n;i++)
	{
		if(prime(a[i]))
		{
			pc++;
		}
		else
		{
			npc++;
		}
	}
	printf("%d %d",pc,npc);
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	count_of_prime(a,n);
}
