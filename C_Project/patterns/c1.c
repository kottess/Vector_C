#include <stdio.h>
int main()
{
int j, i, k = 1;
for(i = 1;i < 5;i++)
{
for(j = 1; j<= i;j++)
{
printf("%d ", k++);
}
printf("\n");
}
return 0;
}
