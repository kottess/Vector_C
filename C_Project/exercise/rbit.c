#include<stdio.h>
int main()
{
	int n,p1,p2,x,y;
	printf("Enter the number & pos:\n");
	scanf("%d%d%d",&n,&p1,&p2);
	printf("before swapping 2 bits: %d\n",n);
	x=n>>p1&1;
	y=n>>p2&1;
	n^=x^y;
	printf("after swapping 2 bits: %d\n",n);
}
