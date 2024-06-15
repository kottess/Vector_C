#include<stdio.h>
int main()
{
	int i,n,p,c,a[]={10,20,30,40,50,60,70,80};
	n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter the number to insert\n");
	scanf("%d",&c);
	printf("Enter the position\n");
	scanf("%d",&p);
	for(i=n-1;i>=p;i--)
		a[i+1]=a[i];
	a[p]=c;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
