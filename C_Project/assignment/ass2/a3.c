#include<stdio.h>
int main()
{
int i,n,s,c=1;
printf("Even Palindrome from 101\n");

for(i=101;c<6;i++)
{
n=i;s=0;
while(n!=0)
{
s=s*10+(n%10);
n/=10;
}
if(s==i)
{
if(i%2==0)
{
printf("%d ",i);
c++;
}
}
}
printf("\n");
}
