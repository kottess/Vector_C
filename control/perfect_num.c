#include<stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("Enter the n value:");
	scanf("%d",&n);
	for(;i<n;i++)
	{
		if(n%i==0)
		s+=i;
	}
	if(n==s)
		printf("perfect number");
	else
		printf("not a perfect number");

}
