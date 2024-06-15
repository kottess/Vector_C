#include<stdio.h>
int main()
{
int a[30],i,j,n,temp;
printf("Enter  no of elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
	scanf("%d",a+i);
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
	
}
printf("Sorted elements\n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
}
