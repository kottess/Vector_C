#include<stdio.h>
int main()
{
int a[30],j,i,n;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		a[i]=' ';
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			for(j=i;j<n-1;j++)
				a[j]=a[j+1];
		}
	}
printf("Alternate array elements\n");
	if(n%2==0)
		n/=2;
	else
	{
		n/=2;
		n+=1;
	}
for(i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
}
