#include<stdio.h>
void fib(int,int,int);
static int n;
int main()
{
printf("Enter the limit\n");
scanf("%d",&n);
fib(0,1,0);
printf("\n");
}
void fib(int a,int b,int c)
{
if(c<=n)
{
printf("%d ",c);
a=b;
b=c;
c=a+b;
fib(a,b,c);
}
}
