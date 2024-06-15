#include<stdio.h>
int main()
{
int a[10]={10,20,10,30,40,50,60,70};
int i,n,ele,abc;
n=sizeof a/sizeof a[0];
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

printf("Enter the element:\n");
scanf("%d",&ele);

for(i=0;i<n;i++)
{
if(a[i]==ele)
{	
for(i;i<n;i++)
{
a[i]=a[i+1];
a[n-1]=0;
}
}

}
printf("After deleting the element:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
