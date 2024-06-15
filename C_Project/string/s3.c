//palindrome 
#include<stdio.h>
int main()
{
char a[50];
int i,j,n,flag=0;
printf("Enter the string:");
scanf("%[^\n]",a);
printf("%s\n",a);
for(n=0;a[n];n++);
for(i=0;i<n;i++)
	{
	if(a[i]!=a[n-i-1])
	{ 
	flag=1;
	break;
	}
	}
if(flag==0)
printf("It is a palindrome:\n");
else 
printf("It is not a palindrome:\n");
}
