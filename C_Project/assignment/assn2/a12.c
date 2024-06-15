#include<stdio.h>
int main()
{
int a[20],i,n,e=0,o=0;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

for(i=0;i<n;i++)
{
	if(a[i]%2==0)
		e++;
	else
		o++;
}
printf("No of Even elements:%d \nNo of Odd elements:%d\n",e,o);
}
