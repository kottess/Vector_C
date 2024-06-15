#include<stdio.h>
int main()
{
char c;
printf("Enter any alphabet:");
scanf("%c",&c);
if((c>='A')&&(c<='Z'))
printf("Lower case is %c\n",c+32);
else if((c>='a')&&(c<='z'))
printf("Upper case is %c\n",c-32);
}
