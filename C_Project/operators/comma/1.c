#include<stdio.h>
int main()
{
	int x=10,y=20,temp;
	temp=x,x=y,y=temp;
	printf("x=%d y=%d\n",x,y);
}
