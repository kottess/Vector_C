#include<stdio.h>
int main()
{
int a[20],n,i,j,temp;
printf("Enter the no of array elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
	scanf("%d",a+i);

for(i=0,j=n-1;i<j;i++,j--)
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

printf("Reversed array elements\n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
}

