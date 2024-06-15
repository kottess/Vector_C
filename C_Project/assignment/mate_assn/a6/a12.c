#include<stdio.h>
int c(int c)
{
	if(c>=45)
		return 100;	
	else
		return(20*10);
}
int main()
{
	int i=45;
	printf("%d\n",c(i));
}
