#include<stdio.h>
int main()
{
	int x,y=1,z;
	if(x=z=y)
		x=3;
	printf("%d %d %d\n",x,y,z);
	while(y<4)
		x+=++y;
	printf("%d %d",x,y);
}
