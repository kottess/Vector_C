#include<stdio.h>
int main()
{
int i,j,s,n,k;
printf("enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<i+1;j++)
printf("*");
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
printf("*");
printf("\n");
}
}
