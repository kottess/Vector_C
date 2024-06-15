#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number:");
scanf("%d",&n);
((n&7))?printf("%d is divisibly by 8\n",n):printf("%d is not divisible by 8",n);
//(((n>>3)<<3)==n)?printf("%d is divisibly by 8\n",n):printf("%d is not divisible by 8",n);
}
