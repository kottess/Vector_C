#include<stdio.h>
int main()
{
	int n,i,c=0,l;
	printf("Enter the position of the prime number to display: 	");
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
			if(c==l)
				printf(" %d ",n);
		}
	}	
	printf("\n");
}
