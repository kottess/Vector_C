#include<stdio.h>
int main()
{
	double d;
	int *ptr,i,j;
	printf("Equivalent binary for double value\n");
	printf("Enter any double value\n");
	scanf("%lf",&d);
	ptr=(int *)&d;
	ptr=ptr+1;
	for(i=0;i<2;i++)
	{
		for(j=31;j>=0;j--)
			printf("%d",*ptr>>j&1);
		ptr--;
	}
	printf("\n");
}
