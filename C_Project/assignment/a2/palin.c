#include<stdio.h>
int main()
{
int s,n,t;
printf("Palindrome numbers from 1 to 1000:\n");
for(n=1;n<=1000;n++)
{
t=n;
for(s=0;n!=0;)
{
s=s*10+(n%10);
n/=10;
}
n=t;
if(s==t)
printf("%d ",n);
}printf("\n");
}
