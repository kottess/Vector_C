#include<stdio.h>
int main()
{
	int n,i;
	for(i=1;i<300;i++)
	{
		for(n=2;n<i;n++)
		{
			if(i%n==0)
				break;
		}
		if(n==i)
			printf("%d ",i);
	}
	printf("\n");
}
