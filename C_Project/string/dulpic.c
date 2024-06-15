#include<stdio.h>
int main()
{
char a[40];
int i,n,j,k;
printf("Enter the string\n");
scanf("%s",a);
for(n=0;a[n];n++);
for(i=0;a[i];i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n;k++)
a[k]=a[k+1];
n--;j--;
}
}
}
printf("%s\n",a);

}
