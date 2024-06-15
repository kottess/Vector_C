#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("Before reversing\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
	for(i=0,j=31;i<j;i++,j--)
	{
		if((n>>i&1)!=(n>>j&1))
		{
			n=n^1<<i;
			n=n^1<<j;
		}
	}
	printf("After reversing\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i%8==0)
			printf(" ");
	}
		printf("\n");
}
