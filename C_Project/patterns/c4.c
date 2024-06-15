#include<stdio.h>
int main()
{
int a, i, j, k, p = 1, n, m = 0;
for(a = 1;a < 6;a++)
{
for(i = a;i < 5;i++)
{
printf(" ");
}
for(j = 1;j < 2;j++)
{
printf("*");
}
for(k = 1;k < m;k++)
{
printf(" ");
}
m = m + 2;
for(n = 1;n < p;n++)
{
printf("*");
}
p = 2;
printf("\n");
}
p = 1;
m = 5;
for(a = 1;a < 5;a++)
{
for(i = 0;i < a;i++)
{
printf(" ");
}
for(j = 1;j < 2;j++)
{
printf("*");
}
for(k = m;k > 0;k--)
{
printf(" ");
}
m = m - 2;
for(n = 1;n < 2;n++)
{
if(a == 4)
break;
printf("*");
}
printf("\n");
}
return 0;
}
