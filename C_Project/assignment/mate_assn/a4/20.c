#include<stdio.h>
int main()
{
	int n,i,p;
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i%8==0)
			printf(" ");	
	}
	printf("\n");
	printf("Enter the bit position\n");
	scanf("%d",&p);
	i=n>>p&1;
	printf("bit value %d\n",i);
}
