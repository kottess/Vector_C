#include<stdio.h>
int main()
{
int i,j,c,n;
c=1;
printf("Enter the n value:");
scanf("%d",&n);
c=c+n;
for(i=0;i<n;i++)
{
for(j=-n;j<=n;j++)
{
if((-(n-i)<j)&&(j<(n-i)&&(j!=0)))
printf("  ");
else 
{
if(j<0)
printf("%d ",c+j);
else if(j>0)
printf("%d ",c-j);
}
}
printf("\n");
}
}
