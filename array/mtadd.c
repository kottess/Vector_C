#include<stdio.h>
int main()
{
int a[3][3],b[3][3],s[3][3];
int i,j,r,c;
r=sizeof a/sizeof a[0];
c=sizeof a[0]/sizeof a[0][0];
printf("Enter the 1st matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
printf("Enter the 2nd matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
s[i][j]=a[i][j]+b[i][j];
}
printf("matrix addition\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%5d",s[i][j]);
printf("\n");
}
}
