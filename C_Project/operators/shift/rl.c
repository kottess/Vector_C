#include<stdio.h>
int main()
{
int n,p;
char c;
abc:
printf("Enter the number and pos:\n");
scanf("%d %d",&n,&p);
printf("Right shift : %d\n",n >> p);
printf("Left Shift : %d\n",n << p);
printf("do u want to continue(y/n):\n");
scanf(" %c",&c);
if(c=='y'|| c=='Y')
goto abc;
return(0);
}
