#include<stdio.h>
int main()
{
	int y,t,n,x,p,i;
	printf("Enter the number:\n");
	scanf("%d",&n);
	t=n;
	for(i=31;i>=0;i--)
		printf("%d",n>>i&1);
	printf("\n");
	printf("Enter the position:\n");
	scanf("%d",&p);
	x=((n>>p)|(n<<(32-p)));
	y=((t<<p)|(t>>(32-p)));
	for(i=31;i>=0;i--)
		printf("%d",x>>i&1);
	printf("\n");
	for(i=31;i>=0;i--)
		printf("%d",y>>i&1);
	printf("\n");
}
