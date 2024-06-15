//to reverse the string
#include<stdio.h>
int main()
{
char a[50];
int i,n,j,temp=0;
printf("Enter the string:");
scanf(" %[^\n]",a);
printf("%s\n",a);
for(n=0;a[n];n++);
for(i=0,j<n-1;i<j;i++,j--)
	{ 
if(a[i]==a[j])
continue;
else if(a[i]!=a[j])
temp=a[i];
a[i]=a[j];
a[j]=temp;
}	
printf("%s\n",a);
}
