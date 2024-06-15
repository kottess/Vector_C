#include<stdio.h>
int main()
{
char a[40];
int n,i,j;
printf("Enter the string\n");
scanf("%s",a);
for(n=0;a[n];n++);
j=n-1;
for(i=0,j;a[i];i++,j--)
{
if(a[i]!=a[j])
break;
}
if(i==n)
printf("palindrome\n");
else 
printf("not palindrome\n");

}
