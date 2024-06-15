#include<stdio.h>
int main()
{
	int n,i,a=2,b=3,c;
	printf("Enter the range:");
	scanf("%d",&n);
	for(c=5;c<=n;)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
	printf("\n");
}
