#include<stdio.h>
int c(int *i,int *j)
{
	*i=*i* *i;
	*j=*j* *j;
}
int main()
{
	int i=5,j=2;
	c(&i,&j);
	printf("%d %d\n",i,j);
}
