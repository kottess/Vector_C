#include<stdio.h>
int main()
{       
int n,i,j,l,k;
printf("enter the n value:");
scanf("%d",&n);
for(i=-n;i<=n;i++)
{
if(i<0) l=-i;
else l=i;
for(j=0,k=5;j<n+1;j++)
{
if(j<n-l)
printf(" ");
else 
printf("%d ",k);
k--;
}       
printf("\n");
}
}
