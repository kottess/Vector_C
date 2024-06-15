//count the character how many times it present
#include<stdio.h>
int main()
{
char a[50],c;
int i,j,n,count;
printf("Enter the string:");
scanf("%[^\n]",a);
printf("%s\n",a);
for(n=0;a[n];n++);
for(i=0,c=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(a[i]==a[j])
break;
}
if(j!=i)
continue;
for(j=i+1,count=1;j<n;j++)
{
if(a[i]==a[j])
count++;
}
printf("%c --->%d times\n",a[i],count);
} 
}
