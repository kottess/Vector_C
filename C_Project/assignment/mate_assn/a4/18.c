#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	printf("Reversed digits %d\n",s);
}
