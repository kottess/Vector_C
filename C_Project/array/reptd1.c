#include<stdio.h>
int main()
{
int s[10],d1[10],d2[10];		 
int i,j,n,k;		
n=sizeof s/sizeof s[0];

printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d ",s+i);
printf("\n");
printf("Repeated elements are:\n");
for(i=0; i<n; i++)
{
for(j=0; j<i; j++)
{
if(s[i]==s[j])
{
for(k=0;k<i;k++)
d2[k]=s[i];
break;
}}

if(j!=i)
{
for(k=0;k<i;k++)
d1[k]=s[i];
continue;
}
}
printf("\n");
}
