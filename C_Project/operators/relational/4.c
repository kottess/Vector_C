#include<stdio.h>
int main()
{
	float f=7.5;
	int x;
	x=f==7.5;
	printf("x=%d\n",x);
	f=7.7;
	x=f==7.7;
	printf("x=%d\n",x);	
	x=f==7.7f;
	printf("x=%d\n",x);
}
