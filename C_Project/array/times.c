#include<stdio.h>
int main()
{
int a[] = {1,2,1,4,1,4,6,7};		 
int i,j,n,c;		
n=sizeof a/sizeof a[0];
for(i=0; i<n; i++)
{
for(j=0; j<i; j++)
{
if(a[i]==a[j])
break;
}
if(j!=i)
continue;
for(j=i+1,c=1;j<n;j++)
{
if(a[i]==a[j])
c++;
}
printf(" %d is occur %d times \n",a[i],c);
}	
}
