#include<stdio.h>
int main()
{
int a[30];
int i,j,k,n,f,r,s;
printf("Enter no of array elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);
printf("Prime number in an array\n");
for(i=0;i<n;i++)
	{
	for(j=2;j<a[i];j++)
		{
		if(a[i]%j==0)
		break;
		}
	if(j==a[i])
	printf("%d ",a[i]);
	}
printf("\n");
}
