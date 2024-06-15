#include<stdio.h>
int main()
{
int a[10],n,i,big,small;
n=sizeof a/sizeof a[0];
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
scanf("%d",a+i);
big=small=a[0];
for(i=0;i<n;i++)
{
if(big<a[i])
big=a[i];
if(small>a[i])
small=a[i];
}
printf("smll-%d\n",small);
printf("big-%d\n",big);
}
