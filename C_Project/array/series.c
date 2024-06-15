#include<stdio.h>
int main()
{
int i,j,n,s,sum=0,a[10];
s=sizeof a/sizeof a[0];
printf("Enter the n value\n");
scanf("%d",&n);
for(i=0,j=1;j<=n;i++,j++)
a[i]=(j*j);

printf("Array series\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<n;i++)
sum=sum+a[i];
printf("sum is %d\n",sum);


}
