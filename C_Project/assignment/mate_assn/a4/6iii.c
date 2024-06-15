#include<stdio.h>
int main()
{
	int n=5,i,j,k=5;
	for(i=0;i<5;i++,k--)
	{
		for(j=0;j<n-i;j++)
			printf("%d ",k);
		printf("\n");
	}

}
