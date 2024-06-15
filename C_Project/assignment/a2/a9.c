#include<stdio.h>
int main()
{
int a=1,c=10;

do{
c=a>=0;
}while(!(a==0||c==a));
printf("%d %d",a,c);
}

