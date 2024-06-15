#include <stdio.h>
int main()
{
int i,j,s,n;

/*Run parent loop*/
for(i=0; i<n; i++)
{
/*Print space*/
for(s=0; s<i; s++)
printf(" ");
/*Run loop to print first part of row*/
for(j=0; j<n-i; j++)
printf("*");
printf("\n");
}
/*Run loop to print second part of row*/
for(i=0; i<n; i++)
{
for(j=0; j<n-i; j++)
printf("*");
printf("\n");
}
}
