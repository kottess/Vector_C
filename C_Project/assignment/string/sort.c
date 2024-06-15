#include<stdio.h>
int main()
{
char a[40],temp;
int i,j,n;
printf("Enter the string\n");
scanf("%s",a);
for(n=0;a[n];n++);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("%s\n",a);

}
