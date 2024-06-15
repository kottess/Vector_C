#include<stdio.h>
int main()
{
int i,l,j,c,n;
char ch='A';
printf("Enter the n value:");
scanf("%d",&n);
ch=ch+n;
for(i=-n;i<=n;i++)
{
for(j=-n;j<=n;j++)
{
if(i<0) l=-i;
else l=i;
if((-(n-l)<j)&&(j<(n-l)))
printf("  ");
else
{
if(j<0)
printf("%c ",ch+j);
else
printf("%c ",ch-j);
}
}
printf("\n");
}
}

