#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,x=10,temp;
	for(i=0;i<x;i++)
	{
		temp=a[i];
		a[i]=a[x-i-1];
		a[x-i-1]=temp;
	}
	for(i=0;i<x;i++)
		printf("%d\n",a[i]);
}
