#include<stdio.h>
int main()
{
int a[10];
int i,n,p;
printf("Enter the elements:");
for(i=0;i<10;i++)
{
scanf("%d",a+i);
printf("%d ",a[i]);
}
printf("\n");     
printf("Enter the element to find : ");
scanf("%d",&p);
for(i=0; i<10; i++)
{
if(a[i]==p)
{
printf("Element found in position %d\n",i);
break;
}
}
if(i==n) 
printf("Element not present\n");
}
