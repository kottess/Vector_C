#include<stdio.h>
int sum(int n)
{
int s=0;
while(s+=(n%10),n/=10,n!=0);
return s;
}
int main()
{
int n,s;
printf("Enter the number\n");
scanf("%d",&n);
s=sum(n);
printf("%d\n",s);
}
