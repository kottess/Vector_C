#include<stdio.h>
int rev_num(int,int);
int main()
{
int n;
printf("Enter the number\n");
scanf("%d",&n);
int r=rev_num(n,0);
printf("%d\n",r);
}
int rev_num(int n,int s)
{
if(n!=0)
{
s=s*10+(n%10);
n/=10;
return rev_num(n,s);
}
else
return s;
}
