//to reverse the string
#include<stdio.h>
int main()
{
char a[20],b[20];
int i,n,e;
printf("Enter the string:");
scanf("%[^\n]",a);
printf("%s\n",a);
for(n=0;a[n];n++);
e=n-1;
for(i=0;i<n;i++)
	{ 
	b[i]=a[e];	
	e--;	
	}
b[i]='\0';
printf("%s\n",b);
}
