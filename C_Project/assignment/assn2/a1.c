#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter the number\n");
scanf("%d",&n);
printf("Before swapping\n");
for(i=31;i>=0;i--)
{
	printf("%d",n>>i&1);
	if(i%8==0)
	printf(" ");
}
printf("\n");
for(i=0,j=16;i<8;i++,j++)
{
	if((n>>i&1)!=(n>>j&1))
	{
		n^=1<<i;
		n^=1<<j;
	}
}
printf("After swapping\n");
for(i=31;i>=0;i--)
{
	printf("%d",n>>i&1);
	if(i%8==0)
	printf(" ");
}
printf("\n");
}

