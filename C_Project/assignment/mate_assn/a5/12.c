#include<stdio.h>
int main()
{
	int a[20],i;
	for(i=0;i<20;i++)
	{
		a[i]=i;
	}
	for(i=0;i<20;i++)
	{
		a[i]=a[20-i];
	}
	for(i=0;i<20;i++)
		printf("%d ",a[i]);

}

