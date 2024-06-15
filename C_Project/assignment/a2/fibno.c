#include<stdio.h>
int main()
{
int i,a=0,b=1,c;
for(c=0;c<=50;)
{
printf(" %d ",c);
a=b;
b=c;
c=a+b;
}
printf("\n");
}
