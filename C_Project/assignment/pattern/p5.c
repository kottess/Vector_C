#include<stdio.h>
int main()
{
	int i,j,s,l,n,f;
printf("Enter the n value:");
scanf("%d",&n);
	for(i=-n; i<=n; i++)
	{
	if(i<0) l=-i;
	else l=i;
		for(j=0,f=1; j<2*(n-l)+1; j++)
		{
		if(f)		
		printf("%d",n-l+1);
		else 
		printf("*");
		f=!f;
		}	
	    printf("\n");
	}
}
