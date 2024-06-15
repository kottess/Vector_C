#include<stdio.h>
int fact(int );
int main()
{
	int n;
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("%d factorial is %d\n",n,fact(n));
}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return(n*fact(n-1));
}
