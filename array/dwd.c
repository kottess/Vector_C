#include<stdio.h>
int main()
{
int a[10],b[10]={0},c[10]={0};		 
int i,j,n,k,l=0;		
n=sizeof a/sizeof a[0];

printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d ",a+i);
printf("\n");
printf("Repeated elements are:\n");
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
{
c[l++]=a[j];
for(k=j;k<n;k++)
a[k]=a[k+1];
n--;
j--;
}
}	
}
for(i=0; i<n; i++)
printf("%d ",a[i]);
printf("\n");
for(i=0; c[i]; i++)
printf("%d ",c[i]);
printf("\n");

}
