#include<stdio.h>
int main()
{
int i,j,s,n;
printf("Enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j<=n-i)
printf("  ");
else
printf("* ");
}
printf("\n");
}
}
