#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter x & y value\n");
	scanf("%d %d",&x,&y);
	z=x&&y;
	printf("z=%d\n",z);
	z=x||y;
	printf("z=%d\n",z);
}
