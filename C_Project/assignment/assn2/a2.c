#include<stdio.h>
int main()
{
int n,t,s=0;
printf("Enter the number\n");
scanf("%d",&n);
t=n;
while(n!=0)
{
	s=s*10+(n%10);
	n/=10;
}
n=t;
if(n==s)
printf("%d is palindrome\n",n);
else
printf("%d is not a palindrome\n",n);
}
