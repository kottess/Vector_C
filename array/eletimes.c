#include<stdio.h>
int main()
{
int a[10];
int i,n,p,c;
printf("Enter the elements:");
for(i=0;i<10;i++)
{
scanf("%d",a+i);
printf("%d ",a[i]);
}
printf("\n");     
printf("Enter the element to find : ");
scanf("%d",&p);
for(i=0,c=0; i<10; i++)
{
if(a[i]==p)
{
c++;
}
}
printf("Element found %d times\n",c);
}
