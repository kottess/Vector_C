#include <stdio.h>
int main()
{
int num, a;
printf("Enter a number to check if it is prime : ");
scanf("%d",&num);
for ( a = 2;a <= num-1;a++ )
{
if ( num%a == 0 )
{
printf("%d is not a prime number\n", num);
break;
}
}
if ( a == num )
printf("%d is a prime number",num);
return 0;
}
