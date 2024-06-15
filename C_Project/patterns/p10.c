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
		for(j=0; j<=n+1; j++)
		{
		if(j<n-l)
		printf(" ");
		else
		printf("%d ",j);
}
	    printf("\n");
	}
}
