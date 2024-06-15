#include<stdio.h>
int z(int n)
{
	if(n<=1)
		return 1;
	else
 		return(z(n-3)+z(n-1));
}
int main()
{
	printf("%d\n",z(6));
}
