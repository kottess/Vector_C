#include <stdio.h>
void main()
{
   int j,i,n;
   printf("Multiplication table from 10 to 20\n");
   for(i=10;i<=20;i++)
   {
     for(j=1;j<=10;j++)
     {
           printf("%d * %d = %d\n",i,j,i*j);
             } 
printf("\n");
     }
} 

