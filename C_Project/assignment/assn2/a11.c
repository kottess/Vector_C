#include<stdio.h>
int arrsum(int *,int,int);
static int n;
int main()
{
int a[20],i;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);
int r=arrsum(a,0,0);
printf("Sum of array elements: %d\n",r);
}

int arrsum(int *p,int i,int s)
{
if(i<n)
{
	s+=p[i];
	i++;
	return arrsum(p,i,s);
}
return s;
}
