#include<stdio.h>
int main()
{
	int f,n,s,t,c=0;
	printf("5 Palindrome num from 137\n");
	for(n=137;;n++)
	{
		t=n;s=0;
		while(n!=0)
		{
			s=s*10+(n%10);
			n/=10;
		}
		n=t;
		if((n==s)&&(f))
		{
			c++;
			printf("%d ",n);
			f=!f;
		}
		if(c==5)
			break;
	}
}
