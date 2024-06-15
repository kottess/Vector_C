#include<stdio.h>

int main()
{
	int i,j,s,l,n;
printf("Enter the n value:");
scanf("%d",&n);
	for(i=-n; i<=n; i++)
	{
	if(i<0) l=-i;
	else l=i;
		for(s=0; s<l;s++)
		printf("  ");
		for(j=0; j<2*(n-l)+1; j++)
		printf("%d ",j+1);
	    printf("\n");
	}
}
