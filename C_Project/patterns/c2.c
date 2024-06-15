#include <stdio.h>
int main()
{
int j, i = 1, k;
for(i = 1; i <= 5; i++)
{
k = i;
for(j = 1; j <= i; j++)
{
if(k % 2 == 0)
{
printf("0");
k++;
}
else
{
printf("1");
k++;
}
}
printf("\n");
}
return 0;
}
