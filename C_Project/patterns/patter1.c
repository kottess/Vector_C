#include <stdio.h>
int main()
{
int i,j,k;
/*Run parent loop*/
for(i=0; i<5; i++)
{
for(j=0, k='A'; j<5-i; j++,k++)
{
printf("%d%c",j+1,k);
}
printf("\n");
}
return 0;
}
