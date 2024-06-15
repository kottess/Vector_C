#include<stdio.h>
void fib(int,int);
int main()
{
	int n;
	
	printf("Enter the number\n");
	scanf("%d",&n);
	fib(0,n);
	printf("\n");
}
void fib(int i,int n)
{
	static int a=0,b=1,c=0;
	if(i<=n)
	{
		printf(" %d ",a);
		c=a+b;
		a=b;
		b=c;
		i++;
		fib(i,n);
	}
}
