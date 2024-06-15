#include <stdio.h>
int main()
{
int a, i;
printf("Enter a number: ");
scanf("%d",&a);
for(i = a-1;i > 0;i--)
{
a *= i;
}
printf("%d ",a);
return 0;
}
