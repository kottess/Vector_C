#include<stdio.h>
int main()
{
	int x,y,z;
	x=y=z=10;
 	(x!=10)||(y=200)&&(z=300);
 	
 	printf("%d %d %d\n",x,y,z);
}
