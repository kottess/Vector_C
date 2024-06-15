#include<stdio.h>
int main()
{
int i,j,s,n;
printf("enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(s=1;s<=n-i;s++)
printf(" ");
for(j=1;j<=n;j++)
printf("* ");
printf("\n");
}
}
