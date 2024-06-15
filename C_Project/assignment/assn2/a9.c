#include<stdio.h>
int main()
{
int i,j,k,l,c=0;
char a[40],b[40];
printf("Enter 1st string\n");
scanf("%[^\n]",a);
printf("Enter 2nd string\n");
scanf(" %[^\n]",b);

for(i=0;a[i];i++)
{
	if(!((a[i]>='a')&&(a[i]<='z')||(a[i]>='A')&&(a[i]<='Z')))
	{
		for(j=i;a[j];j++)
		{
			a[j]=a[j+1];
		}
		a[j]='\0';
		i--;
	}
}

for(i=0;b[i];i++)
{
	if(!((b[i]>='a')&&(b[i]<='z')||(b[i]>='A')&&(b[i]<='Z')))
	{	
		for(j=i;b[j];j++)
		{
			b[j]=b[j+1];
		}
		b[j]='\0';
		i--;
	}
}

for(i=0;a[i];i++);
for(j=0;b[j];j++);

for(k=0;a[k];k++)
{
	for(l=0;b[l];l++)
	{
		if(a[k]==b[l])
		{
			c++;
			break;
		}
	}
}

if(i==j)
{
	if(i==c)
	printf("It is an anagram\n");
	else
	printf("It is not an anagram\n");
}
}
