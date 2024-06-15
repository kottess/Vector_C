#include<stdio.h>
int main()
{
	int i,n,s=0,r;
	printf("Enter the range:");
	scanf("%d",&r);
	for(n=1;n<=r;n++)
	{ 
		s=0;
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
			s+=i;
		}
		if(n==s)
			printf("%d ",n);
	}
}
