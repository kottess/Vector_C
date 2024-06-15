#include<stdio.h>
int main()
{
int x,y,i;
printf("Enter the number:");
scanf("%d",&x);
y=~x;
printf("The binary value is:");
for(i=31;i>=0;i--)
printf("%d",y>>i&1);
printf("\n");
printf("The decimal value is:%d\n",y);
printf("The octal value is:%o\n",y);
printf("The hexa value is:%x\n",y);
}
