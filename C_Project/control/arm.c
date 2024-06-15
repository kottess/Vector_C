#include<stdio.h>
int main()
{
	int n,r,s=0,t;
	printf("Enter the n value:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	n=t;
	if(s==n)
		printf("%d is an armstrong number",n);
	else
		printf("%d is not an armstrong number",n);
}
