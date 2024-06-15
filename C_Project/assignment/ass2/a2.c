#include<stdio.h>
int main()
{
int i,c=0,n,t;
printf("Enter the number\n");
scanf("%d",&n);
printf("Before toggling from 7th bit\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i%8==0)	
		printf(" ");
	}
printf("\n");

printf("Enter the number of bits to toggle\n");
scanf("%d",&t);

	for(i=7;;i++)
	{
		n=n^(1<<i);
		c++;
		if(c==t)
		break;
	}

printf("After toggling from 7th bit\n");
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i%8==0)	
		printf(" ");
	}
printf("\n");

}
