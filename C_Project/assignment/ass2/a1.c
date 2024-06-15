#include<stdio.h>
int main()
{
int i,j,n,n1=0;
char *p=(char *)&n;
printf("Enter the number\n");
scanf("%d",&n);
printf("Little endian format\n");
for(i=31;i>=0;i--)
{
printf("%d",n>>i&1);
if(i%8==0)
printf(" ");
}
printf("\n");

printf("Big endian format\n");
for(i=0;i<4;i++)
{
for(j=7;j>=0;j--)
printf("%d",*p>>j&1);
printf(" ");
p++;
}
printf("\n");
}
