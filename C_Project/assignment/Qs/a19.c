#include<stdio.h>
int main()
{
int a[50],b[50],c[50];
int i,j,e=0,o=0,r,temp;
printf("Enter the array size\n");
scanf("%d",&r);
printf("Enter the array elements\n");
for(i=0;i<r;i++)
	scanf("%d",a+i);
for(i=0;i<r;i++)
{
	if(a[i]%2==0)
	b[e++]=a[i];
	else
	c[o++]=a[i];
}

for(i=0;i<e-1;i++)
{
	for(j=0;j<e-1-i;j++)
	{
		if(b[j]>b[j+1])
		{
			temp=b[j];
			b[j]=b[j+1];
			b[j+1]=temp;
		}
	}
}

printf("Even elements\n");
for(i=0;i<e;i++)
	printf("%d ",b[i]);
printf("\n");

for(i=0;i<o-1;i++)
{
	for(j=0;j<o-1-i;j++)
	{
		if(c[j]>c[j+1])
		{
			temp=c[j];
			c[j]=c[j+1];
			c[j+1]=temp;
		}
	}
}

printf("Odd elements\n");
for(i=0;i<o;i++)
	printf("%d ",c[i]);
printf("\n");
}
