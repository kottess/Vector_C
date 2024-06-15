#include<stdio.h>
int main()
{
int i, j, s, n;
printf("Enter a number : ");
scanf("%d", &n);
printf("\n");
for(i = n; i >= 1; i--)
{
for(s = n-i; s >= 1; s--)
{
printf(" ");
}
for(j = (2 * i - 1); j >=1 ; j--)
{
if(i==n || j == 1 || j == (2*i-1))
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
