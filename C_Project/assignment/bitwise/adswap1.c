#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter Number\n");
scanf("%x",&n);
for(i=31;i>=0;i--)
{
printf("%d",n >> i & 1);
if(i%8==0)
printf(" ");
}
printf("\n");
for(i=0,j=24;i<=7;i++,j++)
{
if( (n >> i & 1) != (n >> j & 1))
{
n = n ^ 1 << i;
n = n ^ 1 << j;
}
}
for(i=16,j=8;i<=23;i++,j++)
{
if( (n >> i & 1) != (n >> j & 1))
{
n = n ^ 1 << i;
n = n ^ 1 << j;
}
}
for(i=31;i>=0;i--)
{
printf("%d",n >> i & 1);
if(i%8==0)
printf(" ");
}
printf("\n");
printf("%x\n",n);
}
