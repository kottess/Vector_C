#include <stdio.h>
int main()
{
int i,j;
int k=0;
/*Run parent loop*/
for(i=5; i>=1; i--)
{
/*Print space*/
for(j=1; j<=k; j++)
printf(" ");
/*Run loop to print first part of row*/
for(j=1; j<=i; j++)
printf("%d",j);
/*Run loop to print second part of row*/
for(j=i-1; j>=1; j--)
printf("%d",j);

printf("\n");
k++;
}
return 0;
}
