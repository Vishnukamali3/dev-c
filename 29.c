#include<stdio.h>
int main()
{
    int i,n,o;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]); 	
	}
	for(i=0;i<n;i++)
	{
	  if(a[i]%2==1)
	  {
	  	o=a[i];
	  	break;
	  }	
	}
	printf("%d",o);
	 	
}	
