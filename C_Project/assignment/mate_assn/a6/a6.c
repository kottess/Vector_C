#include<stdio.h>
int f1(int a,int b)
{
	return(f2(20));
}
int f2(int a)
{
	return(a*a);
}
int main()
{
printf("%d\n",f1(2,1));
}


