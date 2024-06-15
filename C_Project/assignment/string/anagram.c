#include<stdio.h>
int main()
{
char a[30],b[30],temp;
int i,j,n,n1,s=0,c=0;
printf("Enter the 1st string\n");
scanf("%[^\n]",a);
printf("Enter the 2nd string\n");
scanf(" %[^\n]",b);
for(n=0;a[n];n++);
for(n1=0;b[n1];n1++);
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	}
}
for(i=0;a[i];i++)
{
	if(a[i]==' ')
	s++;
}

for(i=0;i<n1-1;i++)
{
	for(j=0;j<n1-1-i;j++)
	{
		if(b[j]>b[j+1])
		{
		temp=b[j];
		b[j]=b[j+1];
		b[j+1]=temp;
		}
	}
}

i=0;
while(a[i]==' ')
{
	i++;
}

j=0;
while(b[j]==' ')
{
	j++;
}

n=n-s;

for(;a[i]&&b[j];j++)
{
	if(((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))&&((b[j]>='a'&&b[j]<='z')||(b[j]>='A'&&b[j]<='Z')))
	{
		if(a[i]==b[j])
		{
		c++;
		i++;
		}
	}
}

if(c==n)
printf("it's an anagram\n");
else 
printf("not an anagram\n");

}

