#include<stdio.h>
int main()
{
char c;
printf("Enter the alphabet:");
scanf("%c",&c);
if((c>='A')&&(c<='Z'))
printf("%c is Upper case\n",c);
else if((c>='a')&&(c<='z'))
printf("%c is lower case\n",c);
else 
printf("Other symbols\\characters\n");
}
