#include<stdio.h>
 void fun(int  *ptr)
{
	*ptr = 30;
}
main()
{
	int  y = 20;
	fun(&y);
	printf("%d  ",y);
}
