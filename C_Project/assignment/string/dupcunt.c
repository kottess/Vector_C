#include<stdio.h>
int main()
{
char a[50];
int i,n,j,c;
printf("Enter the string\n");
scanf("%s",a);
for(n=0;a[n];n++);
for(i=0;a[i];i++)
{
for(j=0;j<i;j++)
{
if(a[i]==a[j])
break;
}
if(i!=j)
continue;
for(j=i+1,c=1;a[j];j++)
{
if(a[i]==a[j])
c++;
}
if(c>1)
printf("%c-->%d times\n",a[i],c);
}
}
