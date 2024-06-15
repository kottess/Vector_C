#include<stdio.h>
 
int main() 
{ 
    int i,n, k , p ,e; 
printf("Enter the number\n");
scanf("%d",&n);
for(i=31;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");

printf("Enter the position\n");
scanf("%d",&p);

printf("Enter bit to extract\n");
scanf("%d",&k);

e=(((1 << k) - 1) & (n >> (p - 1)));    

printf("The extracted number is %d\n",e); 
for(i=k-1;i>=0;i--)
printf("%d",e>>i&1);
printf("\n");
} 
