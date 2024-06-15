#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i==n)
		printf("Prime number\n");
	else
		printf("Not a prime number\n");
}
