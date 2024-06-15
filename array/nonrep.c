#include<stdio.h>
int main()
{
int a[10];		 
int i,j,n;		
n=sizeof a/sizeof a[0];

printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d ",a+i);
}
printf("\n");

printf("Non repeated elements are:\n");
for(i=0; i<n; i++)
{
for(j=0; j<i; j++)
{
if(a[i]==a[j])
break;
}
if(j!=i)
continue;

for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
break;
}
if(j==n)
printf(" %d ",a[i]);
}	
printf("\n");
}
