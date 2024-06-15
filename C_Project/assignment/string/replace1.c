#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[50],c[50];
int i,j,k,l,m,ls1,ls2;
printf("Enter the string\n");
scanf("%[^\n]",a);
printf("Enter the replace word:\n");
scanf(" %s",b);
printf("Enter any word in the string to be replaced:\n");
scanf(" %s",c);

for(i=0;a[i];i++)
	{
	if(a[i]==c[0]i)
		{
		for(j=0;c[j];j++,i++)
			{
			if(a[i]!=c[j])
			break;
			}
		if(c[j]!='\0')
		i=i-j;
		else
		break;
		}
	}
if(a[i]=='\0')
	{
	for(;a[i]!=' '&&i>=0;i--);
	for(i=i+1,j=0;b[j];j++,i++)
	a[i]=b[j];
	a[i]='\0';
	}
else if(a[i]==' ')
	{
		for(i=i-1,m=0;a[i]!=' '&&i>=0;i--,m++);
		ls1=strlen(a);
		ls2=strlen(b);
		if(m<ls2)
			{
			for(;m<ls2;m++)
				{
				for(l=ls1;l>=i;l--)
					a[l+1]=a[l];
				ls1=ls1+1;
				}
			}
		else
			{
			for(m=i+1;a[m]!=' ';m++);
			while(m>ls2)
				{
				for(l=i+1;l<ls1;l++)
				a[l]=a[l+1];
				for(m=i+1;a[m]=' ';m++);
				}
			}
	for(l=i+1,k=0;b[k];l++,k++)
	a[l]=b[k];
	}
printf("After replacing the word:\n%s\n",a);

}

