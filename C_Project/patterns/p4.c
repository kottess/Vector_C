#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
for(j=i;j<=5;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
//printf(" * ");

//printf(" %d ",i);
//printf(" %d ",j);
printf(" %d ",k);
}
printf("\n");
}
}
