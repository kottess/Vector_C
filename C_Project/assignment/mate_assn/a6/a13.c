#include<stdio.h>
int c(int c)
{
	if(c>=40000)
		return(c/10);	
	else
		return(10);
}
int main()
{
	int i=45;
	printf("%d\n",c(i*1000));
}
