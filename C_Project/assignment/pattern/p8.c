#include<stdio.h>
int main()
{
  int i,j,k,n;
printf("Enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1,k=i;j<=i;j++)
{
printf("%d ", k);
k += n-j;
}
printf("\n");
}
}
