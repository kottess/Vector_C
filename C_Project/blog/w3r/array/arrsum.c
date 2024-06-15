#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	int a[n],i,sum=0;
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n;i++)
		sum+=a[i];
	printf("Sum of array elements\n");
	printf("%d\n",sum);
}
