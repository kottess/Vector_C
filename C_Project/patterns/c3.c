#include <stdio.h>
int main()
{
int s, i, j;
for(i = 5;i >= 1;i--)
{
for(s= i;s <= 5;s++)
{
printf("%d", i);
}
for(j = i-1;j >= 1;j--)
{
printf("5");
}
printf("\n");
}
return 0;
}
