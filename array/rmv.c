#include<stdio.h>
int main()
{
int a[10]={10,20,30,40,70,50,60,70};
int i,n,pos,ele;
n=sizeof a/sizeof a[0];
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

printf("Enter the position:\n");
scanf("%d",&pos);

if(!((pos>=0)&&(pos<n)))
{
printf("invalid position..\n");
return 0;
}

for(i=pos;i<n;i++)
{
a[i]=a[i+1];
a[n-1]=0;
}

printf("After deleting the element:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
