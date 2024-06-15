#include<stdio.h>
int main()
{
int a[3][3],b[3][3],m[3][3];
int i,j,k,r,c;
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
{
m[i][j]=0;
for(k=0;k<c;k++)
m[i][j]+=a[i][k]*b[k][j];
}
}

printf("matrix addition\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%5d",m[i][j]);
printf("\n");
}
}
