#include <stdio.h>
int main()
{
int j, i;
for(i =69 ; i >= 65; i--)
{
for(j = 69; j >= i; j--)
{
printf("%c ", j);
}
printf("\n");
}for(i = 65; i <= 69; i++)
{
for(j = 69; j >= i; j--)
{
printf("%c ", j);
}
printf("\n");
}
return 0;
}
