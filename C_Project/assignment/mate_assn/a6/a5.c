#include<stdio.h>
int f(int a)
{
	a>20?return(10):return(20);
}
int main()
{
	int b;
	b=f(20);
	printf("%d\n",b);
}
