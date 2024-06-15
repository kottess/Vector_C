#include<stdio.h>
int main()
{
int n,i,j,s;
printf("Enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n+i;j++)
//for(j=n+i;j>0;j--)
{
if(j<n-i-1)
printf("  ");
else
printf("%d ",j);
}
printf("\n");
}}

