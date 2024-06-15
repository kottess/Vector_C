#include<stdio.h>
int smll(int *,int,int,int);
int main()
{
int a[10],i,s,n;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);
s=a[0];
int r=smll(a,s,1,n);
printf("smallest element in array: %d\n",r);

}
int smll(int *p,int s,int i,int n)
{
if(i<n)
{
if(s>p[i])
s=p[i];
i++;
return smll(p,s,i,n);
}
return s;
}

