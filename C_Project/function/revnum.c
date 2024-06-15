#include<stdio.h>
int rev(int);
int main()
{
int n,r;
printf("Enter the number\n");
scanf("%d",&n);
r=rev(n);
printf("Reversed num is %d\n",r);
}
int rev(int n)
{
int s=0;
while(n!=0)
{
s=s*10+(n%10);
n/=10;
}
return s;
}

