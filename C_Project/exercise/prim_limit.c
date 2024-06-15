#include<stdio.h>
int main()
{
	int n,i,c=0,l;
	printf("enter the limit:");
	scanf("%d",&l);
	for(n=1;c<l;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
		}
		if(i==n)
		{
			c++;
			printf(" %d ",n);
		}
	}
	printf("\n");
}
