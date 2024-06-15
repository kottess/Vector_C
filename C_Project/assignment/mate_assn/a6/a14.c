#include<stdio.h>
int c(int c)
{
	float a;
	a=3.14*c*c;
	return a;
}
int main()
{
	float a;
	int r=1;
	a=c(r);
	printf("%f\n",a);
}
