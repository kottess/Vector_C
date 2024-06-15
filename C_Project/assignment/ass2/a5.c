#include<stdio.h>
int main()
{
int a[30],b[30],j,i,n,c=0;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

for(i=0,j=0;i<n;i+=2)
{
b[j++]=a[i];
c++;
}

printf("Alternate array elements\n");
for(i=0;i<c;i++)
printf("%d ",b[i]);
printf("\n");
}
