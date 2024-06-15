#include<stdio.h>
int main()
{
	int i,j;
	printf("Prime numbers b/w 10 to 100\n");
	for(i=10;i<100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			printf("%d ",i);	
	}
	printf("\n");
}
