#include<stdio.h>
int main()
{
int i,j,s,n,k;
printf("Enter value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1,k=1;j<=n+i-1;j++)
{
if(j<=n-i)
printf("  ");
else
printf("%d ",k++);
}printf("\n");
}

}
