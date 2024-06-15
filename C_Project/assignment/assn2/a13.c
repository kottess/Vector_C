#include<stdio.h>
int main()
{
int a[10],b[10],c[30],i,j,n,n1;
printf("Enter no of elements array\n");
scanf("%d %d",&n,&n1);
printf("Enter the 1st array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);
printf("Enter the 2nd array elements\n");
for(i=0;i<n1;i++)
scanf("%d",b+i);

for(i=0;i<n;i++)
c[i]=a[i];
for(j=0;j<n1;i++,j++)
c[i]=b[j];

printf("Merge of two array\n");
for(i=0;i<n+n1;i++)
printf("%d ",c[i]);
printf("\n");
}
