#include<stdio.h>
int main()
{
int a[10],n,i,j,temp;
n=sizeof a/sizeof a[0];
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);
printf("Before Reversing\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
for(i=0,j=n-1;i<j;i++,j--)
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
printf("After Reversing\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
