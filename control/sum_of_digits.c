#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the n value:");
	scanf("%d",&n);
	for(;n!=0;)
	{
		s=s+(n%10);
		n/=10;
	}
	printf("sum=%d\n",s);
}
