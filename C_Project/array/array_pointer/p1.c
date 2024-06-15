#include<stdio.h>
int main()
{
int a[]={10,20,30,40,50};
int *p[]={a,a+3,a+4};
int i;
for(i=0;i<3;i++)
	printf("%d ",*p[i]);
}

