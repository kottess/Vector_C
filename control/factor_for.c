#include<stdio.h>
int main()
{
	int n,f=1;
	printf("Enter the n value:");
	scanf("%d",&n);
	for(;n!=0;n--)
		f=f*n;
	printf("f=%d\n",f);
}
