#include<stdio.h>
int main()
{
int a[20],b[20],c[30];
int i,j,n,n1,l;
printf("Enter the 1st array size\n");
scanf("%d",&n);

printf("Enter 1st array elements\n");
for(i=0;i<n;i++)
	scanf("%d",a+i);

printf("Enter the 2nd array size\n");
scanf("%d",&n1);

printf("Enter 2nd array elements\n");
for(i=0;i<n1;i++)
	scanf("%d",b+i);

l=n+n1;
for(i=0;i<l&&a[i];i++)
{
	c[i]=a[i];
}
for(j=0;(i<l)&&b[j];i++,j++)
{
	c[i]=b[j];
}

printf("merged array\n");
for(i=0;c[i];i++)
	printf("%d ",c[i]);
printf("\n");
}
