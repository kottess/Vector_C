#include<stdio.h>
int main()
{
int a[30];
int i,j,k,n,f,r,s;
printf("Enter no of array elements\n");
scanf("%d",&n);
printf("Enter the array elements\n");

	for(i=0;i<n;i++)
		scanf("%d",a+i);

printf("Strong number in an array\n");

	for(i=0;i<n;i++)
	{
		s=0,j=a[i];
		while(j!=0)
		{
			r=j%10;
			for(k=r,f=1;k!=0;k--)
			{
				f=f*k;
			}
			s=s+f;
			j/=10;
		}
		if(a[i]!=0)
		if(s==a[i])
		printf("%d ",a[i]);
	}
printf("\n");
}
