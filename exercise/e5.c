#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number\n");
scanf("%d",&n);
for(i=31;i>=0;i--)
{
printf("%d",n>>i&1);
if(i%8==0)
printf(" ");
}
printf("\n");
}
