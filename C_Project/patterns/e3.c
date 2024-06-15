#include<stdio.h>
int main()
{
int i,j,s,n,k;
printf("enter the n value:");
scanf("%d",&n);
k=n;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==0||i==n-1)
{
printf("*");
continue;
}
if(j==0||j==n-1)
printf("*");
else 
printf(" ");
}
printf("\n");
}
}
