#include<stdio.h>
int main()
{
	int s=0,n,t;
	printf("Enter the number:");
	scanf("%d",&n);
	t=n;
	for(;n!=0;)
	{
		s=s*10+(n%10);
		n/=10;
	}
	if(s==t)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
}
