#include<stdio.h>
int main()
{
	int i,n,p;
	char c,a[10]={'b','c','d','e','f','g','h','i'};
	n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
		printf("%c ",a[i]);
	printf("\n");
	printf("Enter the character to insert\n");
	scanf(" %c",&c);
	printf("Enter the position\n");
	scanf("%d",&p);
	for(i=n-1;i>=p;i--)
		a[i]=a[i-1];
	a[--p]=c;
	for(i=0;i<n;i++)
		printf("%c ",a[i]);
	printf("\n");
}
