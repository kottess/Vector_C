#include<stdio.h>
int main()
{       
int n,i,j,l,f;
printf("enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0,f=1;j<n+i;j++)
{
if(j<n-i-1)
printf("  ");
else 
{ 
if(f)
printf("A ");
else printf("* ");
f=!f;
} }      
printf("\n");
}
}
