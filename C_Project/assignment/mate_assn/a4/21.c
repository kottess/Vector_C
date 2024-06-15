#include<stdio.h>
int main()
{
	int n,i,p,op;
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
	printf("Enter option 1-set 2-clear\n");
	scanf("%d",&op);
	
	if(op==1)
	{
		n=n|(1<<p);
	
	}
	if(op==2)
	{
		n=n&~(1<<p);	
	}
	printf("After modifying the bit position %d	\n",p);
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
		if(i%8==0)
			printf(" ");	
	}
	printf("\n");	
}
