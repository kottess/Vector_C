#include<stdio.h>
int main()
{
	int n,i,c=0;
	for(n=1;c<100;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
		}
		if(i==n)
		{
			printf(" %d ",n);
			c++;
		}
	}
	printf("\n");
}
