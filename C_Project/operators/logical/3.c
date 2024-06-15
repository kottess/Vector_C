#include<stdio.h>
int main()
{
	int x=10,y=20,z;
	z=x||(y=10);
	printf("x=%d y=%d z=%d\n",x,y,z);
}
