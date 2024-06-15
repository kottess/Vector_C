#include<stdio.h>
int main()
{
int n,i,j,s;
printf("Enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(s=0;s<n-i-1;s++)
printf("  ");
for(j=1;j<=2*i+1;j++)
printf("%d ",j);
printf("\n");
}}

