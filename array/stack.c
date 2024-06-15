#include<stdio.h>
int main()
{
int a[10]={0};
int i,n,p;
char c;
do
{
printf("Enter 1 for push & 2 for pop\n");
scanf("%d",&n);
for(i=0;a[i];i++);
if(n==1)
{
printf("Enter the element\n");
scanf("%d\n",&p);
a[i]=p;
}
else if(n==2)
a[i-1]=0;

printf("Do u want to continue Y/N \n");
scanf(" %c",&c);
}
while((c=='y')||(c=='Y'));
for(i=0;a[i];i++)
printf("%d ",a[i]);
printf("\n");
}
