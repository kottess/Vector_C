#include<stdio.h>
int main()
{
	int s=0,n;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	printf("Reverse number is %d",s);
}
