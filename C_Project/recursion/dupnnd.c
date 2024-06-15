#include<stdio.h>
int main()
{
int a[10],i,j,k,n,d=0,l=0,c[10]={0},b[10]={0};
n=sizeof a/sizeof a[0];
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);	
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c[l++]=a[j];
d++;
for(k=j;k<n;k++)
a[k]=a[k+1];
n--;
j--;
}
}
}
printf("without duplicate\n");
for(i=0;i<n;i++)
printf("%d ",b[i]);
printf("\n");
printf("Duplicate\n");
for(i=0;i<d;i++)
printf("%d ",c[i]);
printf("\n");

}
