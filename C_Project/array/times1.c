#include<stdio.h>
int main()
{
int a[10];		 
int i,j,n,c;		
n=sizeof a/sizeof a[0];
printf("Enter the array elemnts\n");
for(i=0; i<n; i++)
scanf("%d",a+i);
for(i=0; i<n; i++)
printf("%d ",a[i]);
printf("\n");
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
if(c>=2)
printf(" %d--> %d times \n",a[i],c);
}	
}
