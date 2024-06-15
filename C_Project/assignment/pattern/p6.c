#include<stdio.h>
int main()
{
	int i,j,n,f;
printf("Enter the n value:");
scanf("%d",&n);
	for(i=0; i<n; i++)
	{
	for(j=0,f=1; j<i+1; j++)
	{
	if(f)	
	printf("1");
	else
	printf("0");
	f=!f;	
	}	
printf("\n");
	}
}
