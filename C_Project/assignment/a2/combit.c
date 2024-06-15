#include<stdio.h>
int main()
{
int n,p,i;
printf("Enter the number:");
scanf("%d",&n);
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
printf("enter the position:");
scanf("%d",&p);
n=n^(1<<p);
printf("After complementing a particular bit:\n");
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
printf("%d\n",n);
}
