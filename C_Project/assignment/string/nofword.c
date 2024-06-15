#include<stdio.h>
int main()
{
char a[40];
int i,c=1;
printf("Enter the string\n");
scanf("%[^\n]",a);
for(i=0;a[i];i++)
{
if(a[i]==' ')
c++;
}
printf("no of words %d\n",c);
}
