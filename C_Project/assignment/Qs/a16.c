#include<stdio.h>
int main()
{
char a[50],temp;
int i,j,n;
printf("Enter the string\n");
scanf(" %[^\n]",a);
for(n=0;a[n];n++);

for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

for(i=0;a[i];i++)
{
	if(a[i]==a[i+1])
	{
		for(j=i;j<n;j++)
		a[j]=a[j+1];
		i--;
	}
}
printf("%s\n",a);
}
