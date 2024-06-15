#include<stdio.h>
int main()
{
char a[40],b[40];
int n,n1,i,j,c=0,f;
printf("Enter the string\n");
scanf("%[^\n]",a);
printf("Enter the sub-string\n");
scanf("%s",b);
for(n=0;a[n];n++);
for(n1=0;b[n1];n1++);

for(i=0;i<=n-n1;i++)
{
f=1;
for(j=0;j<n1;j++)
{
if(a[i+j]!=b[j])
{
f=0;
break;
}
}

if(f==1)
c++;
}
printf("substring present %d times\n",c);
}
