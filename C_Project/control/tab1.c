#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the number for table 1 to : ");
scanf("%d",&n);
printf("Multiplication table from 1 t0 %d\n",n);
for(i=0;i<=10;i++)
{
for(j=1;j<=n;j++)
{
if(j<=n-1)
printf("%d*%d= %d\t  ",j,i,i*j);
else
printf("%d*%d= %d",j,i,i*j);

}
printf("\n");
}}
