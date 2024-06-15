#include<stdio.h>
int prop(int,int,int);
int main()
{
int n,i;
printf("Enter the number\n");
scanf("%d",&n);
printf("Proper divisor of %d:\n",n);
int r=prop(n,1,0);
printf("sum of divisors :%d\n",r);
}
int prop(int n,int i,int s)
{
if(i<n)
{
if(n%i==0)
{
printf("%d ",i);
s+=i;
}
i++;
return prop(n,i,s);
}
return s;
}
