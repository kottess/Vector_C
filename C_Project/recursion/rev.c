#include<stdio.h>
int *rev(int *,int,int);
int main()
{
int a[10],n,i,j;
n=sizeof a/sizeof a[0];
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

int *r=rev(a,0,n-1);

printf("After Reversing\n");
for(i=0;i<n;i++)
printf("%d ",r[i]);
printf("\n");

}
int *rev(int *a,int i,int j)
{
int temp;
if(i<j)
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
i++; j--;
return rev(a,i,j);
}
return a;
}
