#include<stdio.h>
#include<math.h>
int main()
{
int i,n,r,s,n1,p,c;
printf("Armstrong number from 1 to 1000 divisible by 3\n");
for(i=1;i<=1000;i++)
	{
	n=n1=i,c=0,s=0;
	while(n!=0)
		{
		n/=10;
		c++;
		}
	while(n1!=0)
		{
		r=n1%10;
		p=pow(r,c);
		s=s+p;
		n1/=10;
		}
	if(s==i)
		{
		if(i%3==0)
		printf("%d ",i);
		}
	}
printf("\n");
}
