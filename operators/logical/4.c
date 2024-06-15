#include<stdio.h>
int main()
{
	int x=10,y;
	y=!x;
	printf("x=%d y=%d\n",x,y);
	x=0;
	y=!x;
	printf("x=%d y=%d\n",x,y);
}
