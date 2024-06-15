#include<stdio.h>
int main()
{
	int n=2,i,j,s,k;
	for(i=-2;i<=2;i++)
	{
		if(i<0)
			j=-(i);
		else
			j=i;
		for(s=0;s<n-j;s++)
			printf(" ");
		for(k=0;k<j+1;k++)
			printf("* ");
		printf("\n");		
	}
}
