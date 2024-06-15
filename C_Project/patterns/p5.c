#include<stdio.h>
int main()
{
int i,j,k,c=80;
for(i=1;i<=5;i++)
{
for(j=1;j<=c/2-i;j++)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("%d",k);
}
printf("\n");
}
}
