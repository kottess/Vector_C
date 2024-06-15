//print the string in reverse
#include<stdio.h>
int main()
{
char a[50];
int i,n;
printf("Enter the string:");
scanf("%[^\n]",a);
printf("%s\n",a);
for(n=0;a[n];n++);
for(i=n-1;i>=0;i--)
{
printf("%c",a[i]);
}
printf("\n");
}
